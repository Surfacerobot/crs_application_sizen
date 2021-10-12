// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartesian_trajectory_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__FUNCTIONS_H_
#define CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "cartesian_trajectory_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__struct.h"

/// Initialize msg/CartesianTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartesian_trajectory_msgs__msg__CartesianTrajectory
 * )) before or use
 * cartesian_trajectory_msgs__msg__CartesianTrajectory__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__msg__CartesianTrajectory__init(cartesian_trajectory_msgs__msg__CartesianTrajectory * msg);

/// Finalize msg/CartesianTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__msg__CartesianTrajectory__fini(cartesian_trajectory_msgs__msg__CartesianTrajectory * msg);

/// Create msg/CartesianTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartesian_trajectory_msgs__msg__CartesianTrajectory__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__msg__CartesianTrajectory *
cartesian_trajectory_msgs__msg__CartesianTrajectory__create();

/// Destroy msg/CartesianTrajectory message.
/**
 * It calls
 * cartesian_trajectory_msgs__msg__CartesianTrajectory__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__msg__CartesianTrajectory__destroy(cartesian_trajectory_msgs__msg__CartesianTrajectory * msg);


/// Initialize array of msg/CartesianTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartesian_trajectory_msgs__msg__CartesianTrajectory__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
bool
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__init(cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * array, size_t size);

/// Finalize array of msg/CartesianTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__msg__CartesianTrajectory__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__fini(cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * array);

/// Create array of msg/CartesianTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence *
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__create(size_t size);

/// Destroy array of msg/CartesianTrajectory messages.
/**
 * It calls
 * cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartesian_trajectory_msgs
void
cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__destroy(cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CARTESIAN_TRAJECTORY_MSGS__MSG__CARTESIAN_TRAJECTORY__FUNCTIONS_H_
