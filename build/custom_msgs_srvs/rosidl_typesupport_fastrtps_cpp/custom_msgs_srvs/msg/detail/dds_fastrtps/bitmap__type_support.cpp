// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs_srvs:msg/Bitmap.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/bitmap__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs_srvs/msg/detail/bitmap__struct.hpp"

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
  const custom_msgs_srvs::msg::Bitmap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: row1
  {
    cdr << ros_message.row1;
  }
  // Member: row2
  {
    cdr << ros_message.row2;
  }
  // Member: row3
  {
    cdr << ros_message.row3;
  }
  // Member: row4
  {
    cdr << ros_message.row4;
  }
  // Member: row5
  {
    cdr << ros_message.row5;
  }
  // Member: row6
  {
    cdr << ros_message.row6;
  }
  // Member: row7
  {
    cdr << ros_message.row7;
  }
  // Member: row8
  {
    cdr << ros_message.row8;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs_srvs::msg::Bitmap & ros_message)
{
  // Member: row1
  {
    cdr >> ros_message.row1;
  }

  // Member: row2
  {
    cdr >> ros_message.row2;
  }

  // Member: row3
  {
    cdr >> ros_message.row3;
  }

  // Member: row4
  {
    cdr >> ros_message.row4;
  }

  // Member: row5
  {
    cdr >> ros_message.row5;
  }

  // Member: row6
  {
    cdr >> ros_message.row6;
  }

  // Member: row7
  {
    cdr >> ros_message.row7;
  }

  // Member: row8
  {
    cdr >> ros_message.row8;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs_srvs
get_serialized_size(
  const custom_msgs_srvs::msg::Bitmap & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: row1
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row1[index].size() + 1);
    }
  }
  // Member: row2
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row2[index].size() + 1);
    }
  }
  // Member: row3
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row3[index].size() + 1);
    }
  }
  // Member: row4
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row4[index].size() + 1);
    }
  }
  // Member: row5
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row5[index].size() + 1);
    }
  }
  // Member: row6
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row6[index].size() + 1);
    }
  }
  // Member: row7
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row7[index].size() + 1);
    }
  }
  // Member: row8
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.row8[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs_srvs
max_serialized_size_Bitmap(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: row1
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: row2
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: row3
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: row4
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: row5
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: row6
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: row7
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: row8
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Bitmap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs_srvs::msg::Bitmap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Bitmap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs_srvs::msg::Bitmap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Bitmap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs_srvs::msg::Bitmap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Bitmap__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Bitmap(full_bounded, 0);
}

static message_type_support_callbacks_t _Bitmap__callbacks = {
  "custom_msgs_srvs::msg",
  "Bitmap",
  _Bitmap__cdr_serialize,
  _Bitmap__cdr_deserialize,
  _Bitmap__get_serialized_size,
  _Bitmap__max_serialized_size
};

static rosidl_message_type_support_t _Bitmap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Bitmap__callbacks,
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
get_message_type_support_handle<custom_msgs_srvs::msg::Bitmap>()
{
  return &custom_msgs_srvs::msg::typesupport_fastrtps_cpp::_Bitmap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs_srvs, msg, Bitmap)() {
  return &custom_msgs_srvs::msg::typesupport_fastrtps_cpp::_Bitmap__handle;
}

#ifdef __cplusplus
}
#endif
