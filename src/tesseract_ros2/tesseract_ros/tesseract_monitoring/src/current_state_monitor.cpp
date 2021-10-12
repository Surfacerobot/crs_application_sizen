/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2011, Willow Garage, Inc.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

/* Author: Ioan Sucan */

#include <tesseract_common/macros.h>
TESSERACT_COMMON_IGNORE_WARNINGS_PUSH
#include <rclcpp/rclcpp.hpp>
#include <limits>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <tf2_eigen/tf2_eigen.h>
#include <tf2_ros/transform_broadcaster.h>
TESSERACT_COMMON_IGNORE_WARNINGS_POP

#include <tesseract_monitoring/current_state_monitor.h>
#include <tesseract_rosutils/conversions.h>
#include <tesseract_rosutils/utils.h>

using std::placeholders::_1;
using std::placeholders::_2;

namespace tesseract_monitoring
{
// CurrentStateMonitor::CurrentStateMonitor(const tesseract_environment::Environment::ConstPtr& env,
//                                         const tesseract::ForwardKinematicsManager::ConstPtr& kinematics_manager)
//  : CurrentStateMonitor(env, kinematics_manager, std::make_shared<rclcpp::Node>("current_state_monitor"))
//{
//}

CurrentStateMonitor::CurrentStateMonitor(const tesseract_environment::Environment::ConstPtr& env,
                                         const tesseract::ForwardKinematicsManager::ConstPtr& kinematics_manager,
                                         rclcpp::Node::SharedPtr node)
  : node_(node)
  , env_(env)
  , env_state_(*env->getCurrentState())
  , last_environment_revision_(env_->getRevision())
  , kinematics_manager_(kinematics_manager)
  , state_monitor_started_(false)
  , copy_dynamics_(false)
  , error_(std::numeric_limits<double>::epsilon())
  , tf_broadcaster_(node_)
{
}

CurrentStateMonitor::~CurrentStateMonitor() { stopStateMonitor(); }
tesseract_environment::EnvState::Ptr CurrentStateMonitor::getCurrentState() const
{
  boost::mutex::scoped_lock slock(state_update_lock_);
  return std::make_shared<tesseract_environment::EnvState>(env_state_);
}

rclcpp::Time CurrentStateMonitor::getCurrentStateTime() const
{
  boost::mutex::scoped_lock slock(state_update_lock_);
  return current_state_time_;
}

std::pair<tesseract_environment::EnvState::Ptr, rclcpp::Time> CurrentStateMonitor::getCurrentStateAndTime() const
{
  boost::mutex::scoped_lock slock(state_update_lock_);
  return std::make_pair(std::make_shared<tesseract_environment::EnvState>(env_state_), current_state_time_);
}

std::unordered_map<std::string, double> CurrentStateMonitor::getCurrentStateValues() const
{
  std::map<std::string, double> m;
  boost::mutex::scoped_lock slock(state_update_lock_);
  return env_state_.joints;
}

void CurrentStateMonitor::addUpdateCallback(const JointStateUpdateCallback& fn)
{
  if (fn)
    update_callbacks_.push_back(fn);
}

void CurrentStateMonitor::clearUpdateCallbacks() { update_callbacks_.clear(); }
void CurrentStateMonitor::startStateMonitor(const std::string& joint_states_topic)
{
  if (!state_monitor_started_ && env_)
  {
    joint_time_.clear();
    if (joint_states_topic.empty())
      RCLCPP_ERROR(node_->get_logger(), "The joint states topic cannot be an empty string");
    else
    {
      joint_state_subscriber_ = node_->create_subscription<sensor_msgs::msg::JointState>(
          joint_states_topic, 25, std::bind(&CurrentStateMonitor::jointStateCallback, this, std::placeholders::_1));
    }
    state_monitor_started_ = true;
    monitor_start_time_ = node_->now();
    //    ROS_DEBUG("Listening to joint states on topic '%s'", nh_.resolveName(joint_states_topic).c_str());
  }
}

bool CurrentStateMonitor::isActive() const { return state_monitor_started_; }
void CurrentStateMonitor::stopStateMonitor()
{
  if (state_monitor_started_)
  {
    joint_state_subscriber_.reset();  // BUG Joe: Right way to do this>
    RCLCPP_DEBUG(node_->get_logger(), "No longer listening o joint states");
    state_monitor_started_ = false;
  }
}

std::string CurrentStateMonitor::getMonitoredTopic() const
{
  if (joint_state_subscriber_)
    return joint_state_subscriber_->get_topic_name();
  else
    return "";
}

bool CurrentStateMonitor::isPassiveOrMimicDOF(const std::string& /*dof*/) const
{
  // TODO: Levi Need to implement

  //  if (robot_model_->hasJointModel(dof))
  //  {
  //    if (robot_model_->getJointModel(dof)->isPassive() ||
  //    robot_model_->getJointModel(dof)->getMimic())
  //      return true;
  //  }
  //  else
  //  {
  //    // check if this DOF is part of a multi-dof passive joint
  //    std::size_t slash = dof.find_last_of("/");
  //    if (slash != std::string::npos)
  //    {
  //      std::string joint_name = dof.substr(0, slash);
  //      if (robot_model_->hasJointModel(joint_name))
  //        if (robot_model_->getJointModel(joint_name)->isPassive() ||
  //        robot_model_->getJointModel(joint_name)->getMimic())
  //          return true;
  //    }
  //  }
  return false;
}

bool CurrentStateMonitor::haveCompleteState() const
{
  bool result = true;
  boost::mutex::scoped_lock slock(state_update_lock_);
  for (const auto& joint : env_state_.joints)
    if (joint_time_.find(joint.first) == joint_time_.end())
    {
      if (!isPassiveOrMimicDOF(joint.first))
      {
        RCLCPP_DEBUG(node_->get_logger(), "Joint variable '%s' has never been updated", joint.first.c_str());
        result = false;
      }
    }
  return result;
}

bool CurrentStateMonitor::haveCompleteState(std::vector<std::string>& missing_states) const
{
  bool result = true;
  boost::mutex::scoped_lock slock(state_update_lock_);
  for (const auto& joint : env_state_.joints)
    if (joint_time_.find(joint.first) == joint_time_.end())
      if (!isPassiveOrMimicDOF(joint.first))
      {
        missing_states.push_back(joint.first);
        result = false;
      }
  return result;
}

bool CurrentStateMonitor::haveCompleteState(const rclcpp::Duration& age) const
{
  bool result = true;
  rclcpp::Time now = node_->now();
  rclcpp::Time old = now - age;
  boost::mutex::scoped_lock slock(state_update_lock_);
  for (const auto& joint : env_state_.joints)
  {
    if (isPassiveOrMimicDOF(joint.first))
      continue;
    std::map<std::string, rclcpp::Time>::const_iterator it = joint_time_.find(joint.first);
    if (it == joint_time_.end())
    {
      RCLCPP_DEBUG(node_->get_logger(), "Joint variable '%s' has never been updated", joint.first.c_str());
      result = false;
    }
    else if (it->second < old)
    {
      RCLCPP_DEBUG(node_->get_logger(),
                   "Joint variable '%s' was last updated %0.3lf seconds ago "
                   "(older than the allowed %0.3lf seconds)",
                   joint.first.c_str(),
                   (now - it->second).seconds(),
                   age.seconds());
      result = false;
    }
  }
  return result;
}

bool CurrentStateMonitor::haveCompleteState(const rclcpp::Duration& age, std::vector<std::string>& missing_states) const
{
  bool result = true;
  rclcpp::Time now = node_->now();
  rclcpp::Time old = now - age;
  boost::mutex::scoped_lock slock(state_update_lock_);

  for (const auto& joint : env_state_.joints)
  {
    if (isPassiveOrMimicDOF(joint.first))
      continue;
    std::map<std::string, rclcpp::Time>::const_iterator it = joint_time_.find(joint.first);
    if (it == joint_time_.end())
    {
      RCLCPP_DEBUG(node_->get_logger(), "Joint variable '%s' has never been updated", joint.first.c_str());
      missing_states.push_back(joint.first);
      result = false;
    }
    else if (it->second < old)
    {
      RCLCPP_DEBUG(node_->get_logger(),
                   "Joint variable '%s' was last updated %0.3lf seconds ago "
                   "(older than the allowed %0.3lf seconds)",
                   joint.first.c_str(),
                   (now - it->second).seconds(),
                   age.seconds());
      missing_states.push_back(joint.first);
      result = false;
    }
  }
  return result;
}

bool CurrentStateMonitor::waitForCurrentState(const rclcpp::Time t, double wait_time) const
{
  rclcpp::Time start = node_->now();
  rclcpp::Duration elapsed(0, 0);
  rclcpp::Duration timeout(wait_time);

  boost::mutex::scoped_lock slock(state_update_lock_);
  while (current_state_time_ < t)
  {
    state_update_condition_.wait_for(slock, boost::chrono::nanoseconds((timeout - elapsed).nanoseconds()));
    elapsed = node_->now() - start;
    if (elapsed > timeout)
      return false;
  }
  return true;
}

bool CurrentStateMonitor::waitForCompleteState(double wait_time) const
{
  double slept_time = 0.0;
  double sleep_step_s = std::min(0.05, wait_time / 10.0);
  while (!haveCompleteState() && slept_time < wait_time)
  {
    rclcpp::sleep_for(std::chrono::duration_cast<std::chrono::nanoseconds>(
        std::chrono::duration<double>(sleep_step_s)));  // TODO Joe: this seems unnecessarily clunky
    slept_time += sleep_step_s;
  }
  return haveCompleteState();
}

bool CurrentStateMonitor::waitForCompleteState(const std::string& manip, double wait_time) const
{
  if (waitForCompleteState(wait_time))
    return true;
  bool ok = true;

  // check to see if we have a fully known state for the joints we want to
  // record
  std::vector<std::string> missing_joints;
  if (!haveCompleteState(missing_joints))
  {
    const tesseract_kinematics::ForwardKinematics::ConstPtr& jmg = kinematics_manager_->getFwdKinematicSolver(manip);
    if (jmg)
    {
      std::set<std::string> mj;
      mj.insert(missing_joints.begin(), missing_joints.end());
      const std::vector<std::string>& names = jmg->getJointNames();
      bool ok = true;
      for (std::size_t i = 0; ok && i < names.size(); ++i)
        if (mj.find(names[i]) != mj.end())
          ok = false;
    }
    else
      ok = false;
  }
  return ok;
}

void CurrentStateMonitor::jointStateCallback(const sensor_msgs::msg::JointState::SharedPtr joint_state)
{
  if (joint_state->name.size() != joint_state->position.size())
  {
    RCLCPP_ERROR_ONCE(node_->get_logger(),
                      "State monitor received invalid joint state (number of joint names does not match number of "
                      "positions)");
    return;
  }
  bool update = false;

  {
    boost::mutex::scoped_lock slock(state_update_lock_);
    // read the received values, and update their time stamps
    current_state_time_ = joint_state->header.stamp;
    if (last_environment_revision_ != env_->getRevision())
    {
      env_state_ = tesseract_environment::EnvState(*env_->getCurrentState());
      last_environment_revision_ = env_->getRevision();
    }

    for (unsigned i = 0; i < joint_state->name.size(); ++i)
    {
      if (env_state_.joints.find(joint_state->name[i]) != env_state_.joints.end())
      {
        double diff = env_state_.joints[joint_state->name[i]] - joint_state->position[i];
        if (std::fabs(diff) > std::numeric_limits<double>::epsilon())
        {
          env_state_.joints[joint_state->name[i]] = joint_state->position[i];
          update = true;
        }
      }
    }

    if (update)
      env_state_ = tesseract_environment::EnvState(*(env_->getState(env_state_.joints)));

    std::string base_link = env_->getRootLinkName();
    std::vector<geometry_msgs::msg::TransformStamped> transforms;
    transforms.reserve(env_state_.joints.size());
    for (const auto& pose : env_state_.link_transforms)
    {
      if (pose.first != base_link)
      {
        geometry_msgs::msg::TransformStamped tf;  // TODO Joe: should be implemented as a tf2::toMsg() function
        Eigen::Quaterniond q(pose.second.linear());
        tf.transform.rotation.x = q.x();
        tf.transform.rotation.y = q.y();
        tf.transform.rotation.z = q.z();
        tf.transform.rotation.w = q.w();
        tf.transform.translation.x = pose.second.translation().x();
        tf.transform.translation.y = pose.second.translation().y();
        tf.transform.translation.z = pose.second.translation().z();

        tf.header.stamp = current_state_time_;
        tf.header.frame_id = base_link;
        tf.child_frame_id = pose.first;
        transforms.push_back(tf);
      }
    }
    try
    {
      tf_broadcaster_.sendTransform(transforms);
    }
    catch (std::exception& e)
    {
      RCLCPP_ERROR(node_->get_logger(), "%s", e);
    }
  }

  // callbacks, if needed
  if (update)
    for (std::size_t i = 0; i < update_callbacks_.size(); ++i)
      update_callbacks_[i](joint_state);

  // notify waitForCurrentState() *after* potential update callbacks
  state_update_condition_.notify_all();
}
}  // namespace tesseract_monitoring
