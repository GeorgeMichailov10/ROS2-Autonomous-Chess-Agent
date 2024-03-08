// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:msg/CornersList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__BUILDER_HPP_

#include "custom_msgs_srvs/msg/detail/corners_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_CornersList_bottom_left_corner
{
public:
  explicit Init_CornersList_bottom_left_corner(::custom_msgs_srvs::msg::CornersList & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::msg::CornersList bottom_left_corner(::custom_msgs_srvs::msg::CornersList::_bottom_left_corner_type arg)
  {
    msg_.bottom_left_corner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::msg::CornersList msg_;
};

class Init_CornersList_bottom_right_corner
{
public:
  explicit Init_CornersList_bottom_right_corner(::custom_msgs_srvs::msg::CornersList & msg)
  : msg_(msg)
  {}
  Init_CornersList_bottom_left_corner bottom_right_corner(::custom_msgs_srvs::msg::CornersList::_bottom_right_corner_type arg)
  {
    msg_.bottom_right_corner = std::move(arg);
    return Init_CornersList_bottom_left_corner(msg_);
  }

private:
  ::custom_msgs_srvs::msg::CornersList msg_;
};

class Init_CornersList_top_right_corner
{
public:
  explicit Init_CornersList_top_right_corner(::custom_msgs_srvs::msg::CornersList & msg)
  : msg_(msg)
  {}
  Init_CornersList_bottom_right_corner top_right_corner(::custom_msgs_srvs::msg::CornersList::_top_right_corner_type arg)
  {
    msg_.top_right_corner = std::move(arg);
    return Init_CornersList_bottom_right_corner(msg_);
  }

private:
  ::custom_msgs_srvs::msg::CornersList msg_;
};

class Init_CornersList_top_left_corner
{
public:
  Init_CornersList_top_left_corner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CornersList_top_right_corner top_left_corner(::custom_msgs_srvs::msg::CornersList::_top_left_corner_type arg)
  {
    msg_.top_left_corner = std::move(arg);
    return Init_CornersList_top_right_corner(msg_);
  }

private:
  ::custom_msgs_srvs::msg::CornersList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::msg::CornersList>()
{
  return custom_msgs_srvs::msg::builder::Init_CornersList_top_left_corner();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__BUILDER_HPP_
