// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/engine_move__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs_srvs/msg/detail/engine_move__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_msgs_srvs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs_srvs
cdr_serialize(
  const custom_msgs_srvs::msg::EngineMove & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: move
  cdr << ros_message.move;
  // Member: castle
  cdr << (ros_message.castle ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs_srvs::msg::EngineMove & ros_message)
{
  // Member: move
  cdr >> ros_message.move;

  // Member: castle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.castle = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs_srvs
get_serialized_size(
  const custom_msgs_srvs::msg::EngineMove & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: move
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.move.size() + 1);
  // Member: castle
  {
    size_t item_size = sizeof(ros_message.castle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs_srvs
max_serialized_size_EngineMove(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: move
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: castle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EngineMove__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs_srvs::msg::EngineMove *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EngineMove__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs_srvs::msg::EngineMove *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EngineMove__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs_srvs::msg::EngineMove *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EngineMove__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EngineMove(full_bounded, 0);
}

static message_type_support_callbacks_t _EngineMove__callbacks = {
  "custom_msgs_srvs::msg",
  "EngineMove",
  _EngineMove__cdr_serialize,
  _EngineMove__cdr_deserialize,
  _EngineMove__get_serialized_size,
  _EngineMove__max_serialized_size
};

static rosidl_message_type_support_t _EngineMove__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EngineMove__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_msgs_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_msgs_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs_srvs::msg::EngineMove>()
{
  return &custom_msgs_srvs::msg::typesupport_fastrtps_cpp::_EngineMove__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs_srvs, msg, EngineMove)() {
  return &custom_msgs_srvs::msg::typesupport_fastrtps_cpp::_EngineMove__handle;
}

#ifdef __cplusplus
}
#endif
