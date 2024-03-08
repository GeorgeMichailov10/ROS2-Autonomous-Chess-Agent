// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/engine_move__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs_srvs/msg/detail/engine_move__struct.h"
#include "custom_msgs_srvs/msg/detail/engine_move__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // move
#include "rosidl_runtime_c/string_functions.h"  // move

// forward declare type support functions


using _EngineMove__ros_msg_type = custom_msgs_srvs__msg__EngineMove;

static bool _EngineMove__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EngineMove__ros_msg_type * ros_message = static_cast<const _EngineMove__ros_msg_type *>(untyped_ros_message);
  // Field name: move
  {
    const rosidl_runtime_c__String * str = &ros_message->move;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: castle
  {
    cdr << (ros_message->castle ? true : false);
  }

  return true;
}

static bool _EngineMove__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EngineMove__ros_msg_type * ros_message = static_cast<_EngineMove__ros_msg_type *>(untyped_ros_message);
  // Field name: move
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->move.data) {
      rosidl_runtime_c__String__init(&ros_message->move);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->move,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'move'\n");
      return false;
    }
  }

  // Field name: castle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->castle = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t get_serialized_size_custom_msgs_srvs__msg__EngineMove(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EngineMove__ros_msg_type * ros_message = static_cast<const _EngineMove__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name move
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->move.size + 1);
  // field.name castle
  {
    size_t item_size = sizeof(ros_message->castle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EngineMove__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs_srvs__msg__EngineMove(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t max_serialized_size_custom_msgs_srvs__msg__EngineMove(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: move
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: castle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EngineMove__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs_srvs__msg__EngineMove(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EngineMove = {
  "custom_msgs_srvs::msg",
  "EngineMove",
  _EngineMove__cdr_serialize,
  _EngineMove__cdr_deserialize,
  _EngineMove__get_serialized_size,
  _EngineMove__max_serialized_size
};

static rosidl_message_type_support_t _EngineMove__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EngineMove,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, msg, EngineMove)() {
  return &_EngineMove__type_support;
}

#if defined(__cplusplus)
}
#endif
