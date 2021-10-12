// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__functions.h"  // goal_tolerance, path_tolerance
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__functions.h"  // trajectory
#include "geometry_msgs/msg/wrench__functions.h"  // force

// forward declare type support functions
size_t get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTolerance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTolerance(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTolerance)();
size_t get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectory)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t get_serialized_size_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t max_serialized_size_geometry_msgs__msg__Wrench(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Wrench)();


using _CartesianComplianceTrajectory_Goal__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal;

static bool _CartesianComplianceTrajectory_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_Goal__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: path_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTolerance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path_tolerance, cdr))
    {
      return false;
    }
  }

  // Field name: goal_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTolerance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_tolerance, cdr))
    {
      return false;
    }
  }

  // Field name: force
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Wrench
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->force, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  return true;
}

static bool _CartesianComplianceTrajectory_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_Goal__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->trajectory))
    {
      return false;
    }
  }

  // Field name: path_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTolerance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path_tolerance))
    {
      return false;
    }
  }

  // Field name: goal_tolerance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTolerance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_tolerance))
    {
      return false;
    }
  }

  // Field name: force
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Wrench
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->force))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_Goal__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name trajectory

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
    &(ros_message->trajectory), current_alignment);
  // field.name path_tolerance

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTolerance(
    &(ros_message->path_tolerance), current_alignment);
  // field.name goal_tolerance

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTolerance(
    &(ros_message->goal_tolerance), current_alignment);
  // field.name force

  current_alignment += get_serialized_size_geometry_msgs__msg__Wrench(
    &(ros_message->force), current_alignment);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectory(
        full_bounded, current_alignment);
    }
  }
  // member: path_tolerance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTolerance(
        full_bounded, current_alignment);
    }
  }
  // member: goal_tolerance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTolerance(
        full_bounded, current_alignment);
    }
  }
  // member: force
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Wrench(
        full_bounded, current_alignment);
    }
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_Goal = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_Goal",
  _CartesianComplianceTrajectory_Goal__cdr_serialize,
  _CartesianComplianceTrajectory_Goal__cdr_deserialize,
  _CartesianComplianceTrajectory_Goal__get_serialized_size,
  _CartesianComplianceTrajectory_Goal__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Goal)() {
  return &_CartesianComplianceTrajectory_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // err_msg
#include "rosidl_generator_c/string_functions.h"  // err_msg

// forward declare type support functions


using _CartesianComplianceTrajectory_Result__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result;

static bool _CartesianComplianceTrajectory_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_Result__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: err_msg
  {
    const rosidl_generator_c__String * str = &ros_message->err_msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CartesianComplianceTrajectory_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_Result__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: err_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->err_msg.data) {
      rosidl_generator_c__String__init(&ros_message->err_msg);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->err_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'err_msg'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_Result__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->err_msg.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_Result = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_Result",
  _CartesianComplianceTrajectory_Result__cdr_serialize,
  _CartesianComplianceTrajectory_Result__cdr_deserialize,
  _CartesianComplianceTrajectory_Result__get_serialized_size,
  _CartesianComplianceTrajectory_Result__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Result)() {
  return &_CartesianComplianceTrajectory_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__functions.h"  // actual, desired, error, virtual_desired
// already included above
// #include "rosidl_generator_c/string.h"  // tcp_frame
// already included above
// #include "rosidl_generator_c/string_functions.h"  // tcp_frame
#include "std_msgs/msg/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CartesianComplianceTrajectory_Feedback__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback;

static bool _CartesianComplianceTrajectory_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_Feedback__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: tcp_frame
  {
    const rosidl_generator_c__String * str = &ros_message->tcp_frame;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->desired, cdr))
    {
      return false;
    }
  }

  // Field name: virtual_desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->virtual_desired, cdr))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->actual, cdr))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->error, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CartesianComplianceTrajectory_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_Feedback__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: tcp_frame
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tcp_frame.data) {
      rosidl_generator_c__String__init(&ros_message->tcp_frame);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->tcp_frame,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tcp_frame'\n");
      return false;
    }
  }

  // Field name: desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->desired))
    {
      return false;
    }
  }

  // Field name: virtual_desired
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->virtual_desired))
    {
      return false;
    }
  }

  // Field name: actual
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->actual))
    {
      return false;
    }
  }

  // Field name: error
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, msg, CartesianTrajectoryPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->error))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_Feedback__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name tcp_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tcp_frame.size + 1);
  // field.name desired

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
    &(ros_message->desired), current_alignment);
  // field.name virtual_desired

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
    &(ros_message->virtual_desired), current_alignment);
  // field.name actual

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
    &(ros_message->actual), current_alignment);
  // field.name error

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
    &(ros_message->error), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: tcp_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: virtual_desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: actual
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }
  // member: error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_Feedback = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_Feedback",
  _CartesianComplianceTrajectory_Feedback__cdr_serialize,
  _CartesianComplianceTrajectory_Feedback__cdr_deserialize,
  _CartesianComplianceTrajectory_Feedback__get_serialized_size,
  _CartesianComplianceTrajectory_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Feedback)() {
  return &_CartesianComplianceTrajectory_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"  // goal
#include "unique_identifier_msgs/msg/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CartesianComplianceTrajectory_SendGoal_Request__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request;

static bool _CartesianComplianceTrajectory_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CartesianComplianceTrajectory_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_SendGoal_Request = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_SendGoal_Request",
  _CartesianComplianceTrajectory_SendGoal_Request__cdr_serialize,
  _CartesianComplianceTrajectory_SendGoal_Request__cdr_deserialize,
  _CartesianComplianceTrajectory_SendGoal_Request__get_serialized_size,
  _CartesianComplianceTrajectory_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Request)() {
  return &_CartesianComplianceTrajectory_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _CartesianComplianceTrajectory_SendGoal_Response__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response;

static bool _CartesianComplianceTrajectory_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CartesianComplianceTrajectory_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_SendGoal_Response = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_SendGoal_Response",
  _CartesianComplianceTrajectory_SendGoal_Response__cdr_serialize,
  _CartesianComplianceTrajectory_SendGoal_Response__cdr_deserialize,
  _CartesianComplianceTrajectory_SendGoal_Response__get_serialized_size,
  _CartesianComplianceTrajectory_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Response)() {
  return &_CartesianComplianceTrajectory_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CartesianComplianceTrajectory_SendGoal__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Response)(),
};

