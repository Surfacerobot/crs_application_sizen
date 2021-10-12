// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_trajectory_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TOLERANCE__STRUCT_HPP_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TOLERANCE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position_error'
// Member 'orientation_error'
#include "geometry_msgs/msg/vector3__struct.hpp"
// Member 'twist_error'
#include "geometry_msgs/msg/twist__struct.hpp"
// Member 'wrench_error'
#include "geometry_msgs/msg/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTolerance __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTolerance __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianTolerance_
{
  using Type = CartesianTolerance_<ContainerAllocator>;

  explicit CartesianTolerance_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : position_error(_init),
    orientation_error(_init),
    twist_error(_init),
    wrench_error(_init)
  {
    (void)_init;
  }

  explicit CartesianTolerance_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : position_error(_alloc, _init),
    orientation_error(_alloc, _init),
    twist_error(_alloc, _init),
    wrench_error(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_error_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_error_type position_error;
  using _orientation_error_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_error_type orientation_error;
  using _twist_error_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_error_type twist_error;
  using _wrench_error_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _wrench_error_type wrench_error;

  // setters for named parameter idiom
  Type & set__position_error(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position_error = _arg;
    return *this;
  }
  Type & set__orientation_error(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation_error = _arg;
    return *this;
  }
  Type & set__twist_error(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist_error = _arg;
    return *this;
  }
  Type & set__wrench_error(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->wrench_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTolerance
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__msg__CartesianTolerance
    std::shared_ptr<cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianTolerance_ & other) const
  {
    if (this->position_error != other.position_error) {
      return false;
    }
    if (this->orientation_error != other.orientation_error) {
      return false;
    }
    if (this->twist_error != other.twist_error) {
      return false;
    }
    if (this->wrench_error != other.wrench_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianTolerance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianTolerance_

// alias to use template instance with default allocator
using CartesianTolerance =
  cartesian_trajectory_msgs::msg::CartesianTolerance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartesian_trajectory_msgs

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TOLERANCE__STRUCT_HPP_
