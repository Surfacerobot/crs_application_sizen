/**
 * @file puzzle_piece_plan.cpp
 * @brief Example using Trajopt for constrained cartesian planning
 *
 * @author Levi Armstrong
 * @date Dec 18, 2017
 * @version TODO
 * @bug No known bugs
 *
 * @copyright Copyright (c) 2017, Southwest Research Institute
 *
 * @par License
 * Software License Agreement (Apache License)
 * @par
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * @par
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <tesseract_common/macros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_PUSH
#include <ros/ros.h>
#include <fstream>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract/tesseract.h>
#include <tesseract_environment/core/utils.h>
#include <tesseract_rosutils/plotting.h>
#include <tesseract_rosutils/utils.h>
#include <tesseract_msgs/ModifyEnvironment.h>
#include <tesseract_msgs/GetEnvironmentChanges.h>
#include <trajopt/plot_callback.hpp>
#include <trajopt/problem_description.hpp>
#include <trajopt_utils/config.hpp>
#include <trajopt_utils/logging.hpp>

using namespace trajopt;
using namespace tesseract;
using namespace tesseract_environment;
using namespace tesseract_scene_graph;
using namespace tesseract_collision;
using namespace tesseract_rosutils;

const std::string ROBOT_DESCRIPTION_PARAM = "robot_description"; /**< Default ROS parameter for robot description */
const std::string ROBOT_SEMANTIC_PARAM =
    "robot_description_semantic"; /**< Default ROS parameter for robot description */
const std::string TRAJOPT_DESCRIPTION_PARAM =
    "trajopt_description"; /**< Default ROS parameter for trajopt description */
const std::string GET_ENVIRONMENT_CHANGES_SERVICE = "get_tesseract_changes_rviz";
const std::string MODIFY_ENVIRONMENT_SERVICE = "modify_tesseract_rviz";

static bool plotting_ = true;
static int steps_ = 5;
static std::string method_ = "json";
static Tesseract::Ptr tesseract_ = std::make_shared<Tesseract>();
static ros::ServiceClient modify_env_rviz;
static ros::ServiceClient get_env_changes_rviz;

bool checkRviz()
{
  // Get the current state of the environment
  get_env_changes_rviz.waitForExistence();
  tesseract_msgs::GetEnvironmentChanges env_changes;
  env_changes.request.revision = 0;
  if (get_env_changes_rviz.call(env_changes))
  {
    ROS_INFO("Retrieve current environment changes!");
  }
  else
  {
    ROS_ERROR("Failed retrieve current environment changes!");
    return false;
  }

  // There should not be any changes but check
  if (env_changes.response.revision != 0)
  {
    ROS_ERROR("The environment has changed externally!");
    return false;
  }
  return true;
}

/**
 * @brief Send RViz the latest number of commands
 * @param n The past revision number
 * @return True if successful otherwise false
 */
bool sendRvizChanges(int past_revision)
{
  modify_env_rviz.waitForExistence();
  tesseract_msgs::ModifyEnvironment update_env;
  update_env.request.id = tesseract_->getEnvironment()->getName();
  update_env.request.revision = past_revision;
  if (!toMsg(
          update_env.request.commands, tesseract_->getEnvironment()->getCommandHistory(), update_env.request.revision))
  {
    ROS_ERROR("Failed to generate commands to update rviz environment!");
    return false;
  }

  if (modify_env_rviz.call(update_env))
  {
    ROS_INFO("RViz environment Updated!");
  }
  else
  {
    ROS_INFO("Failed to update rviz environment");
    return false;
  }

  return true;
}

static tesseract_common::VectorIsometry3d makePuzzleToolPoses()
{
  tesseract_common::VectorIsometry3d path;  // results
  std::ifstream indata;                     // input file

  // You could load your parts from anywhere, but we are transporting them with
  // the git repo
  std::string filename = ros::package::getPath("tesseract_ros_examples") + "/config/puzzle_bent.csv";

  // In a non-trivial app, you'll of course want to check that calls like 'open'
  // succeeded
  indata.open(filename);

  std::string line;
  int lnum = 0;
  while (std::getline(indata, line))
  {
    ++lnum;
    if (lnum < 3)
      continue;

    std::stringstream lineStream(line);
    std::string cell;
    Eigen::Matrix<double, 6, 1> xyzijk;
    int i = -2;
    while (std::getline(lineStream, cell, ','))
    {
      ++i;
      if (i == -1)
        continue;

      xyzijk(i) = std::stod(cell);
    }

    Eigen::Vector3d pos = xyzijk.head<3>();
    pos = pos / 1000.0;  // Most things in ROS use meters as the unit of length.
                         // Our part was exported in mm.
    Eigen::Vector3d norm = xyzijk.tail<3>();
    norm.normalize();

    // This code computes two extra directions to turn the normal direction into
    // a full defined frame. Descartes
    // will search around this frame for extra poses, so the exact values do not
    // matter as long they are valid.
    Eigen::Vector3d temp_x = (-1 * pos).normalized();
    Eigen::Vector3d y_axis = (norm.cross(temp_x)).normalized();
    Eigen::Vector3d x_axis = (y_axis.cross(norm)).normalized();
    Eigen::Isometry3d pose;
    pose.matrix().col(0).head<3>() = x_axis;
    pose.matrix().col(1).head<3>() = y_axis;
    pose.matrix().col(2).head<3>() = norm;
    pose.matrix().col(3).head<3>() = pos;

    path.push_back(pose);
  }
  indata.close();

  return path;
}

