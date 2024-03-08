// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs_srvs:msg/CornersList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs_srvs/msg/detail/corners_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_msgs_srvs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CornersList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs_srvs::msg::CornersList(_init);
}

void CornersList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs_srvs::msg::CornersList *>(message_memory);
  typed_message->~CornersList();
}

size_t size_function__CornersList__top_left_corner(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__CornersList__top_left_corner(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__CornersList__top_left_corner(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__CornersList__top_right_corner(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__CornersList__top_right_corner(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__CornersList__top_right_corner(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__CornersList__bottom_right_corner(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__CornersList__bottom_right_corner(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__CornersList__bottom_right_corner(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__CornersList__bottom_left_corner(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__CornersList__bottom_left_corner(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__CornersList__bottom_left_corner(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 2> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CornersList_message_member_array[4] = {
  {
    "top_left_corner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::CornersList, top_left_corner),  // bytes offset in struct
    nullptr,  // default value
    size_function__CornersList__top_left_corner,  // size() function pointer
    get_const_function__CornersList__top_left_corner,  // get_const(index) function pointer
    get_function__CornersList__top_left_corner,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "top_right_corner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::CornersList, top_right_corner),  // bytes offset in struct
    nullptr,  // default value
    size_function__CornersList__top_right_corner,  // size() function pointer
    get_const_function__CornersList__top_right_corner,  // get_const(index) function pointer
    get_function__CornersList__top_right_corner,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bottom_right_corner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::CornersList, bottom_right_corner),  // bytes offset in struct
    nullptr,  // default value
    size_function__CornersList__bottom_right_corner,  // size() function pointer
    get_const_function__CornersList__bottom_right_corner,  // get_const(index) function pointer
    get_function__CornersList__bottom_right_corner,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bottom_left_corner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::CornersList, bottom_left_corner),  // bytes offset in struct
    nullptr,  // default value
    size_function__CornersList__bottom_left_corner,  // size() function pointer
    get_const_function__CornersList__bottom_left_corner,  // get_const(index) function pointer
    get_function__CornersList__bottom_left_corner,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CornersList_message_members = {
  "custom_msgs_srvs::msg",  // message namespace
  "CornersList",  // message name
  4,  // number of fields
  sizeof(custom_msgs_srvs::msg::CornersList),
  CornersList_message_member_array,  // message members
  CornersList_init_function,  // function to initialize message memory (memory has to be allocated)
  CornersList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CornersList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CornersList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs_srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs_srvs::msg::CornersList>()
{
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::CornersList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, msg, CornersList)() {
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::CornersList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
