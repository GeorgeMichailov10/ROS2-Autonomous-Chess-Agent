// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__TRAITS_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__TRAITS_HPP_

#include "custom_msgs_srvs/msg/detail/engine_move__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_msgs_srvs::msg::EngineMove & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: move
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "move: ";
    value_to_yaml(msg.move, out);
    out << "\n";
  }

  // member: castle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "castle: ";
    value_to_yaml(msg.castle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_msgs_srvs::msg::EngineMove & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_msgs_srvs::msg::EngineMove>()
{
  return "custom_msgs_srvs::msg::EngineMove";
}

template<>
inline const char * name<custom_msgs_srvs::msg::EngineMove>()
{
  return "custom_msgs_srvs/msg/EngineMove";
}

template<>
struct has_fixed_size<custom_msgs_srvs::msg::EngineMove>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs_srvs::msg::EngineMove>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs_srvs::msg::EngineMove>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__TRAITS_HPP_
