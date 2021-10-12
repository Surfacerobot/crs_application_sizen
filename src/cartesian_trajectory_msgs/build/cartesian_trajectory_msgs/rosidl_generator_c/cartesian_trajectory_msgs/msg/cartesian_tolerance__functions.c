// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartesian_trajectory_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position_error`
// Member `orientation_error`
#include "geometry_msgs/msg/vector3__functions.h"
// Member `twist_error`
#include "geometry_msgs/msg/twist__functions.h"
// Member `wrench_error`
#include "geometry_msgs/msg/wrench__functions.h"

bool
cartesian_trajectory_msgs__msg__CartesianTolerance__init(cartesian_trajectory_msgs__msg__CartesianTolerance * msg)
{
  if (!msg) {
    return false;
  }
  // position_error
  if (!geometry_msgs__msg__Vector3__init(&msg->position_error)) {
    cartesian_trajectory_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  // orientation_error
  if (!geometry_msgs__msg__Vector3__init(&msg->orientation_error)) {
    cartesian_trajectory_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  // twist_error
  if (!geometry_msgs__msg__Twist__init(&msg->twist_error)) {
    cartesian_trajectory_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  // wrench_error
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench_error)) {
    cartesian_trajectory_msgs__msg__CartesianTolerance__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__msg__CartesianTolerance__fini(cartesian_trajectory_msgs__msg__CartesianTolerance * msg)
{
  if (!msg) {
    return;
  }
  // position_error
  geometry_msgs__msg__Vector3__fini(&msg->position_error);
  // orientation_error
  geometry_msgs__msg__Vector3__fini(&msg->orientation_error);
  // twist_error
  geometry_msgs__msg__Twist__fini(&msg->twist_error);
  // wrench_error
  geometry_msgs__msg__Wrench__fini(&msg->wrench_error);
}

cartesian_trajectory_msgs__msg__CartesianTolerance *
cartesian_trajectory_msgs__msg__CartesianTolerance__create()
{
  cartesian_trajectory_msgs__msg__CartesianTolerance * msg = (cartesian_trajectory_msgs__msg__CartesianTolerance *)malloc(sizeof(cartesian_trajectory_msgs__msg__CartesianTolerance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__msg__CartesianTolerance));
  bool success = cartesian_trajectory_msgs__msg__CartesianTolerance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__msg__CartesianTolerance__destroy(cartesian_trajectory_msgs__msg__CartesianTolerance * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__msg__CartesianTolerance__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence__init(cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__msg__CartesianTolerance * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__msg__CartesianTolerance *)calloc(size, sizeof(cartesian_trajectory_msgs__msg__CartesianTolerance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__msg__CartesianTolerance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__msg__CartesianTolerance__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence__fini(cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__msg__CartesianTolerance__fini(&array->data[i]);
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

cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence *
cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence * array = (cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence__destroy(cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__msg__CartesianTolerance__Sequence__fini(array);
  }
  free(array);
}
