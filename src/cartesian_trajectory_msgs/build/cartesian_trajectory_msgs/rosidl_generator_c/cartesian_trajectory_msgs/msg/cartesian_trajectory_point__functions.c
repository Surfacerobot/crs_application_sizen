// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/twist__functions.h"
// Member `wrench`
#include "geometry_msgs/msg/wrench__functions.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/duration__functions.h"

bool
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__init(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__init(&msg->time_from_start)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
  // time_from_start
  builtin_interfaces__msg__Duration__fini(&msg->time_from_start);
}

cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint *
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__create()
{
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint * msg = (cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint *)malloc(sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint));
  bool success = cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__destroy(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__init(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint *)calloc(size, sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence *
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * array = (cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__destroy(cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(array);
  }
  free(array);
}
