// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs_srvs:srv/GetCorners.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__TRAITS_HPP_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__TRAITS_HPP_

#include "custom_msgs_srvs/srv/detail/get_corners__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'board'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_msgs_srvs::srv::GetCorners_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board:\n";
    to_yaml(msg.board, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_msgs_srvs::srv::GetCorners_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_msgs_srvs::srv::GetCorners_Request>()
{
  return "custom_msgs_srvs::srv::GetCorners_Request";
}

template<>
inline const char * name<custom_msgs_srvs::srv::GetCorners_Request>()
{
  return "custom_msgs_srvs/srv/GetCorners_Request";
}

template<>
struct has_fixed_size<custom_msgs_srvs::srv::GetCorners_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<custom_msgs_srvs::srv::GetCorners_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<custom_msgs_srvs::srv::GetCorners_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'corners_list'
#include "custom_msgs_srvs/msg/detail/corners_list__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_msgs_srvs::srv::GetCorners_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: corners_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "corners_list:\n";
    to_yaml(msg.corners_list, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_msgs_srvs::srv::GetCorners_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_msgs_srvs::srv::GetCorners_Response>()
{
  return "custom_msgs_srvs::srv::GetCorners_Response";
}

template<>
inline const char * name<custom_msgs_srvs::srv::GetCorners_Response>()
{
  return "custom_msgs_srvs/srv/GetCorners_Response";
}

template<>
struct has_fixed_size<custom_msgs_srvs::srv::GetCorners_Response>
  : std::integral_constant<bool, has_fixed_size<custom_msgs_srvs::msg::CornersList>::value> {};

template<>
struct has_bounded_size<custom_msgs_srvs::srv::GetCorners_Response>
  : std::integral_constant<bool, has_bounded_size<custom_msgs_srvs::msg::CornersList>::value> {};

template<>
struct is_message<custom_msgs_srvs::srv::GetCorners_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs_srvs::srv::GetCorners>()
{
  return "custom_msgs_srvs::srv::GetCorners";
}

template<>
inline const char * name<custom_msgs_srvs::srv::GetCorners>()
{
  return "custom_msgs_srvs/srv/GetCorners";
}

template<>
struct has_fixed_size<custom_msgs_srvs::srv::GetCorners>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs_srvs::srv::GetCorners_Request>::value &&
    has_fixed_size<custom_msgs_srvs::srv::GetCorners_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs_srvs::srv::GetCorners>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs_srvs::srv::GetCorners_Request>::value &&
    has_bounded_size<custom_msgs_srvs::srv::GetCorners_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs_srvs::srv::GetCorners>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs_srvs::srv::GetCorners_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs_srvs::srv::GetCorners_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__TRAITS_HPP_
