// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
#include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory.h"
// Member `trajectory`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__rosidl_typesupport_introspection_c.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance.h"
// Member `path_tolerance`
// Member `goal_tolerance`
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__rosidl_typesupport_introspection_c.h"
// Member `force`
#include "geometry_msgs/msg/wrench.h"
// Member `force`
#include "geometry_msgs/msg/wrench__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init(message_memory);
}

void CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_member_array[5] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal, trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal, path_tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_tolerance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal, goal_tolerance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_Goal",  // message name
  5,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal),
  CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_member_array,  // message members
  CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Goal)() {
  CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectory)();
  CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTolerance)();
  CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTolerance)();
  CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Wrench)();
  if (!CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_Goal__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `err_msg`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init(message_memory);
}

void CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result, err_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_Result",  // message name
  2,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result),
  CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_member_array,  // message members
  CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Result)() {
  if (!CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_Result__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `tcp_frame`
// already included above
// #include "rosidl_generator_c/string_functions.h"
// Member `desired`
// Member `virtual_desired`
// Member `actual`
// Member `error`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point.h"
// Member `desired`
// Member `virtual_desired`
// Member `actual`
// Member `error`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init(message_memory);
}

void CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback, header),  // bytes offset in struct
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
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback, tcp_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback, desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "virtual_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback, virtual_desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback, actual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_Feedback",  // message name
  6,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback),
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_member_array,  // message members
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Feedback)() {
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint)();
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint)();
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint)();
  CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint)();
  if (!CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_Feedback__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory.h"
// Member `goal`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__init(message_memory);
}

void CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request),
  CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_member_array,  // message members
  CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Request)() {
  CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Goal)();
  if (!CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_SendGoal_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__init(message_memory);
}

void CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response),
  CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_member_array,  // message members
  CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Response)() {
  CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_SendGoal_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_service_members = {
  "cartesian_trajectory_msgs__action",  // service namespace
  "CartesianComplianceTrajectory_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_service_type_support_handle = {
  0,
  &cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal)() {
  if (!cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_service_type_support_handle.typesupport_identifier) {
    cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Response)()->data;
  }

  return &cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__init(message_memory);
}

void CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request),
  CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_member_array,  // message members
  CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Request)() {
  CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_GetResult_Request__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory.h"
// Member `result`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__init(message_memory);
}

void CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response),
  CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_member_array,  // message members
  CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Response)() {
  CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Result)();
  if (!CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_GetResult_Response__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_service_members = {
  "cartesian_trajectory_msgs__action",  // service namespace
  "CartesianComplianceTrajectory_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_service_type_support_handle = {
  0,
  &cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult)() {
  if (!cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_service_type_support_handle.typesupport_identifier) {
    cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Response)()->data;
  }

  return &cartesian_trajectory_msgs__action__cartesian_compliance_trajectory__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory.h"
// Member `feedback`
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__init(message_memory);
}

void CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_fini_function(void * message_memory)
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_members = {
  "cartesian_trajectory_msgs__action",  // message namespace
  "CartesianComplianceTrajectory_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage),
  CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_member_array,  // message members
  CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_type_support_handle = {
  0,
  &CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_FeedbackMessage)() {
  CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Feedback)();
  if (!CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianComplianceTrajectory_FeedbackMessage__rosidl_typesupport_introspection_c__CartesianComplianceTrajectory_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
