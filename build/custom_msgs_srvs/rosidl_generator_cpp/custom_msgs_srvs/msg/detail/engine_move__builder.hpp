// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__BUILDER_HPP_

#include "custom_msgs_srvs/msg/detail/engine_move__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_EngineMove_castle
{
public:
  explicit Init_EngineMove_castle(::custom_msgs_srvs::msg::EngineMove & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::msg::EngineMove castle(::custom_msgs_srvs::msg::EngineMove::_castle_type arg)
  {
    msg_.castle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::msg::EngineMove msg_;
};

class Init_EngineMove_move
{
public:
  Init_EngineMove_move()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EngineMove_castle move(::custom_msgs_srvs::msg::EngineMove::_move_type arg)
  {
    msg_.move = std::move(arg);
    return Init_EngineMove_castle(msg_);
  }

private:
  ::custom_msgs_srvs::msg::EngineMove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::msg::EngineMove>()
{
  return custom_msgs_srvs::msg::builder::Init_EngineMove_move();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__BUILDER_HPP_
