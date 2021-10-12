// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `trajectory`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__functions.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__functions.h"
// Member `force`
#include "geometry_msgs/msg/wrench__functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!cartesian_trajectory_msgs__msg__CartesianTrajectory__init(&msg->trajectory)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(msg);
    return false;
  }
  // path_tolerance
  if (!cartesian_trajectory_msgs__msg__CartesianTolerance__init(&msg->path_tolerance)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(msg);
    return false;
  }
  // goal_tolerance
  if (!cartesian_trajectory_msgs__msg__CartesianTolerance__init(&msg->goal_tolerance)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(msg);
    return false;
  }
  // force
  if (!geometry_msgs__msg__Wrench__init(&msg->force)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(msg);
    return false;
  }
  // speed
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(&msg->trajectory);
  // path_tolerance
  cartesian_trajectory_msgs__msg__CartesianTolerance__fini(&msg->path_tolerance);
  // goal_tolerance
  cartesian_trajectory_msgs__msg__CartesianTolerance__fini(&msg->goal_tolerance);
  // force
  geometry_msgs__msg__Wrench__fini(&msg->force);
  // speed
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `err_msg`
#include "rosidl_generator_c/string_functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // err_msg
  if (!rosidl_generator_c__String__init(&msg->err_msg)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // err_msg
  rosidl_generator_c__String__fini(&msg->err_msg);
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `tcp_frame`
// already included above
// #include "rosidl_generator_c/string_functions.h"
// Member `desired`
// Member `virtual_desired`
// Member `actual`
// Member `error`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(msg);
    return false;
  }
  // tcp_frame
  if (!rosidl_generator_c__String__init(&msg->tcp_frame)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(msg);
    return false;
  }
  // desired
  if (!cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__init(&msg->desired)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(msg);
    return false;
  }
  // virtual_desired
  if (!cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__init(&msg->virtual_desired)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(msg);
    return false;
  }
  // actual
  if (!cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__init(&msg->actual)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(msg);
    return false;
  }
  // error
  if (!cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__init(&msg->error)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tcp_frame
  rosidl_generator_c__String__fini(&msg->tcp_frame);
  // desired
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(&msg->desired);
  // virtual_desired
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(&msg->virtual_desired);
  // actual
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(&msg->actual);
  // error
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__fini(&msg->error);
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init(&msg->goal)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(&msg->goal);
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init(&msg->result)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(&msg->result);
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"

bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init(&msg->feedback)) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(&msg->feedback);
}

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__create()
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * msg = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage));
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * msg)
{
  if (msg) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * data = NULL;
  if (size) {
    data = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage *)calloc(size, sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(&array->data[i]);
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

cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence * array = (cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence *)malloc(sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence * array)
{
  if (array) {
    cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
