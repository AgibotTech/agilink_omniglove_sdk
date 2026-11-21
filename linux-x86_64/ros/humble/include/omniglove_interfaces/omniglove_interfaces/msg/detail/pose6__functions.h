// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from omniglove_interfaces:msg/Pose6.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__FUNCTIONS_H_
#define OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "omniglove_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "omniglove_interfaces/msg/detail/pose6__struct.h"

/// Initialize msg/Pose6 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * omniglove_interfaces__msg__Pose6
 * )) before or use
 * omniglove_interfaces__msg__Pose6__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__msg__Pose6__init(omniglove_interfaces__msg__Pose6 * msg);

/// Finalize msg/Pose6 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__msg__Pose6__fini(omniglove_interfaces__msg__Pose6 * msg);

/// Create msg/Pose6 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * omniglove_interfaces__msg__Pose6__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
omniglove_interfaces__msg__Pose6 *
omniglove_interfaces__msg__Pose6__create();

/// Destroy msg/Pose6 message.
/**
 * It calls
 * omniglove_interfaces__msg__Pose6__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__msg__Pose6__destroy(omniglove_interfaces__msg__Pose6 * msg);

/// Check for msg/Pose6 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__msg__Pose6__are_equal(const omniglove_interfaces__msg__Pose6 * lhs, const omniglove_interfaces__msg__Pose6 * rhs);

/// Copy a msg/Pose6 message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__msg__Pose6__copy(
  const omniglove_interfaces__msg__Pose6 * input,
  omniglove_interfaces__msg__Pose6 * output);

/// Initialize array of msg/Pose6 messages.
/**
 * It allocates the memory for the number of elements and calls
 * omniglove_interfaces__msg__Pose6__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__msg__Pose6__Sequence__init(omniglove_interfaces__msg__Pose6__Sequence * array, size_t size);

/// Finalize array of msg/Pose6 messages.
/**
 * It calls
 * omniglove_interfaces__msg__Pose6__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__msg__Pose6__Sequence__fini(omniglove_interfaces__msg__Pose6__Sequence * array);

/// Create array of msg/Pose6 messages.
/**
 * It allocates the memory for the array and calls
 * omniglove_interfaces__msg__Pose6__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
omniglove_interfaces__msg__Pose6__Sequence *
omniglove_interfaces__msg__Pose6__Sequence__create(size_t size);

/// Destroy array of msg/Pose6 messages.
/**
 * It calls
 * omniglove_interfaces__msg__Pose6__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__msg__Pose6__Sequence__destroy(omniglove_interfaces__msg__Pose6__Sequence * array);

/// Check for msg/Pose6 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__msg__Pose6__Sequence__are_equal(const omniglove_interfaces__msg__Pose6__Sequence * lhs, const omniglove_interfaces__msg__Pose6__Sequence * rhs);

/// Copy an array of msg/Pose6 messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__msg__Pose6__Sequence__copy(
  const omniglove_interfaces__msg__Pose6__Sequence * input,
  omniglove_interfaces__msg__Pose6__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__MSG__DETAIL__POSE6__FUNCTIONS_H_
