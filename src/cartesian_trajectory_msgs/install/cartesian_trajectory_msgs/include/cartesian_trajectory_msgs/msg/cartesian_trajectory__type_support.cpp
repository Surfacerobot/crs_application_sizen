// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cartesian_trajectory_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CartesianTrajectory_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) cartesian_trajectory_msgs::msg::CartesianTrajectory(_init);
}

void CartesianTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartesian_trajectory_msgs::msg::CartesianTrajectory *>(message_memory);
  typed_message->~CartesianTrajectory();
}

size_t size_function__CartesianTrajectory__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CartesianTrajectory__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__CartesianTrajectory__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void resize_function__CartesianTrajectory__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CartesianTrajectory_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs::msg::CartesianTrajectory, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs::msg::CartesianTrajectory, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__CartesianTrajectory__points,  // size() function pointer
    get_const_function__CartesianTrajectory__points,  // get_const(index) function pointer
    get_function__CartesianTrajectory__points,  // get(index) function pointer
    resize_function__CartesianTrajectory__points  // resize(index) function pointer
  },
  {
    "tcp_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs::msg::CartesianTrajectory, tcp_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tcp_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartesian_trajectory_msgs::msg::CartesianTrajectory, tcp_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CartesianTrajectory_message_members = {
  "cartesian_trajectory_msgs::msg",  // message namespace
  "CartesianTrajectory",  // message name
  4,  // number of fields
  sizeof(cartesian_trajectory_msgs::msg::CartesianTrajectory),
  CartesianTrajectory_message_member_array,  // message members
  CartesianTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CartesianTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CartesianTrajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartesian_trajectory_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartesian_trajectory_msgs::msg::CartesianTrajectory>()
{
  return &::cartesian_trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartesian_trajectory_msgs, msg, CartesianTrajectory)() {
  return &::cartesian_trajectory_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
