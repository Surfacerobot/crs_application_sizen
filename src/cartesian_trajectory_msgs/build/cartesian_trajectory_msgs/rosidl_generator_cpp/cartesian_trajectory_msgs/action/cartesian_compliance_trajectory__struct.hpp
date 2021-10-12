// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__STRUCT_HPP_
#define CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectory'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__struct.hpp"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__struct.hpp"
// Member 'force'
#include "geometry_msgs/msg/wrench__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_Goal_
{
  using Type = CartesianComplianceTrajectory_Goal_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : trajectory(_init),
    path_tolerance(_init),
    goal_tolerance(_init),
    force(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  explicit CartesianComplianceTrajectory_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init),
    path_tolerance(_alloc, _init),
    goal_tolerance(_alloc, _init),
    force(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  // field types and members
  using _trajectory_type =
    cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;
  using _path_tolerance_type =
    cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>;
  _path_tolerance_type path_tolerance;
  using _goal_tolerance_type =
    cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator>;
  _goal_tolerance_type goal_tolerance;
  using _force_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _force_type force;
  using _speed_type =
    double;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__trajectory(
    const cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__path_tolerance(
    const cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> & _arg)
  {
    this->path_tolerance = _arg;
    return *this;
  }
  Type & set__goal_tolerance(
    const cartesian_trajectory_msgs::msg::CartesianTolerance_<ContainerAllocator> & _arg)
  {
    this->goal_tolerance = _arg;
    return *this;
  }
  Type & set__force(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_Goal_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->path_tolerance != other.path_tolerance) {
      return false;
    }
    if (this->goal_tolerance != other.goal_tolerance) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_Goal_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_Goal =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs


#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_Result_
{
  using Type = CartesianComplianceTrajectory_Result_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->err_msg = "";
    }
  }

  explicit CartesianComplianceTrajectory_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : err_msg(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->err_msg = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__err_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->err_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->err_msg != other.err_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_Result_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_Result =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'desired'
// Member 'virtual_desired'
// Member 'actual'
// Member 'error'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_Feedback_
{
  using Type = CartesianComplianceTrajectory_Feedback_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    desired(_init),
    virtual_desired(_init),
    actual(_init),
    error(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->tcp_frame = "";
    }
  }

  explicit CartesianComplianceTrajectory_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tcp_frame(_alloc),
    desired(_alloc, _init),
    virtual_desired(_alloc, _init),
    actual(_alloc, _init),
    error(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->tcp_frame = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tcp_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tcp_frame_type tcp_frame;
  using _desired_type =
    cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>;
  _desired_type desired;
  using _virtual_desired_type =
    cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>;
  _virtual_desired_type virtual_desired;
  using _actual_type =
    cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>;
  _actual_type actual;
  using _error_type =
    cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tcp_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tcp_frame = _arg;
    return *this;
  }
  Type & set__desired(
    const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->desired = _arg;
    return *this;
  }
  Type & set__virtual_desired(
    const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->virtual_desired = _arg;
    return *this;
  }
  Type & set__actual(
    const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->actual = _arg;
    return *this;
  }
  Type & set__error(
    const cartesian_trajectory_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_Feedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tcp_frame != other.tcp_frame) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    if (this->virtual_desired != other.virtual_desired) {
      return false;
    }
    if (this->actual != other.actual) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_Feedback_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_Feedback =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_SendGoal_Request_
{
  using Type = CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CartesianComplianceTrajectory_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_SendGoal_Request_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_SendGoal_Request =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_SendGoal_Response_
{
  using Type = CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CartesianComplianceTrajectory_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_SendGoal_Response_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_SendGoal_Response =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace cartesian_trajectory_msgs
{

namespace action
{

struct CartesianComplianceTrajectory_SendGoal
{
  using Request = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request;
  using Response = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response;
};

}  // namespace action

}  // namespace cartesian_trajectory_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_GetResult_Request_
{
  using Type = CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CartesianComplianceTrajectory_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_GetResult_Request_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_GetResult_Request =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_GetResult_Response_
{
  using Type = CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CartesianComplianceTrajectory_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_GetResult_Response_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_GetResult_Response =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs

namespace cartesian_trajectory_msgs
{

namespace action
{

struct CartesianComplianceTrajectory_GetResult
{
  using Request = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request;
  using Response = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response;
};

}  // namespace action

}  // namespace cartesian_trajectory_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage __declspec(deprecated)
#endif

namespace cartesian_trajectory_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CartesianComplianceTrajectory_FeedbackMessage_
{
  using Type = CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator>;

  explicit CartesianComplianceTrajectory_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CartesianComplianceTrajectory_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage
    std::shared_ptr<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianComplianceTrajectory_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianComplianceTrajectory_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianComplianceTrajectory_FeedbackMessage_

// alias to use template instance with default allocator
using CartesianComplianceTrajectory_FeedbackMessage =
  cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace cartesian_trajectory_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace cartesian_trajectory_msgs
{

namespace action
{

struct CartesianComplianceTrajectory
{
  /// The goal message defined in the action definition.
  using Goal = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal;
  /// The result message defined in the action definition.
  using Result = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result;
  /// The feedback message defined in the action definition.
  using Feedback = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CartesianComplianceTrajectory CartesianComplianceTrajectory;

}  // namespace action

}  // namespace cartesian_trajectory_msgs

#endif  // CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__STRUCT_HPP_
