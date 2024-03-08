// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__STRUCT_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'move'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EngineMove in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__msg__EngineMove
{
  rosidl_runtime_c__String move;
  bool castle;
} custom_msgs_srvs__msg__EngineMove;

// Struct for a sequence of custom_msgs_srvs__msg__EngineMove.
typedef struct custom_msgs_srvs__msg__EngineMove__Sequence
{
  custom_msgs_srvs__msg__EngineMove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__msg__EngineMove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__STRUCT_H_
