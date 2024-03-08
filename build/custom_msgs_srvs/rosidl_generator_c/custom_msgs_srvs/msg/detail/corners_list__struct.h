// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:msg/CornersList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__STRUCT_H_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CornersList in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__msg__CornersList
{
  int32_t top_left_corner[2];
  int32_t top_right_corner[2];
  int32_t bottom_right_corner[2];
  int32_t bottom_left_corner[2];
} custom_msgs_srvs__msg__CornersList;

// Struct for a sequence of custom_msgs_srvs__msg__CornersList.
typedef struct custom_msgs_srvs__msg__CornersList__Sequence
{
  custom_msgs_srvs__msg__CornersList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__msg__CornersList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__STRUCT_H_