ProblemConstructionInfo cppMethod()
{
  ProblemConstructionInfo pci(tesseract_);

  tesseract_common::VectorIsometry3d tool_poses = makePuzzleToolPoses();

  // Populate Basic Info
  pci.basic_info.n_steps = static_cast<int>(tool_poses.size());
  pci.basic_info.manip = "manipulator_aux";
  pci.basic_info.start_fixed = false;
  pci.basic_info.use_time = false;

  // Create Kinematic Object
  pci.kin = pci.getManipulator(pci.basic_info.manip);

  pci.opt_info.max_iter = 200;
  pci.opt_info.min_approx_improve = 1e-3;
  pci.opt_info.min_trust_box_size = 1e-3;

  // Populate Init Info
  Eigen::VectorXd start_pos = pci.env->getCurrentJointValues(pci.kin->getJointNames());

  pci.init_info.type = InitInfo::GIVEN_TRAJ;
  pci.init_info.data = start_pos.transpose().replicate(pci.basic_info.n_steps, 1);
  //  pci.init_info.data.col(6) = VectorXd::LinSpaced(steps_, start_pos[6],
  //  end_pos[6]);

  // Populate Cost Info
  std::shared_ptr<JointVelTermInfo> joint_vel = std::shared_ptr<JointVelTermInfo>(new JointVelTermInfo);
  joint_vel->coeffs = std::vector<double>(9, 1.0);
  joint_vel->targets = std::vector<double>(9, 0.0);
  joint_vel->first_step = 0;
  joint_vel->last_step = pci.basic_info.n_steps - 1;
  joint_vel->name = "joint_vel";
  joint_vel->term_type = TT_COST;
  pci.cost_infos.push_back(joint_vel);

  std::shared_ptr<JointAccTermInfo> joint_acc = std::shared_ptr<JointAccTermInfo>(new JointAccTermInfo);
  joint_acc->coeffs = std::vector<double>(9, 2.0);
  joint_acc->targets = std::vector<double>(9, 0.0);
  joint_acc->first_step = 0;
  joint_acc->last_step = pci.basic_info.n_steps - 1;
  joint_acc->name = "joint_acc";
  joint_acc->term_type = TT_COST;
  pci.cost_infos.push_back(joint_acc);

  std::shared_ptr<JointJerkTermInfo> joint_jerk = std::shared_ptr<JointJerkTermInfo>(new JointJerkTermInfo);
  joint_jerk->coeffs = std::vector<double>(9, 5.0);
  joint_jerk->targets = std::vector<double>(9, 0.0);
  joint_jerk->first_step = 0;
  joint_jerk->last_step = pci.basic_info.n_steps - 1;
  joint_jerk->name = "joint_jerk";
  joint_jerk->term_type = TT_COST;
  pci.cost_infos.push_back(joint_jerk);

  std::shared_ptr<CollisionTermInfo> collision = std::shared_ptr<CollisionTermInfo>(new CollisionTermInfo);
  collision->name = "collision";
  collision->term_type = TT_COST;
  collision->continuous = false;
  collision->first_step = 0;
  collision->last_step = pci.basic_info.n_steps - 1;
  collision->gap = 1;
  collision->info = createSafetyMarginDataVector(pci.basic_info.n_steps, 0.025, 20);
  pci.cost_infos.push_back(collision);

  // Populate Constraints
  for (auto i = 0; i < pci.basic_info.n_steps; ++i)
  {
    std::shared_ptr<DynamicCartPoseTermInfo> pose =
        std::shared_ptr<DynamicCartPoseTermInfo>(new DynamicCartPoseTermInfo);
    pose->term_type = TT_CNT;
    pose->name = "waypoint_cart_" + std::to_string(i);
    pose->target = "grinder_frame";
    pose->timestep = i;

    pose->link = "part";
    pose->tcp = tool_poses[static_cast<size_t>(i)];
    pose->pos_coeffs = Eigen::Vector3d(10, 10, 10);
    pose->rot_coeffs = Eigen::Vector3d(10, 10, 0);

    pci.cnt_infos.push_back(pose);
  }

  return pci;
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "puzzle_piece_auxilliary_axes_plan");
  ros::NodeHandle pnh("~");
  ros::NodeHandle nh;

  // Get ROS Parameters
  pnh.param("plotting", plotting_, plotting_);

  // Initial setup
  std::string urdf_xml_string, srdf_xml_string;
  nh.getParam(ROBOT_DESCRIPTION_PARAM, urdf_xml_string);
  nh.getParam(ROBOT_SEMANTIC_PARAM, srdf_xml_string);

  ResourceLocatorFn locator = tesseract_rosutils::locateResource;
  if (!tesseract_->init(urdf_xml_string, srdf_xml_string, locator))
    return -1;

  // Create plotting tool
  ROSPlottingPtr plotter = std::make_shared<ROSPlotting>(tesseract_->getEnvironment());

  // These are used to keep visualization updated
  modify_env_rviz = nh.serviceClient<tesseract_msgs::ModifyEnvironment>("modify_tesseract_rviz", 10);
  get_env_changes_rviz = nh.serviceClient<tesseract_msgs::GetEnvironmentChanges>("get_tesseract_changes_rviz", 10);

  // Check RViz to make sure nothing has changed
  if (!checkRviz())
    return -1;

  // Set the robot initial state
  std::unordered_map<std::string, double> ipos;
  ipos["joint_a1"] = -0.785398;
  ipos["joint_a2"] = 0.4;
  ipos["joint_a3"] = 0.0;
  ipos["joint_a4"] = -1.9;
  ipos["joint_a5"] = 0.0;
  ipos["joint_a6"] = 1.0;
  ipos["joint_a7"] = 0.0;
  ipos["joint_aux1"] = 0.0;
  ipos["joint_aux2"] = 0.0;
  tesseract_->getEnvironment()->setState(ipos);

  // Now update rviz environment
  if (!sendRvizChanges(0))
    return -1;

  // Set Log Level
  util::gLogLevel = util::LevelInfo;

  // Setup Problem
  ProblemConstructionInfo pci = cppMethod();
  TrajOptProb::Ptr prob = ConstructProblem(pci);

  // Solve Trajectory
  ROS_INFO("puzzle piece plan");

  std::vector<ContactResultMap> collisions;
  ContinuousContactManager::Ptr manager = prob->GetEnv()->getContinuousContactManager();
  AdjacencyMap::Ptr adjacency_map =
      std::make_shared<tesseract_environment::AdjacencyMap>(prob->GetEnv()->getSceneGraph(),
                                                            prob->GetKin()->getActiveLinkNames(),
                                                            prob->GetEnv()->getCurrentState()->link_transforms);

  manager->setActiveCollisionObjects(adjacency_map->getActiveLinkNames());
  manager->setContactDistanceThreshold(0);
  collisions.clear();
  bool found =
      checkTrajectory(*manager, *prob->GetEnv(), prob->GetKin()->getJointNames(), prob->GetInitTraj(), collisions);

  ROS_INFO((found) ? ("Initial trajectory is in collision") : ("Initial trajectory is collision free"));

  sco::BasicTrustRegionSQP opt(prob);
  opt.setParameters(pci.opt_info);
  if (plotting_)
    opt.addCallback(PlotCallback(*prob, plotter));

  opt.initialize(trajToDblVec(prob->GetInitTraj()));
  ros::Time tStart = ros::Time::now();
  sco::OptStatus status = opt.optimize();
  ROS_INFO("Optimization Status: %s, Planning time: %.3f",
           sco::statusToString(status).c_str(),
           (ros::Time::now() - tStart).toSec());

  if (plotting_)
    plotter->clear();

  collisions.clear();
  found = checkTrajectory(
      *manager, *prob->GetEnv(), prob->GetKin()->getJointNames(), getTraj(opt.x(), prob->GetVars()), collisions);

  ROS_INFO((found) ? ("Final trajectory is in collision") : ("Final trajectory is collision free"));

  plotter->plotTrajectory(prob->GetKin()->getJointNames(), getTraj(opt.x(), prob->GetVars()));
}
