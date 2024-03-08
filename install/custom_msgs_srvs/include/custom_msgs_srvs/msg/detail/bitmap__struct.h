// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:msg/Bitmap.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__STRUCT_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'row1'
// Member 'row2'
// Member 'row3'
// Member 'row4'
// Member 'row5'
// Member 'row6'
// Member 'row7'
// Member 'row8'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Bitmap in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__msg__Bitmap
{
  rosidl_runtime_c__String row1[8];
  rosidl_runtime_c__String row2[8];
  rosidl_runtime_c__String row3[8];
  rosidl_runtime_c__String row4[8];
  rosidl_runtime_c__String row5[8];
  rosidl_runtime_c__String row6[8];
  rosidl_runtime_c__String row7[8];
  rosidl_runtime_c__String row8[8];
} custom_msgs_srvs__msg__Bitmap;

// Struct for a sequence of custom_msgs_srvs__msg__Bitmap.
typedef struct custom_msgs_srvs__msg__Bitmap__Sequence
{
  custom_msgs_srvs__msg__Bitmap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__msg__Bitmap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__STRUCT_H_
