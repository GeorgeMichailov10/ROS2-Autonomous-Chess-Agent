// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__msg__EngineMove __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__msg__EngineMove __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EngineMove_
{
  using Type = EngineMove_<ContainerAllocator>;

  explicit EngineMove_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move = "";
      this->castle = false;
    }
  }

  explicit EngineMove_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : move(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->move = "";
      this->castle = false;
    }
  }

  // field types and members
  using _move_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _move_type move;
  using _castle_type =
    bool;
  _castle_type castle;

  // setters for named parameter idiom
  Type & set__move(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->move = _arg;
    return *this;
  }
  Type & set__castle(
    const bool & _arg)
  {
    this->castle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::msg::EngineMove_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::msg::EngineMove_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::EngineMove_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::EngineMove_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__msg__EngineMove
    std::shared_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__msg__EngineMove
    std::shared_ptr<custom_msgs_srvs::msg::EngineMove_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EngineMove_ & other) const
  {
    if (this->move != other.move) {
      return false;
    }
    if (this->castle != other.castle) {
      return false;
    }
    return true;
  }
  bool operator!=(const EngineMove_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EngineMove_

// alias to use template instance with default allocator
using EngineMove =
  custom_msgs_srvs::msg::EngineMove_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__ENGINE_MOVE__STRUCT_HPP_
