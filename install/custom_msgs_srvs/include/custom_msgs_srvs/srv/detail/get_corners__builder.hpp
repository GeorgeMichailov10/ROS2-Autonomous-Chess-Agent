// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:srv/GetCorners.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__BUILDER_HPP_

#include "custom_msgs_srvs/srv/detail/get_corners__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_GetCorners_Request_board
{
public:
  Init_GetCorners_Request_board()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs_srvs::srv::GetCorners_Request board(::custom_msgs_srvs::srv::GetCorners_Request::_board_type arg)
  {
    msg_.board = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::srv::GetCorners_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::GetCorners_Request>()
{
  return custom_msgs_srvs::srv::builder::Init_GetCorners_Request_board();
}

}  // namespace custom_msgs_srvs


namespace custom_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_GetCorners_Response_corners_list
{
public:
  explicit Init_GetCorners_Response_corners_list(::custom_msgs_srvs::srv::GetCorners_Response & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::srv::GetCorners_Response corners_list(::custom_msgs_srvs::srv::GetCorners_Response::_corners_list_type arg)
  {
    msg_.corners_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::srv::GetCorners_Response msg_;
};

class Init_GetCorners_Response_success
{
public:
  Init_GetCorners_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCorners_Response_corners_list success(::custom_msgs_srvs::srv::GetCorners_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetCorners_Response_corners_list(msg_);
  }

private:
  ::custom_msgs_srvs::srv::GetCorners_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::srv::GetCorners_Response>()
{
  return custom_msgs_srvs::srv::builder::Init_GetCorners_Response_success();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__BUILDER_HPP_
