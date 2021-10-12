// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_

#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/twist__traits.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/wrench__traits.hpp"
// Member 'time_from_start'
#include "builtin_interfaces/msg/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint>()
{
  return "cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct is_message<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__TRAITS_HPP_
