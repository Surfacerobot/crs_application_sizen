// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartesian_trajectory_msgs:msg/CartesianTolerance.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__rosidl_typesupport_introspection_c.h"
#include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__functions.h"
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__struct.h"


// Include directives for member types
// Member `position_error`
// Member `orientation_error`
#include "geometry_msgs/msg/vector3.h"
// Member `position_error`
// Member `orientation_error`
#include "geometry_msgs/msg/vector3__rosidl_typesupport_introspection_c.h"
// Member `twist_error`
#include "geometry_msgs/msg/twist.h"
// Member `twist_error`
#include "geometry_msgs/msg/twist__rosidl_typesupport_introspection_c.h"
// Member `wrench_error`
#include "geometry_msgs/msg/wrench.h"
// Member `wrench_error`
#include "geometry_msgs/msg/wrench__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__msg__CartesianTolerance__init(message_memory);
}

void CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__msg__CartesianTolerance__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[4] = {
  {
    "position_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTolerance, position_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTolerance, orientation_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTolerance, twist_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wrench_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTolerance, wrench_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_members = {
  "cartesian_trajectory_msgs__msg",  // message namespace
  "CartesianTolerance",  // message name
  4,  // number of fields
  sizeof(cartesian_trajectory_msgs__msg__CartesianTolerance),
  CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array,  // message members
  CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle = {
  0,
  &CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTolerance)() {
  CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  if (!CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle.typesupport_identifier) {
    CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianTolerance__rosidl_typesupport_introspection_c__CartesianTolerance_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
