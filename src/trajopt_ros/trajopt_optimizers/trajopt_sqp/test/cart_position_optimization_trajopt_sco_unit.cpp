#include <trajopt_utils/macros.h>
TRAJOPT_IGNORE_WARNINGS_PUSH
#include <gtest/gtest.h>
#include <iostream>

#include <tesseract/tesseract.h>
#include <tesseract_scene_graph/resource_locator.h>
#include <tesseract_common/macros.h>
#include <jsoncpp/json/json.h>

#include <boost/filesystem/path.hpp>
#include <console_bridge/console.h>
TRAJOPT_IGNORE_WARNINGS_POP

#include <tesseract_environment/core/utils.h>
#include <trajopt/plot_callback.hpp>
#include <trajopt/problem_description.hpp>
#include <trajopt_utils/config.hpp>
#include <trajopt_utils/logging.hpp>

using namespace trajopt;
using namespace tesseract;
using namespace tesseract_environment;
using namespace tesseract_scene_graph;
using namespace tesseract_collision;

const bool DEBUG = true;

inline std::string locateResource(const std::string& url)
{
  std::string mod_url = url;
  if (url.find("package://trajopt") == 0)
  {
    mod_url.erase(0, strlen("package://trajopt"));
    size_t pos = mod_url.find('/');
    if (pos == std::string::npos)
    {
      return std::string();
    }

    std::string package = mod_url.substr(0, pos);
    mod_url.erase(0, pos);
    std::string package_path = std::string(TRAJOPT_DIR);

    if (package_path.empty())
    {
      return std::string();
    }

    mod_url = package_path + mod_url;
  }

  return mod_url;
}

// This is example is made to pair with cart_position_example.cpp. This is the same motion planning problem in the
// trajopt_sco framework
TEST(CartPositionOptimizationTrajoptSCO, cart_position_optimization_trajopt_sco)  // NOLINT
{
  if (DEBUG)
  {
    console_bridge::setLogLevel(console_bridge::LogLevel::CONSOLE_BRIDGE_LOG_DEBUG);
    util::gLogLevel = util::LevelInfo;
  }
  else
  {
    console_bridge::setLogLevel(console_bridge::LogLevel::CONSOLE_BRIDGE_LOG_NONE);
    util::gLogLevel = util::LevelError;
  }

  // 1)  Load Robot
  boost::filesystem::path urdf_file(std::string(TRAJOPT_DIR) + "/test/data/arm_around_table.urdf");
  boost::filesystem::path srdf_file(std::string(TRAJOPT_DIR) + "/test/data/pr2.srdf");
  tesseract_scene_graph::ResourceLocator::Ptr locator =
      std::make_shared<tesseract_scene_graph::SimpleResourceLocator>(locateResource);
  auto tesseract = std::make_shared<tesseract::Tesseract>();
  tesseract->init(urdf_file, srdf_file, locator);

  // Extract necessary kinematic information
  auto forward_kinematics = tesseract->getFwdKinematicsManager()->getFwdKinematicSolver("right_arm");
  tesseract_environment::AdjacencyMap::Ptr adjacency_map = std::make_shared<tesseract_environment::AdjacencyMap>(
      tesseract->getEnvironment()->getSceneGraph(),
      forward_kinematics->getActiveLinkNames(),
      tesseract->getEnvironment()->getCurrentState()->link_transforms);

  ProblemConstructionInfo pci(tesseract);

  // Populate Basic Info
  pci.basic_info.n_steps = 1;
  pci.basic_info.manip = "right_arm";
  pci.basic_info.start_fixed = false;
  pci.basic_info.use_time = false;

  // Create Kinematic Object
  pci.kin = pci.getManipulator(pci.basic_info.manip);

  // Populate Init Info
  EnvState::ConstPtr current_state = pci.env->getCurrentState();
  Eigen::VectorXd start_pos(forward_kinematics->numJoints());
  start_pos << 0, 0, 0, -1.0, 0, -1, 0.0;
  if (DEBUG)
    std::cout << "Joint Limits:\n" << forward_kinematics->getLimits().transpose() << std::endl;

  pci.init_info.type = InitInfo::GIVEN_TRAJ;
  pci.init_info.data = tesseract_common::TrajArray(1, pci.kin->numJoints());
  auto zero = Eigen::VectorXd::Zero(7);
  pci.init_info.data = zero.transpose();

  auto target_pose = Eigen::Isometry3d::Identity();
  auto joint_target = start_pos;
  forward_kinematics->calcFwdKin(target_pose, joint_target);
  auto world_to_base = pci.env->getCurrentState()->link_transforms.at(forward_kinematics->getBaseLinkName());
  target_pose = world_to_base * target_pose;

  if (DEBUG)
    std::cout << "target_pose:\n" << target_pose.matrix() << std::endl;

  {
    auto pose = std::make_shared<CartPoseTermInfo>();
    pose->term_type = TT_CNT;
    pose->name = "waypoint_cart_0";
    pose->link = "r_gripper_tool_frame";
    pose->timestep = 0;

    pose->xyz = target_pose.translation();
    Eigen::Quaterniond q(target_pose.linear());
    pose->wxyz = Eigen::Vector4d(q.w(), q.x(), q.y(), q.z());
    pose->pos_coeffs = Eigen::Vector3d(1, 1, 1);
    pose->rot_coeffs = Eigen::Vector3d(1, 1, 1);

    pci.cnt_infos.push_back(pose);
  }

  pci.basic_info.convex_solver = sco::ModelType::OSQP;

  auto prob = ConstructProblem(pci);

  sco::BasicTrustRegionSQP opt(prob);

  opt.initialize(trajToDblVec(prob->GetInitTraj()));
  opt.optimize();

  tesseract_common::TrajArray traj = getTraj(opt.x(), prob->GetVars());

  for (Eigen::Index i = 0; i < traj.cols(); i++)
    EXPECT_NEAR(traj(0, i), joint_target[i], 1.1e-3);

  if (DEBUG)
  {
    std::cout << "Initial: " << prob->GetInitTraj() << std::endl;
    std::cout << "Results: " << traj << std::endl;
  }
}
