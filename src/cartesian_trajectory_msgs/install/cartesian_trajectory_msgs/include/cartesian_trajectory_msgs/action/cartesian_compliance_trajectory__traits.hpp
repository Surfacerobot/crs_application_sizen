// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__TRAITS_HPP_
#define CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__TRAITS_HPP_

#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__traits.hpp"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__traits.hpp"
// Member 'force'
#include "geometry_msgs/msg/wrench__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>
  : std::integral_constant<bool, has_fixed_size<cartesian_trajectory_msgs::msg::CartesianTolerance>::value && has_fixed_size<cartesian_trajectory_msgs::msg::CartesianTrajectory>::value && has_fixed_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>
  : std::integral_constant<bool, has_bounded_size<cartesian_trajectory_msgs::msg::CartesianTolerance>::value && has_bounded_size<cartesian_trajectory_msgs::msg::CartesianTrajectory>::value && has_bounded_size<geometry_msgs::msg::Wrench>::value> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'desired'
// Member 'virtual_desired'
// Member 'actual'
// Member 'error'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>::value &&
    has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>::value &&
    has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>::value> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>::value> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>::value &&
    has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>::value &&
    has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage>()
{
  return "cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<cartesian_trajectory_msgs::action::CartesianComplianceTrajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__TRAITS_HPP_
