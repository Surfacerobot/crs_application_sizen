// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_trajectory_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TOLERANCE__STRUCT_H_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TOLERANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position_error'
// Member 'orientation_error'
#include "geometry_msgs/msg/vector3__struct.h"
// Member 'twist_error'
#include "geometry_msgs/msg/twist__struct.h"
// Member 'wrench_error'
#include "geometry_msgs/msg/wrench__struct.h"

// Struct defined in msg/CartesianTolerance in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__msg__CartesianTolerance
{
  geometry_msgs__msg__Vector3 position_error;
  geometry_msgs__msg__Vector3 orientation_error;
  geometry_msgs__msg__Twist twist_error;
  geometry_msgs__msg__Wrench wrench_error;
} cartesian_trajectory_msgs__msg__CartesianTolerance;

// Struct for a sequence of cartesian_trajectory_msgs__msg__CartesianTolerance.
typedef struct cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence
{
  cartesian_trajectory_msgs__msg__CartesianTolerance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TOLERANCE__STRUCT_H_
