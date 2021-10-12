// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/twist__struct.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/wrench__struct.hpp"
// Member 'time_from_start'
#include "builtin_interfaces/msg/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianTrajectoryPoint_
{
  using Type = CartesianTrajectoryPoint_<ContainerAllocator>;

  explicit CartesianTrajectoryPoint_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init),
    wrench(_init),
    time_from_start(_init)
  {
    (void)_init;
  }

  explicit CartesianTrajectoryPoint_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    twist(_alloc, _init),
    wrench(_alloc, _init),
    time_from_start(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _wrench_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _wrench_type wrench;
  using _time_from_start_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _time_from_start_type time_from_start;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__wrench(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->wrench = _arg;
    return *this;
  }
  Type & set__time_from_start(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->time_from_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianTrajectoryPoint_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->wrench != other.wrench) {
      return false;
    }
    if (this->time_from_start != other.time_from_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianTrajectoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianTrajectoryPoint_

// alias to use template instance with default allocator
using CartesianTrajectoryPoint =
  cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartesian_trajectory_msgs

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__STRUCT_HPP_
