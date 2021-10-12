// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace cartesian_trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::msg::CartesianTrajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::msg::CartesianTrajectory &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::msg::CartesianTrajectory &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTrajectory(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_trajectory_msgs

namespace cartesian_trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::msg::CartesianTolerance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::msg::CartesianTolerance &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::msg::CartesianTolerance &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTolerance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_trajectory_msgs

namespace cartesian_trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::msg::CartesianTolerance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::msg::CartesianTolerance &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::msg::CartesianTolerance &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTolerance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_trajectory_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Wrench &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Wrench &);
size_t get_serialized_size(
  const geometry_msgs::msg::Wrench &,
  size_t current_alignment);
size_t
max_serialized_size_Wrench(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: trajectory
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.trajectory,
    cdr);
  // Member: path_tolerance
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.path_tolerance,
    cdr);
  // Member: goal_tolerance
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_tolerance,
    cdr);
  // Member: force
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.force,
    cdr);
  // Member: speed
  cdr << ros_message.speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal & ros_message)
{
  // Member: trajectory
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.trajectory);

  // Member: path_tolerance
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.path_tolerance);

  // Member: goal_tolerance
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_tolerance);

  // Member: force
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.force);

  // Member: speed
  cdr >> ros_message.speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: trajectory

  current_alignment +=
    cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.trajectory, current_alignment);
  // Member: path_tolerance

  current_alignment +=
    cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.path_tolerance, current_alignment);
  // Member: goal_tolerance

  current_alignment +=
    cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_tolerance, current_alignment);
  // Member: force

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.force, current_alignment);
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: trajectory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectory(
        full_bounded, current_alignment);
    }
  }

  // Member: path_tolerance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTolerance(
        full_bounded, current_alignment);
    }
  }

  // Member: goal_tolerance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTolerance(
        full_bounded, current_alignment);
    }
  }

  // Member: force
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Wrench(
        full_bounded, current_alignment);
    }
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CartesianComplianceTrajectory_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_Goal(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_Goal__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_Goal",
  _CartesianComplianceTrajectory_Goal__cdr_serialize,
  _CartesianComplianceTrajectory_Goal__cdr_deserialize,
  _CartesianComplianceTrajectory_Goal__get_serialized_size,
  _CartesianComplianceTrajectory_Goal__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Goal)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_Goal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: err_msg
  cdr << ros_message.err_msg;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: err_msg
  cdr >> ros_message.err_msg;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.err_msg.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_msg
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

static bool _CartesianComplianceTrajectory_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_Result(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_Result__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_Result",
  _CartesianComplianceTrajectory_Result__cdr_serialize,
  _CartesianComplianceTrajectory_Result__cdr_deserialize,
  _CartesianComplianceTrajectory_Result__get_serialized_size,
  _CartesianComplianceTrajectory_Result__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Result)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_Result__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace cartesian_trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_trajectory_msgs

namespace cartesian_trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_trajectory_msgs

namespace cartesian_trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_trajectory_msgs

namespace cartesian_trajectory_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianTrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartesian_trajectory_msgs


namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: tcp_frame
  cdr << ros_message.tcp_frame;
  // Member: desired
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.desired,
    cdr);
  // Member: virtual_desired
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.virtual_desired,
    cdr);
  // Member: actual
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.actual,
    cdr);
  // Member: error
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.error,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: tcp_frame
  cdr >> ros_message.tcp_frame;

  // Member: desired
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.desired);

  // Member: virtual_desired
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.virtual_desired);

  // Member: actual
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.actual);

  // Member: error
  cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.error);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: tcp_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tcp_frame.size() + 1);
  // Member: desired

  current_alignment +=
    cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.desired, current_alignment);
  // Member: virtual_desired

  current_alignment +=
    cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.virtual_desired, current_alignment);
  // Member: actual

  current_alignment +=
    cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.actual, current_alignment);
  // Member: error

  current_alignment +=
    cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.error, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: tcp_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: virtual_desired
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: actual
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  // Member: error
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianTrajectoryPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CartesianComplianceTrajectory_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_Feedback(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_Feedback__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_Feedback",
  _CartesianComplianceTrajectory_Feedback__cdr_serialize,
  _CartesianComplianceTrajectory_Feedback__cdr_deserialize,
  _CartesianComplianceTrajectory_Feedback__get_serialized_size,
  _CartesianComplianceTrajectory_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_Feedback)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace cartesian_trajectory_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianComplianceTrajectory_Goal(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace cartesian_trajectory_msgs


namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: goal

  current_alignment +=
    cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_CartesianComplianceTrajectory_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CartesianComplianceTrajectory_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_SendGoal_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_SendGoal_Request__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_SendGoal_Request",
  _CartesianComplianceTrajectory_SendGoal_Request__cdr_serialize,
  _CartesianComplianceTrajectory_SendGoal_Request__cdr_deserialize,
  _CartesianComplianceTrajectory_SendGoal_Request__get_serialized_size,
  _CartesianComplianceTrajectory_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Request)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CartesianComplianceTrajectory_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_SendGoal_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_SendGoal_Response__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_SendGoal_Response",
  _CartesianComplianceTrajectory_SendGoal_Response__cdr_serialize,
  _CartesianComplianceTrajectory_SendGoal_Response__cdr_deserialize,
  _CartesianComplianceTrajectory_SendGoal_Response__get_serialized_size,
  _CartesianComplianceTrajectory_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Response)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CartesianComplianceTrajectory_SendGoal__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal_Response)(),
};

static rosidl_service_type_support_t _CartesianComplianceTrajectory_SendGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_SendGoal)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CartesianComplianceTrajectory_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_GetResult_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_GetResult_Request__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_GetResult_Request",
  _CartesianComplianceTrajectory_GetResult_Request__cdr_serialize,
  _CartesianComplianceTrajectory_GetResult_Request__cdr_deserialize,
  _CartesianComplianceTrajectory_GetResult_Request__get_serialized_size,
  _CartesianComplianceTrajectory_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Request)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace cartesian_trajectory_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianComplianceTrajectory_Result(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace cartesian_trajectory_msgs


namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: result
  cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result

  current_alignment +=
    cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_CartesianComplianceTrajectory_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CartesianComplianceTrajectory_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_GetResult_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_GetResult_Response__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_GetResult_Response",
  _CartesianComplianceTrajectory_GetResult_Response__cdr_serialize,
  _CartesianComplianceTrajectory_GetResult_Response__cdr_deserialize,
  _CartesianComplianceTrajectory_GetResult_Response__get_serialized_size,
  _CartesianComplianceTrajectory_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Response)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CartesianComplianceTrajectory_GetResult__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult_Response)(),
};

static rosidl_service_type_support_t _CartesianComplianceTrajectory_GetResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_GetResult)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace cartesian_trajectory_msgs
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback &);
size_t get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianComplianceTrajectory_Feedback(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace cartesian_trajectory_msgs


namespace cartesian_trajectory_msgs
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_serialize(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
get_serialized_size(
  const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: feedback

  current_alignment +=
    cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartesian_trajectory_msgs
max_serialized_size_CartesianComplianceTrajectory_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::max_serialized_size_CartesianComplianceTrajectory_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CartesianComplianceTrajectory_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CartesianComplianceTrajectory_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CartesianComplianceTrajectory_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CartesianComplianceTrajectory_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CartesianComplianceTrajectory_FeedbackMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _CartesianComplianceTrajectory_FeedbackMessage__callbacks = {
  "cartesian_trajectory_msgs::action",
  "CartesianComplianceTrajectory_FeedbackMessage",
  _CartesianComplianceTrajectory_FeedbackMessage__cdr_serialize,
  _CartesianComplianceTrajectory_FeedbackMessage__cdr_deserialize,
  _CartesianComplianceTrajectory_FeedbackMessage__get_serialized_size,
  _CartesianComplianceTrajectory_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _CartesianComplianceTrajectory_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CartesianComplianceTrajectory_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartesian_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage>()
{
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartesian_trajectory_msgs, action, CartesianComplianceTrajectory_FeedbackMessage)() {
  return &cartesian_trajectory_msgs::action::typesupport_fastrtps_cpp::_CartesianComplianceTrajectory_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
