// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_srvs:msg/Bitmap.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__TRAITS_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__TRAITS_HPP_

#include "custom_msgs_srvs/msg/detail/bitmap__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_msgs_srvs::msg::Bitmap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: row1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row1.size() == 0) {
      out << "row1: []\n";
    } else {
      out << "row1:\n";
      for (auto item : msg.row1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row2.size() == 0) {
      out << "row2: []\n";
    } else {
      out << "row2:\n";
      for (auto item : msg.row2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row3.size() == 0) {
      out << "row3: []\n";
    } else {
      out << "row3:\n";
      for (auto item : msg.row3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row4.size() == 0) {
      out << "row4: []\n";
    } else {
      out << "row4:\n";
      for (auto item : msg.row4) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row5.size() == 0) {
      out << "row5: []\n";
    } else {
      out << "row5:\n";
      for (auto item : msg.row5) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row6.size() == 0) {
      out << "row6: []\n";
    } else {
      out << "row6:\n";
      for (auto item : msg.row6) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row7.size() == 0) {
      out << "row7: []\n";
    } else {
      out << "row7:\n";
      for (auto item : msg.row7) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: row8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.row8.size() == 0) {
      out << "row8: []\n";
    } else {
      out << "row8:\n";
      for (auto item : msg.row8) {
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

inline std::string to_yaml(const custom_msgs_srvs::msg::Bitmap & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_msgs_srvs::msg::Bitmap>()
{
  return "custom_msgs_srvs::msg::Bitmap";
}

template<>
inline const char * name<custom_msgs_srvs::msg::Bitmap>()
{
  return "custom_msgs_srvs/msg/Bitmap";
}

template<>
struct has_fixed_size<custom_msgs_srvs::msg::Bitmap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs_srvs::msg::Bitmap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs_srvs::msg::Bitmap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__TRAITS_HPP_
