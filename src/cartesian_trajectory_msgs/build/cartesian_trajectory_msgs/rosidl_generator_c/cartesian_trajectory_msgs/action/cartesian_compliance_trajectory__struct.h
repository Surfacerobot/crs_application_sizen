// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__STRUCT_H_
#define CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__struct.h"
// Member 'path_tolerance'
// Member 'goal_tolerance'
#include "cartesian_trajectory_msgs/msg/cartesian_tolerance__struct.h"
// Member 'force'
#include "geometry_msgs/msg/wrench__struct.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal
{
  cartesian_trajectory_msgs__msg__CartesianTrajectory trajectory;
  cartesian_trajectory_msgs__msg__CartesianTolerance path_tolerance;
  cartesian_trajectory_msgs__msg__CartesianTolerance goal_tolerance;
  geometry_msgs__msg__Wrench force;
  double speed;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'err_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result
{
  bool success;
  rosidl_generator_c__String err_msg;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'tcp_frame'
// already included above
// #include "rosidl_generator_c/string.h"
// Member 'desired'
// Member 'virtual_desired'
// Member 'actual'
// Member 'error'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory_point__struct.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String tcp_frame;
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint desired;
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint virtual_desired;
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint actual;
  cartesian_trajectory_msgs__msg__CartesianTrajectoryPoint error;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal goal;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response
{
  int8_t status;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result result;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"

// Struct defined in action/CartesianComplianceTrajectory in the package cartesian_trajectory_msgs.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback feedback;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage;

// Struct for a sequence of cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage.
typedef struct cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence
{
  cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__STRUCT_H_
