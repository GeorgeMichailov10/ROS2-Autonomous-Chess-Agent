// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs_srvs/msg/detail/engine_move__struct.hpp"
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

void EngineMove_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs_srvs::msg::EngineMove(_init);
}

void EngineMove_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs_srvs::msg::EngineMove *>(message_memory);
  typed_message->~EngineMove();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EngineMove_message_member_array[2] = {
  {
    "move",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::EngineMove, move),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "castle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs_srvs::msg::EngineMove, castle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EngineMove_message_members = {
  "custom_msgs_srvs::msg",  // message namespace
  "EngineMove",  // message name
  2,  // number of fields
  sizeof(custom_msgs_srvs::msg::EngineMove),
  EngineMove_message_member_array,  // message members
  EngineMove_init_function,  // function to initialize message memory (memory has to be allocated)
  EngineMove_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EngineMove_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EngineMove_message_members,
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
get_message_type_support_handle<custom_msgs_srvs::msg::EngineMove>()
{
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::EngineMove_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs_srvs, msg, EngineMove)() {
  return &::custom_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::EngineMove_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
