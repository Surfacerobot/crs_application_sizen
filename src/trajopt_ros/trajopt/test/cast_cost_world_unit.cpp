#include <trajopt_utils/macros.h>
TRAJOPT_IGNORE_WARNINGS_PUSH
#include <ctime>
#include <gtest/gtest.h>
#include <boost/filesystem/path.hpp>

#include <tesseract/tesseract.h>
#include <tesseract_environment/core/utils.h>
#include <tesseract_scene_graph/utils.h>
TRAJOPT_IGNORE_WARNINGS_POP

#include <trajopt/collision_terms.hpp>
#include <trajopt/common.hpp>
#include <trajopt/plot_callback.hpp>
#include <trajopt/problem_description.hpp>
#include <trajopt_sco/optimizers.hpp>
#include <trajopt_test_utils.hpp>
#include <trajopt_utils/clock.hpp>
#include <trajopt_utils/config.hpp>
#include <trajopt_utils/eigen_conversions.hpp>
#include <trajopt_utils/logging.hpp>
#include <trajopt_utils/stl_to_string.hpp>

using namespace trajopt;
using namespace std;
using namespace util;
using namespace tesseract;
using namespace tesseract_environment;
using namespace tesseract_collision;
using namespace tesseract_kinematics;
using namespace tesseract_visualization;
using namespace tesseract_scene_graph;
using namespace tesseract_geometry;

static bool plotting = false;

class CastWorldTest : public testing::TestWithParam<const char*>
{
public:
  Tesseract::Ptr tesseract_ = std::make_shared<Tesseract>(); /**< Tesseract */
  Visualization::Ptr plotter_;                               /**< Trajopt Plotter */

  void SetUp() override
  {
    boost::filesystem::path urdf_file(std::string(TRAJOPT_DIR) + "/test/data/boxbot_world.urdf");
    boost::filesystem::path srdf_file(std::string(TRAJOPT_DIR) + "/test/data/boxbot.srdf");

    ResourceLocator::Ptr locator = std::make_shared<SimpleResourceLocator>(locateResource);
    EXPECT_TRUE(tesseract_->init(urdf_file, srdf_file, locator));

    gLogLevel = util::LevelError;

    // Create plotting tool
    //    plotter_.reset(new tesseract_ros::ROSBasicPlotting(env_));

    // Next add objects that can be attached/detached to the scene
    auto box = std::make_shared<Box>(1.0, 1.0, 1.0);

    auto visual = std::make_shared<Visual>();
    visual->geometry = box;
    visual->origin = Eigen::Isometry3d::Identity();

    auto collision = std::make_shared<Collision>();
    collision->geometry = box;
    collision->origin = Eigen::Isometry3d::Identity();

    Link new_link("box_world");
    new_link.visual.push_back(visual);
    new_link.collision.push_back(collision);

    Joint new_joint("box_world-base_link");
    new_joint.parent_link_name = "base_link";
    new_joint.child_link_name = "box_world";

    tesseract_->getEnvironment()->addLink(std::move(new_link), std::move(new_joint));

    // TODO: Need to add method to environment to disable collision and hid objects
  }
};

TEST_F(CastWorldTest, boxes)  // NOLINT
{
  CONSOLE_BRIDGE_logDebug("CastWorldTest, boxes");

  Json::Value root = readJsonFile(std::string(TRAJOPT_DIR) + "/test/data/config/box_cast_test.json");

  std::unordered_map<std::string, double> ipos;
  ipos["boxbot_x_joint"] = -1.9;
  ipos["boxbot_y_joint"] = 0;
  tesseract_->getEnvironment()->setState(ipos);

  //  plotter_->plotScene();

  TrajOptProb::Ptr prob = ConstructProblem(root, tesseract_);
  ASSERT_TRUE(!!prob);

  std::vector<ContactResultMap> collisions;
  tesseract_environment::StateSolver::Ptr state_solver = prob->GetEnv()->getStateSolver();
  ContinuousContactManager::Ptr manager = prob->GetEnv()->getContinuousContactManager();

  AdjacencyMap::Ptr adjacency_map = std::make_shared<AdjacencyMap>(tesseract_->getEnvironment()->getSceneGraph(),
                                                                   prob->GetKin()->getActiveLinkNames(),
                                                                   prob->GetEnv()->getCurrentState()->link_transforms);

  manager->setActiveCollisionObjects(adjacency_map->getActiveLinkNames());
  manager->setContactDistanceThreshold(0);

  bool found =
      checkTrajectory(collisions, *manager, *state_solver, prob->GetKin()->getJointNames(), prob->GetInitTraj());

  EXPECT_TRUE(found);
  CONSOLE_BRIDGE_logDebug((found) ? ("Initial trajectory is in collision") : ("Initial trajectory is collision free"));

  sco::BasicTrustRegionSQP opt(prob);
  if (plotting)
    opt.addCallback(PlotCallback(*prob, plotter_));
  opt.initialize(trajToDblVec(prob->GetInitTraj()));
  opt.optimize();

  if (plotting)
    plotter_->clear();

  collisions.clear();
  found = checkTrajectory(
      collisions, *manager, *state_solver, prob->GetKin()->getJointNames(), getTraj(opt.x(), prob->GetVars()));

  EXPECT_FALSE(found);
  CONSOLE_BRIDGE_logDebug((found) ? ("Final trajectory is in collision") : ("Final trajectory is collision free"));
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);

  //  pnh.param("plotting", plotting, false);
  return RUN_ALL_TESTS();
}
