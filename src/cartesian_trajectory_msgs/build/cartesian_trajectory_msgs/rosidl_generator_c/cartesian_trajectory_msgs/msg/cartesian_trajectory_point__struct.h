// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/twist__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/wrench__struct.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/duration__struct.h"

// Struct defined in msg/CartesianTrajectoryPoint in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint
{
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Wrench wrench;
  builtin_interfaces__msg__Duration time_from_start;
} cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint;

// Struct for a sequence of cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint.
typedef struct cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence
{
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY_POINT__STRUCT_H_