static rosidl_service_type_support_t CartesianComplianceTrajectory_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CartesianComplianceTrajectory_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal)() {
  return &CartesianComplianceTrajectory_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CartesianComplianceTrajectory_GetResult_Request__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request;

static bool _CartesianComplianceTrajectory_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CartesianComplianceTrajectory_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_GetResult_Request__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_GetResult_Request = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_GetResult_Request",
  _CartesianComplianceTrajectory_GetResult_Request__cdr_serialize,
  _CartesianComplianceTrajectory_GetResult_Request__cdr_deserialize,
  _CartesianComplianceTrajectory_GetResult_Request__get_serialized_size,
  _CartesianComplianceTrajectory_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Request)() {
  return &_CartesianComplianceTrajectory_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Result)();


using _CartesianComplianceTrajectory_GetResult_Response__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response;

static bool _CartesianComplianceTrajectory_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CartesianComplianceTrajectory_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_GetResult_Response__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_GetResult_Response = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_GetResult_Response",
  _CartesianComplianceTrajectory_GetResult_Response__cdr_serialize,
  _CartesianComplianceTrajectory_GetResult_Response__cdr_deserialize,
  _CartesianComplianceTrajectory_GetResult_Response__get_serialized_size,
  _CartesianComplianceTrajectory_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Response)() {
  return &_CartesianComplianceTrajectory_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CartesianComplianceTrajectory_GetResult__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Response)(),
};

static rosidl_service_type_support_t CartesianComplianceTrajectory_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CartesianComplianceTrajectory_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult)() {
  return &CartesianComplianceTrajectory_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cartesian_trajectory_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CartesianComplianceTrajectory_FeedbackMessage__ros_msg_type = cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage;

static bool _CartesianComplianceTrajectory_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CartesianComplianceTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CartesianComplianceTrajectory_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CartesianComplianceTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<_CartesianComplianceTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CartesianComplianceTrajectory_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _CartesianComplianceTrajectory_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CartesianComplianceTrajectory_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cartesian_trajectory_msgs
size_t max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CartesianComplianceTrajectory_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CartesianComplianceTrajectory_FeedbackMessage = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_FeedbackMessage",
  _CartesianComplianceTrajectory_FeedbackMessage__cdr_serialize,
  _CartesianComplianceTrajectory_FeedbackMessage__cdr_deserialize,
  _CartesianComplianceTrajectory_FeedbackMessage__get_serialized_size,
  _CartesianComplianceTrajectory_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CartesianComplianceTrajectory_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_FeedbackMessage)() {
  return &_CartesianComplianceTrajectory_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
