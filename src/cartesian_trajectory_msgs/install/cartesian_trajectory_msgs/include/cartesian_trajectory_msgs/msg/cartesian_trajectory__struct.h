// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__STRUCT_H_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'points'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__struct.h"
// Member 'tcp_offset'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'tcp_frame'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/CartesianTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__msg__CartesianTrajectory
{
  std_msgs__msg__Header header;
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence points;
  geometry_msgs__msg__Pose tcp_offset;
  rosidl_generator_c__String tcp_frame;
} cartesian_trajectory_msgs__msg__CartesianTrajectory;

// Struct for a sequence of cartesian_trajectory_msgs__msg__CartesianTrajectory.
typedef struct cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence
{
  cartesian_trajectory_msgs__msg__CartesianTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__STRUCT_H_
