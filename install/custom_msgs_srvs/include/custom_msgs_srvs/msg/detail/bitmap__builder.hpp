// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs_srvs:msg/Bitmap.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__BUILDER_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__BUILDER_HPP_

#include "custom_msgs_srvs/msg/detail/bitmap__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_Bitmap_row8
{
public:
  explicit Init_Bitmap_row8(::custom_msgs_srvs::msg::Bitmap & msg)
  : msg_(msg)
  {}
  ::custom_msgs_srvs::msg::Bitmap row8(::custom_msgs_srvs::msg::Bitmap::_row8_type arg)
  {
    msg_.row8 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

class Init_Bitmap_row7
{
public:
  explicit Init_Bitmap_row7(::custom_msgs_srvs::msg::Bitmap & msg)
  : msg_(msg)
  {}
  Init_Bitmap_row8 row7(::custom_msgs_srvs::msg::Bitmap::_row7_type arg)
  {
    msg_.row7 = std::move(arg);
    return Init_Bitmap_row8(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

class Init_Bitmap_row6
{
public:
  explicit Init_Bitmap_row6(::custom_msgs_srvs::msg::Bitmap & msg)
  : msg_(msg)
  {}
  Init_Bitmap_row7 row6(::custom_msgs_srvs::msg::Bitmap::_row6_type arg)
  {
    msg_.row6 = std::move(arg);
    return Init_Bitmap_row7(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

class Init_Bitmap_row5
{
public:
  explicit Init_Bitmap_row5(::custom_msgs_srvs::msg::Bitmap & msg)
  : msg_(msg)
  {}
  Init_Bitmap_row6 row5(::custom_msgs_srvs::msg::Bitmap::_row5_type arg)
  {
    msg_.row5 = std::move(arg);
    return Init_Bitmap_row6(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

class Init_Bitmap_row4
{
public:
  explicit Init_Bitmap_row4(::custom_msgs_srvs::msg::Bitmap & msg)
  : msg_(msg)
  {}
  Init_Bitmap_row5 row4(::custom_msgs_srvs::msg::Bitmap::_row4_type arg)
  {
    msg_.row4 = std::move(arg);
    return Init_Bitmap_row5(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

class Init_Bitmap_row3
{
public:
  explicit Init_Bitmap_row3(::custom_msgs_srvs::msg::Bitmap & msg)
  : msg_(msg)
  {}
  Init_Bitmap_row4 row3(::custom_msgs_srvs::msg::Bitmap::_row3_type arg)
  {
    msg_.row3 = std::move(arg);
    return Init_Bitmap_row4(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

class Init_Bitmap_row2
{
public:
  explicit Init_Bitmap_row2(::custom_msgs_srvs::msg::Bitmap & msg)
  : msg_(msg)
  {}
  Init_Bitmap_row3 row2(::custom_msgs_srvs::msg::Bitmap::_row2_type arg)
  {
    msg_.row2 = std::move(arg);
    return Init_Bitmap_row3(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

class Init_Bitmap_row1
{
public:
  Init_Bitmap_row1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Bitmap_row2 row1(::custom_msgs_srvs::msg::Bitmap::_row1_type arg)
  {
    msg_.row1 = std::move(arg);
    return Init_Bitmap_row2(msg_);
  }

private:
  ::custom_msgs_srvs::msg::Bitmap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs_srvs::msg::Bitmap>()
{
  return custom_msgs_srvs::msg::builder::Init_Bitmap_row1();
}

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__BUILDER_HPP_
