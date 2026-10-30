// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from omniglove_interfaces:srv/GetStreamStatus.idl
// generated code does not contain a copyright notice

#ifndef OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__FUNCTIONS_H_
#define OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "omniglove_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "omniglove_interfaces/srv/detail/get_stream_status__struct.h"

/// Initialize srv/GetStreamStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * omniglove_interfaces__srv__GetStreamStatus_Request
 * )) before or use
 * omniglove_interfaces__srv__GetStreamStatus_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Request__init(omniglove_interfaces__srv__GetStreamStatus_Request * msg);

/// Finalize srv/GetStreamStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Request__fini(omniglove_interfaces__srv__GetStreamStatus_Request * msg);

/// Create srv/GetStreamStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * omniglove_interfaces__srv__GetStreamStatus_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
omniglove_interfaces__srv__GetStreamStatus_Request *
omniglove_interfaces__srv__GetStreamStatus_Request__create();

/// Destroy srv/GetStreamStatus message.
/**
 * It calls
 * omniglove_interfaces__srv__GetStreamStatus_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Request__destroy(omniglove_interfaces__srv__GetStreamStatus_Request * msg);

/// Check for srv/GetStreamStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Request__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Request * lhs, const omniglove_interfaces__srv__GetStreamStatus_Request * rhs);

/// Copy a srv/GetStreamStatus message.
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
omniglove_interfaces__srv__GetStreamStatus_Request__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Request * input,
  omniglove_interfaces__srv__GetStreamStatus_Request * output);

/// Initialize array of srv/GetStreamStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * omniglove_interfaces__srv__GetStreamStatus_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__init(omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetStreamStatus messages.
/**
 * It calls
 * omniglove_interfaces__srv__GetStreamStatus_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__fini(omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * array);

/// Create array of srv/GetStreamStatus messages.
/**
 * It allocates the memory for the array and calls
 * omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence *
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetStreamStatus messages.
/**
 * It calls
 * omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__destroy(omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * array);

/// Check for srv/GetStreamStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * lhs, const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * rhs);

/// Copy an array of srv/GetStreamStatus messages.
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
omniglove_interfaces__srv__GetStreamStatus_Request__Sequence__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * input,
  omniglove_interfaces__srv__GetStreamStatus_Request__Sequence * output);

/// Initialize srv/GetStreamStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * omniglove_interfaces__srv__GetStreamStatus_Response
 * )) before or use
 * omniglove_interfaces__srv__GetStreamStatus_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Response__init(omniglove_interfaces__srv__GetStreamStatus_Response * msg);

/// Finalize srv/GetStreamStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Response__fini(omniglove_interfaces__srv__GetStreamStatus_Response * msg);

/// Create srv/GetStreamStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * omniglove_interfaces__srv__GetStreamStatus_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
omniglove_interfaces__srv__GetStreamStatus_Response *
omniglove_interfaces__srv__GetStreamStatus_Response__create();

/// Destroy srv/GetStreamStatus message.
/**
 * It calls
 * omniglove_interfaces__srv__GetStreamStatus_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Response__destroy(omniglove_interfaces__srv__GetStreamStatus_Response * msg);

/// Check for srv/GetStreamStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Response__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Response * lhs, const omniglove_interfaces__srv__GetStreamStatus_Response * rhs);

/// Copy a srv/GetStreamStatus message.
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
omniglove_interfaces__srv__GetStreamStatus_Response__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Response * input,
  omniglove_interfaces__srv__GetStreamStatus_Response * output);

/// Initialize array of srv/GetStreamStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * omniglove_interfaces__srv__GetStreamStatus_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__init(omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetStreamStatus messages.
/**
 * It calls
 * omniglove_interfaces__srv__GetStreamStatus_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__fini(omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * array);

/// Create array of srv/GetStreamStatus messages.
/**
 * It allocates the memory for the array and calls
 * omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence *
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetStreamStatus messages.
/**
 * It calls
 * omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
void
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__destroy(omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * array);

/// Check for srv/GetStreamStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_omniglove_interfaces
bool
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__are_equal(const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * lhs, const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * rhs);

/// Copy an array of srv/GetStreamStatus messages.
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
omniglove_interfaces__srv__GetStreamStatus_Response__Sequence__copy(
  const omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * input,
  omniglove_interfaces__srv__GetStreamStatus_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OMNIGLOVE_INTERFACES__SRV__DETAIL__GET_STREAM_STATUS__FUNCTIONS_H_
