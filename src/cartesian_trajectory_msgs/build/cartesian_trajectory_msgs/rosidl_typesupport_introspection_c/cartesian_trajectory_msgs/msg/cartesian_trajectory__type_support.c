// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__rosidl_typesupport_introspection_c.h"
#include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__functions.h"
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point.h"
// Member `points`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `tcp_offset`
#include "geometry_msgs/msg/pose.h"
// Member `tcp_offset`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"
// Member `tcp_frame`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__msg__CartesianTrajectory__init(message_memory);
}

void CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(message_memory);
}

size_t CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectoryPoint__points(
  const void * untyped_member)
{
  const cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectoryPoint__points(
  const void * untyped_member, size_t index)
{
  const cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectoryPoint__points(
  void * untyped_member, size_t index)
{
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectoryPoint__points(
  void * untyped_member, size_t size)
{
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(member);
  return cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectoryPoint__points,  // size() function pointer
    CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectoryPoint__points,  // get_const(index) function pointer
    CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectoryPoint__points,  // get(index) function pointer
    CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectoryPoint__points  // resize(index) function pointer
  },
  {
    "tcp_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTrajectory, tcp_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tcp_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__msg__CartesianTrajectory, tcp_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members = {
  "cartesian_trajectory_msgs__msg",  // message namespace
  "CartesianTrajectory",  // message name
  4,  // number of fields
  sizeof(cartesian_trajectory_msgs__msg__CartesianTrajectory),
  CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array,  // message members
  CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle = {
  0,
  &CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectory)() {
  CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint)();
  CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier) {
    CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
