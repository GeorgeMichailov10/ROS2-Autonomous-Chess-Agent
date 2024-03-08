// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs_srvs:msg/CornersList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs_srvs/msg/detail/corners_list__rosidl_typesupport_introspection_c.h"
#include "custom_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs_srvs/msg/detail/corners_list__functions.h"
#include "custom_msgs_srvs/msg/detail/corners_list__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CornersList__rosidl_typesupport_introspection_c__CornersList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs_srvs__msg__CornersList__init(message_memory);
}

void CornersList__rosidl_typesupport_introspection_c__CornersList_fini_function(void * message_memory)
{
  custom_msgs_srvs__msg__CornersList__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CornersList__rosidl_typesupport_introspection_c__CornersList_message_member_array[4] = {
  {
    "top_left_corner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__CornersList, top_left_corner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top_right_corner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__CornersList, top_right_corner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_right_corner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__CornersList, bottom_right_corner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_left_corner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs__msg__CornersList, bottom_left_corner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CornersList__rosidl_typesupport_introspection_c__CornersList_message_members = {
  "custom_msgs_srvs__msg",  // message namespace
  "CornersList",  // message name
  4,  // number of fields
  sizeof(custom_msgs_srvs__msg__CornersList),
  CornersList__rosidl_typesupport_introspection_c__CornersList_message_member_array,  // message members
  CornersList__rosidl_typesupport_introspection_c__CornersList_init_function,  // function to initialize message memory (memory has to be allocated)
  CornersList__rosidl_typesupport_introspection_c__CornersList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CornersList__rosidl_typesupport_introspection_c__CornersList_message_type_support_handle = {
  0,
  &CornersList__rosidl_typesupport_introspection_c__CornersList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs_srvs, msg, CornersList)() {
  if (!CornersList__rosidl_typesupport_introspection_c__CornersList_message_type_support_handle.typesupport_identifier) {
    CornersList__rosidl_typesupport_introspection_c__CornersList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CornersList__rosidl_typesupport_introspection_c__CornersList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
