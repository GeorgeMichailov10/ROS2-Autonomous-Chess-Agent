// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs_srvs:srv/GetCorners.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__STRUCT_H_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'board'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/GetCorners in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__srv__GetCorners_Request
{
  sensor_msgs__msg__Image board;
} custom_msgs_srvs__srv__GetCorners_Request;

// Struct for a sequence of custom_msgs_srvs__srv__GetCorners_Request.
typedef struct custom_msgs_srvs__srv__GetCorners_Request__Sequence
{
  custom_msgs_srvs__srv__GetCorners_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__srv__GetCorners_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'corners_list'
#include "custom_msgs_srvs/msg/detail/corners_list__struct.h"

// Struct defined in srv/GetCorners in the package custom_msgs_srvs.
typedef struct custom_msgs_srvs__srv__GetCorners_Response
{
  bool success;
  custom_msgs_srvs__msg__CornersList corners_list;
} custom_msgs_srvs__srv__GetCorners_Response;

// Struct for a sequence of custom_msgs_srvs__srv__GetCorners_Response.
typedef struct custom_msgs_srvs__srv__GetCorners_Response__Sequence
{
  custom_msgs_srvs__srv__GetCorners_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs_srvs__srv__GetCorners_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__STRUCT_H_
