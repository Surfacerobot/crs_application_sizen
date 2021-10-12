// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__STRUCT_HPP_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'points'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__struct.hpp"
// Member 'tcp_offset'
#include "geometry_msgs/msg/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectory __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianTrajectory_
{
  using Type = CartesianTrajectory_<ContainerAllocator>;

  explicit CartesianTrajectory_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    tcp_offset(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->tcp_frame = "";
    }
  }

  explicit CartesianTrajectory_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tcp_offset(_alloc, _init),
    tcp_frame(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->tcp_frame = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _points_type =
    std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>::other>;
  _points_type points;
  using _tcp_offset_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _tcp_offset_type tcp_offset;
  using _tcp_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tcp_frame_type tcp_frame;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__tcp_offset(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->tcp_offset = _arg;
    return *this;
  }
  Type & set__tcp_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tcp_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectory
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTrajectory
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->tcp_offset != other.tcp_offset) {
      return false;
    }
    if (this->tcp_frame != other.tcp_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianTrajectory_

// alias to use template instance with default allocator
using CartesianTrajectory =
  cartesian_trajectory_msgs::msg::CartesianTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartesian_trajectory_msgs

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__STRUCT_HPP_
