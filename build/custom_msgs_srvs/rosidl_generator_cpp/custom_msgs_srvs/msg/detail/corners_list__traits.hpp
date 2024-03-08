// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_srvs:msg/CornersList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__TRAITS_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__TRAITS_HPP_

#include "custom_msgs_srvs/msg/detail/corners_list__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_msgs_srvs::msg::CornersList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: top_left_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.top_left_corner.size() == 0) {
      out << "top_left_corner: []\n";
    } else {
      out << "top_left_corner:\n";
      for (auto item : msg.top_left_corner) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: top_right_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.top_right_corner.size() == 0) {
      out << "top_right_corner: []\n";
    } else {
      out << "top_right_corner:\n";
      for (auto item : msg.top_right_corner) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bottom_right_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bottom_right_corner.size() == 0) {
      out << "bottom_right_corner: []\n";
    } else {
      out << "bottom_right_corner:\n";
      for (auto item : msg.bottom_right_corner) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bottom_left_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bottom_left_corner.size() == 0) {
      out << "bottom_left_corner: []\n";
    } else {
      out << "bottom_left_corner:\n";
      for (auto item : msg.bottom_left_corner) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_msgs_srvs::msg::CornersList & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_msgs_srvs::msg::CornersList>()
{
  return "custom_msgs_srvs::msg::CornersList";
}

template<>
inline const char * name<custom_msgs_srvs::msg::CornersList>()
{
  return "custom_msgs_srvs/msg/CornersList";
}

template<>
struct has_fixed_size<custom_msgs_srvs::msg::CornersList>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs_srvs::msg::CornersList>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs_srvs::msg::CornersList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__TRAITS_HPP_
