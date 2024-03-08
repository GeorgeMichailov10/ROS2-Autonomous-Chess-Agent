// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__FUNCTIONS_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msgs_srvs/msg/detail/engine_move__struct.h"

/// Initialize msg/EngineMove message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs_srvs__msg__EngineMove
 * )) before or use
 * custom_msgs_srvs__msg__EngineMove__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__msg__EngineMove__init(custom_msgs_srvs__msg__EngineMove * msg);

/// Finalize msg/EngineMove message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__msg__EngineMove__fini(custom_msgs_srvs__msg__EngineMove * msg);

/// Create msg/EngineMove message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs_srvs__msg__EngineMove__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__msg__EngineMove *
custom_msgs_srvs__msg__EngineMove__create();

/// Destroy msg/EngineMove message.
/**
 * It calls
 * custom_msgs_srvs__msg__EngineMove__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__msg__EngineMove__destroy(custom_msgs_srvs__msg__EngineMove * msg);

/// Check for msg/EngineMove message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__msg__EngineMove__are_equal(const custom_msgs_srvs__msg__EngineMove * lhs, const custom_msgs_srvs__msg__EngineMove * rhs);

/// Copy a msg/EngineMove message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__msg__EngineMove__copy(
  const custom_msgs_srvs__msg__EngineMove * input,
  custom_msgs_srvs__msg__EngineMove * output);

/// Initialize array of msg/EngineMove messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs_srvs__msg__EngineMove__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__msg__EngineMove__Sequence__init(custom_msgs_srvs__msg__EngineMove__Sequence * array, size_t size);

/// Finalize array of msg/EngineMove messages.
/**
 * It calls
 * custom_msgs_srvs__msg__EngineMove__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__msg__EngineMove__Sequence__fini(custom_msgs_srvs__msg__EngineMove__Sequence * array);

/// Create array of msg/EngineMove messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs_srvs__msg__EngineMove__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
custom_msgs_srvs__msg__EngineMove__Sequence *
custom_msgs_srvs__msg__EngineMove__Sequence__create(size_t size);

/// Destroy array of msg/EngineMove messages.
/**
 * It calls
 * custom_msgs_srvs__msg__EngineMove__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
void
custom_msgs_srvs__msg__EngineMove__Sequence__destroy(custom_msgs_srvs__msg__EngineMove__Sequence * array);

/// Check for msg/EngineMove message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__msg__EngineMove__Sequence__are_equal(const custom_msgs_srvs__msg__EngineMove__Sequence * lhs, const custom_msgs_srvs__msg__EngineMove__Sequence * rhs);

/// Copy an array of msg/EngineMove messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs_srvs
bool
custom_msgs_srvs__msg__EngineMove__Sequence__copy(
  const custom_msgs_srvs__msg__EngineMove__Sequence * input,
  custom_msgs_srvs__msg__EngineMove__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__FUNCTIONS_H_
