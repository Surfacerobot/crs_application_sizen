/**
 * @file glass_up_right_plan.cpp
 * @brief Example using Trajopt for constrained free space planning
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
#include <jsoncpp/json/json.h>
#include <ros/ros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract/tesseract.h>
#include <tesseract_environment/core/utils.h>
#include <tesseract_rosutils/plotting.h>
#include <tesseract_rosutils/utils.h>
#include <tesseract_msgs/ModifyEnvironment.h>
#include <tesseract_msgs/GetEnvironmentChanges.h>
#include <trajopt/plot_callback.hpp>
#include <trajopt/file_write_callback.hpp>
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
const std::string ROBOT_SEMANTIC_PARAM = "robot_description_semantic"; /**< Default ROS parameter for robot
                                                                          description */
const std::string TRAJOPT_DESCRIPTION_PARAM =
    "trajopt_description"; /**< Default ROS parameter for trajopt description */
const std::string GET_ENVIRONMENT_CHANGES_SERVICE = "get_tesseract_changes_rviz";
const std::string MODIFY_ENVIRONMENT_SERVICE = "modify_tesseract_rviz";

static bool plotting_ = true;
static bool write_to_file_ = false;
static int steps_ = 5;
static std::string method_ = "json";
static Tesseract::Ptr tesseract_ = std::make_shared<Tesseract>();
static ros::ServiceClient modify_env_rviz;
static ros::ServiceClient get_env_changes_rviz;

TrajOptProb::Ptr jsonMethod()
{
  ros::NodeHandle nh;
  std::string trajopt_config;

  nh.getParam(TRAJOPT_DESCRIPTION_PARAM, trajopt_config);

  Json::Value root;
  Json::Reader reader;
  bool parse_success = reader.parse(trajopt_config.c_str(), root);
  if (!parse_success)
  {
    ROS_FATAL("Failed to load trajopt json file from ros parameter");
  }

  return ConstructProblem(root, tesseract_);
}

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

