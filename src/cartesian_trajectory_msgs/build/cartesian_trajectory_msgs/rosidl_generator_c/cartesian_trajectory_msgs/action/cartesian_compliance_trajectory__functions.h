// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_trajectory_msgs:action/CartesianComplianceTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__FUNCTIONS_H_
#define CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "cartesian_trajectory_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cartesian_trajectory_msgs/action/cartesian_compliance_trajectory__struct.h"

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Goal__Sequence * array);

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Result__Sequence * array);

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_Feedback__Sequence * array);

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Request__Sequence * array);

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_SendGoal_Response__Sequence * array);

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Request__Sequence * array);

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_GetResult_Response__Sequence * array);

/// Initialize action/CartesianComplianceTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage
 * )) before or use
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * msg);

/// Finalize action/CartesianComplianceTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * msg);

/// Create action/CartesianComplianceTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__create();

/// Destroy action/CartesianComplianceTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage * msg);


/// Initialize array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__init(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__fini(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence * array);

/// Create array of action/CartesianComplianceTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence *
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/CartesianComplianceTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence__destroy(cartesian_trajectory_msgs__action__CartesianComplianceTrajectory_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_TRAJECTORY_MSGS__ACTION__CARTESIAN_COMPLIANCE_TRAJECTORY__FUNCTIONS_H_
