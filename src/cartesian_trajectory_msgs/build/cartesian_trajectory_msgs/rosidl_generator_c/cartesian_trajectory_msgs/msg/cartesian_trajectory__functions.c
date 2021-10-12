// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `points`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__functions.h"
// Member `tcp_offset`
#include "geometry_msgs/msg/pose__functions.h"
// Member `tcp_frame`
#include "rosidl_generator_c/string_functions.h"

bool
cartesian_trajectory_msgs__msg__CartesianTrajectory__init(cartesian_trajectory_msgs__msg__CartesianTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  // points
  if (!cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__init(&msg->points, 0)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  // tcp_offset
  if (!geometry_msgs__msg__Pose__init(&msg->tcp_offset)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  // tcp_frame
  if (!rosidl_generator_c__String__init(&msg->tcp_frame)) {
    cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(cartesian_trajectory_msgs__msg__CartesianTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // points
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(&msg->points);
  // tcp_offset
  geometry_msgs__msg__Pose__fini(&msg->tcp_offset);
  // tcp_frame
  rosidl_generator_c__String__fini(&msg->tcp_frame);
}

cartesian_trajectory_msgs__msg__CartesianTrajectory *
cartesian_trajectory_msgs__msg__CartesianTrajectory__create()
{
  cartesian_trajectory_msgs__msg__CartesianTrajectory * msg = (cartesian_trajectory_msgs__msg__CartesianTrajectory *)malloc(sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectory));
  bool success = cartesian_trajectory_msgs__msg__CartesianTrajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__msg__CartesianTrajectory__destroy(cartesian_trajectory_msgs__msg__CartesianTrajectory * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__init(cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__msg__CartesianTrajectory * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__msg__CartesianTrajectory *)calloc(size, sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__msg__CartesianTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__fini(cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(&array->data[i]);
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

cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence *
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * array = (cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__destroy(cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__fini(array);
  }
  free(array);
}
