// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs_srvs:msg/Bitmap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs_srvs/msg/detail/bitmap__rosidl_typesupport_introspection_c.h"
#include "custom_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs_srvs/msg/detail/bitmap__functions.h"
#include "custom_msgs_srvs/msg/detail/bitmap__struct.h"


// Include directives for member types
// Member `row1`
// Member `row2`
// Member `row3`
// Member `row4`
// Member `row5`
// Member `row6`
// Member `row7`
// Member `row8`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Bitmap__rosidl_typesupport_introspection_c__Bitmap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs_srvs__msg__Bitmap__init(message_memory);
}

void Bitmap__rosidl_typesupport_introspection_c__Bitmap_fini_function(void * message_memory)
{
  custom_msgs_srvs__msg__Bitmap__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_member_array[8] = {
  {
    "row1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row7",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row7),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "row8",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__Bitmap, row8),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_members = {
  "custom_msgs_srvs__msg",  // message namespace
  "Bitmap",  // message name
  8,  // number of fields
  sizeof(custom_msgs_srvs__msg__Bitmap),
  Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_member_array,  // message members
  Bitmap__rosidl_typesupport_introspection_c__Bitmap_init_function,  // function to initialize message memory (memory has to be allocated)
  Bitmap__rosidl_typesupport_introspection_c__Bitmap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_type_support_handle = {
  0,
  &Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs_srvs, msg, Bitmap)() {
  if (!Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_type_support_handle.typesupport_identifier) {
    Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Bitmap__rosidl_typesupport_introspection_c__Bitmap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
