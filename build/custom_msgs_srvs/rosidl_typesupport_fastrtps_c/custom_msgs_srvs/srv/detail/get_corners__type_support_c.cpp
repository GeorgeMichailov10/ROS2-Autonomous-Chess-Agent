// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs_srvs:srv/GetCorners.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/srv/detail/get_corners__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs_srvs/srv/detail/get_corners__struct.h"
#include "custom_msgs_srvs/srv/detail/get_corners__functions.h"
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

#include "sensor_msgs/msg/detail/image__functions.h"  // board

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs_srvs
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs_srvs
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _GetCorners_Request__ros_msg_type = custom_msgs_srvs__srv__GetCorners_Request;

static bool _GetCorners_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCorners_Request__ros_msg_type * ros_message = static_cast<const _GetCorners_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: board
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->board, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetCorners_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCorners_Request__ros_msg_type * ros_message = static_cast<_GetCorners_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: board
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->board))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t get_serialized_size_custom_msgs_srvs__srv__GetCorners_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCorners_Request__ros_msg_type * ros_message = static_cast<const _GetCorners_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name board

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->board), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetCorners_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs_srvs__srv__GetCorners_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t max_serialized_size_custom_msgs_srvs__srv__GetCorners_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: board
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetCorners_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs_srvs__srv__GetCorners_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetCorners_Request = {
  "custom_msgs_srvs::srv",
  "GetCorners_Request",
  _GetCorners_Request__cdr_serialize,
  _GetCorners_Request__cdr_deserialize,
  _GetCorners_Request__get_serialized_size,
  _GetCorners_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetCorners_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCorners_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, srv, GetCorners_Request)() {
  return &_GetCorners_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "custom_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "custom_msgs_srvs/srv/detail/get_corners__struct.h"
// already included above
// #include "custom_msgs_srvs/srv/detail/get_corners__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "custom_msgs_srvs/msg/detail/corners_list__functions.h"  // corners_list

// forward declare type support functions
size_t get_serialized_size_custom_msgs_srvs__msg__CornersList(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs_srvs__msg__CornersList(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, msg, CornersList)();


using _GetCorners_Response__ros_msg_type = custom_msgs_srvs__srv__GetCorners_Response;

static bool _GetCorners_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetCorners_Response__ros_msg_type * ros_message = static_cast<const _GetCorners_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: corners_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs_srvs, msg, CornersList
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->corners_list, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetCorners_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetCorners_Response__ros_msg_type * ros_message = static_cast<_GetCorners_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: corners_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs_srvs, msg, CornersList
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->corners_list))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t get_serialized_size_custom_msgs_srvs__srv__GetCorners_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetCorners_Response__ros_msg_type * ros_message = static_cast<const _GetCorners_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name corners_list

  current_alignment += get_serialized_size_custom_msgs_srvs__msg__CornersList(
    &(ros_message->corners_list), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetCorners_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs_srvs__srv__GetCorners_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs_srvs
size_t max_serialized_size_custom_msgs_srvs__srv__GetCorners_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: corners_list
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs_srvs__msg__CornersList(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetCorners_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs_srvs__srv__GetCorners_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetCorners_Response = {
  "custom_msgs_srvs::srv",
  "GetCorners_Response",
  _GetCorners_Response__cdr_serialize,
  _GetCorners_Response__cdr_deserialize,
  _GetCorners_Response__get_serialized_size,
  _GetCorners_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetCorners_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetCorners_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, srv, GetCorners_Response)() {
  return &_GetCorners_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "custom_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs_srvs/srv/get_corners.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetCorners__callbacks = {
  "custom_msgs_srvs::srv",
  "GetCorners",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, srv, GetCorners_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, srv, GetCorners_Response)(),
};

static rosidl_service_type_support_t GetCorners__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetCorners__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs_srvs, srv, GetCorners)() {
  return &GetCorners__handle;
}

#if defined(__cplusplus)
}
#endif