TrajOptProb::Ptr cppMethod()
{
  ProblemConstructionInfo pci(tesseract_);

  // Populate Basic Info
  pci.basic_info.n_steps = steps_;
  pci.basic_info.manip = "manipulator";
  pci.basic_info.start_fixed = false;
  pci.basic_info.use_time = false;

  // Create Kinematic Object
  pci.kin = pci.getManipulator(pci.basic_info.manip);

  // Populate Init Info
  EnvState::ConstPtr current_state = pci.env->getCurrentState();
  Eigen::VectorXd start_pos;
  start_pos.resize(pci.kin->numJoints());
  int cnt = 0;
  for (const auto& j : pci.kin->getJointNames())
  {
    start_pos[cnt] = current_state->joints.at(j);
    ++cnt;
  }

  Eigen::VectorXd end_pos;
  end_pos.resize(pci.kin->numJoints());
  end_pos << 0.4, 0.2762, 0.0, -1.3348, 0.0, 1.4959, 0.0;

  pci.init_info.type = InitInfo::GIVEN_TRAJ;
  pci.init_info.data = tesseract_common::TrajArray(steps_, pci.kin->numJoints());
  for (unsigned idof = 0; idof < pci.kin->numJoints(); ++idof)
  {
    pci.init_info.data.col(idof) = Eigen::VectorXd::LinSpaced(steps_, start_pos[idof], end_pos[idof]);
  }

  // Populate Cost Info
  std::shared_ptr<JointVelTermInfo> jv = std::shared_ptr<JointVelTermInfo>(new JointVelTermInfo);
  jv->coeffs = std::vector<double>(7, 1.0);
  jv->targets = std::vector<double>(7, 0.0);
  jv->first_step = 0;
  jv->last_step = pci.basic_info.n_steps - 1;
  jv->name = "joint_vel";
  jv->term_type = TT_COST;
  pci.cost_infos.push_back(jv);

  std::shared_ptr<CollisionTermInfo> collision = std::shared_ptr<CollisionTermInfo>(new CollisionTermInfo);
  collision->name = "collision";
  collision->term_type = TT_COST;
  collision->continuous = false;
  collision->first_step = 0;
  collision->last_step = pci.basic_info.n_steps - 1;
  collision->gap = 1;
  collision->info = createSafetyMarginDataVector(pci.basic_info.n_steps, 0.025, 20);
  for (auto& info : collision->info)
  {
    info->SetPairSafetyMarginData("base_link", "link_5", 0.05, 10);
    info->SetPairSafetyMarginData("link_3", "link_5", 0.01, 10);
    info->SetPairSafetyMarginData("link_3", "link_6", 0.01, 10);
  }
  pci.cost_infos.push_back(collision);

  // Populate Constraints
  double delta = 0.5 / pci.basic_info.n_steps;
  for (auto i = 0; i < pci.basic_info.n_steps; ++i)
  {
    std::shared_ptr<CartPoseTermInfo> pose = std::shared_ptr<CartPoseTermInfo>(new CartPoseTermInfo);
    pose->term_type = TT_CNT;
    pose->name = "waypoint_cart_" + std::to_string(i);
    pose->link = "tool0";
    pose->timestep = i;
    pose->xyz = Eigen::Vector3d(0.5, -0.2 + delta * i, 0.62);
    pose->wxyz = Eigen::Vector4d(0.0, 0.0, 1.0, 0.0);
    if (i == (pci.basic_info.n_steps - 1) || i == 0)
    {
      pose->pos_coeffs = Eigen::Vector3d(10, 10, 10);
      pose->rot_coeffs = Eigen::Vector3d(10, 10, 10);
    }
    else
    {
      pose->pos_coeffs = Eigen::Vector3d(0, 0, 0);
      pose->rot_coeffs = Eigen::Vector3d(10, 10, 0);
    }
    pci.cnt_infos.push_back(pose);
  }

  return ConstructProblem(pci);
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "glass_up_right_plan");
  ros::NodeHandle pnh("~");
  ros::NodeHandle nh;

  // Get ROS Parameters
  pnh.param("plotting", plotting_, plotting_);
  pnh.param("write_to_file", write_to_file_, write_to_file_);
  pnh.param<std::string>("method", method_, method_);
  pnh.param<int>("steps", steps_, steps_);

  // Initial setup
  std::string urdf_xml_string, srdf_xml_string;
  nh.getParam(ROBOT_DESCRIPTION_PARAM, urdf_xml_string);
  nh.getParam(ROBOT_SEMANTIC_PARAM, srdf_xml_string);

  ResourceLocatorFn locator = tesseract_rosutils::locateResource;
  if (!tesseract_->init(urdf_xml_string, srdf_xml_string, locator))
    return -1;

  // Create plotting tool
  tesseract_rosutils::ROSPlottingPtr plotter =
      std::make_shared<tesseract_rosutils::ROSPlotting>(tesseract_->getEnvironment());

  // These are used to keep visualization updated
  modify_env_rviz = nh.serviceClient<tesseract_msgs::ModifyEnvironment>("modify_tesseract_rviz", 10);
  get_env_changes_rviz = nh.serviceClient<tesseract_msgs::GetEnvironmentChanges>("get_tesseract_changes_rviz", 10);

  // Check RViz to make sure nothing has changed
  if (!checkRviz())
    return -1;

  // Add sphere to environment
  Link link_sphere("sphere_attached");

  Visual::Ptr visual = std::make_shared<Visual>();
  visual->origin = Eigen::Isometry3d::Identity();
  visual->origin.translation() = Eigen::Vector3d(0.5, 0, 0.55);
  visual->geometry = std::make_shared<tesseract_geometry::Sphere>(0.15);
  link_sphere.visual.push_back(visual);

  Collision::Ptr collision = std::make_shared<Collision>();
  collision->origin = visual->origin;
  collision->geometry = visual->geometry;
  link_sphere.collision.push_back(collision);

  Joint joint_sphere("joint_sphere_attached");
  joint_sphere.parent_link_name = "base_link";
  joint_sphere.child_link_name = link_sphere.getName();
  joint_sphere.type = JointType::FIXED;

  tesseract_->getEnvironment()->addLink(link_sphere, joint_sphere);

  // Now update rviz environment
  if (!sendRvizChanges(0))
    return -1;

  // Set the robot initial state
  std::unordered_map<std::string, double> ipos;
  ipos["joint_a1"] = -0.4;
  ipos["joint_a2"] = 0.2762;
  ipos["joint_a3"] = 0.0;
  ipos["joint_a4"] = -1.3348;
  ipos["joint_a5"] = 0.0;
  ipos["joint_a6"] = 1.4959;
  ipos["joint_a7"] = 0.0;
  tesseract_->getEnvironment()->setState(ipos);

  //  plotter->plotScene();

  // Set Log Level
  util::gLogLevel = util::LevelInfo;

  // Setup Problem
  TrajOptProb::Ptr prob;
  if (method_ == "cpp")
    prob = cppMethod();
  else
    prob = jsonMethod();

  // Solve Trajectory
  ROS_INFO("glass upright plan example");

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
  if (plotting_)
  {
    opt.addCallback(PlotCallback(*prob, plotter));
  }

  std::shared_ptr<std::ofstream> stream_ptr;
  if (write_to_file_)
  {
    // Create file write callback discarding any of the file's current contents
    stream_ptr.reset(new std::ofstream);
    std::string path = ros::package::getPath("trajopt") + "/scripts/glass_up_right_plan.csv";
    stream_ptr->open(path, std::ofstream::out | std::ofstream::trunc);
    opt.addCallback(trajopt::WriteCallback(stream_ptr, prob));
  }

  opt.initialize(trajToDblVec(prob->GetInitTraj()));
  ros::Time tStart = ros::Time::now();
  opt.optimize();
  ROS_ERROR("planning time: %.3f", (ros::Time::now() - tStart).toSec());

  double d = 0;
  tesseract_common::TrajArray traj = getTraj(opt.x(), prob->GetVars());
  for (unsigned i = 1; i < traj.rows(); ++i)
  {
    for (unsigned j = 0; j < traj.cols(); ++j)
    {
      d += std::abs(traj(i, j) - traj(i - 1, j));
    }
  }
  ROS_ERROR("trajectory norm: %.3f", d);

  if (plotting_)
  {
    plotter->clear();
  }

  if (write_to_file_)
  {
    stream_ptr->close();
    ROS_INFO("Data written to file. Evaluate using scripts in trajopt/scripts.");
  }

  collisions.clear();
  found = checkTrajectory(
      *manager, *prob->GetEnv(), prob->GetKin()->getJointNames(), getTraj(opt.x(), prob->GetVars()), collisions);

  ROS_INFO((found) ? ("Final trajectory is in collision") : ("Final trajectory is collision free"));

  if (plotting_)
  {
    plotter->plotTrajectory(prob->GetKin()->getJointNames(), getTraj(opt.x(), prob->GetVars()));
  }
}
