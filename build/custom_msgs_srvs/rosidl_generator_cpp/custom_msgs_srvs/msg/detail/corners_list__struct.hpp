// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:msg/CornersList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__msg__CornersList __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__msg__CornersList __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CornersList_
{
  using Type = CornersList_<ContainerAllocator>;

  explicit CornersList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->top_left_corner.begin(), this->top_left_corner.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->top_right_corner.begin(), this->top_right_corner.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->bottom_right_corner.begin(), this->bottom_right_corner.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->bottom_left_corner.begin(), this->bottom_left_corner.end(), 0l);
    }
  }

  explicit CornersList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : top_left_corner(_alloc),
    top_right_corner(_alloc),
    bottom_right_corner(_alloc),
    bottom_left_corner(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->top_left_corner.begin(), this->top_left_corner.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->top_right_corner.begin(), this->top_right_corner.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->bottom_right_corner.begin(), this->bottom_right_corner.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->bottom_left_corner.begin(), this->bottom_left_corner.end(), 0l);
    }
  }

  // field types and members
  using _top_left_corner_type =
    std::array<int32_t, 2>;
  _top_left_corner_type top_left_corner;
  using _top_right_corner_type =
    std::array<int32_t, 2>;
  _top_right_corner_type top_right_corner;
  using _bottom_right_corner_type =
    std::array<int32_t, 2>;
  _bottom_right_corner_type bottom_right_corner;
  using _bottom_left_corner_type =
    std::array<int32_t, 2>;
  _bottom_left_corner_type bottom_left_corner;

  // setters for named parameter idiom
  Type & set__top_left_corner(
    const std::array<int32_t, 2> & _arg)
  {
    this->top_left_corner = _arg;
    return *this;
  }
  Type & set__top_right_corner(
    const std::array<int32_t, 2> & _arg)
  {
    this->top_right_corner = _arg;
    return *this;
  }
  Type & set__bottom_right_corner(
    const std::array<int32_t, 2> & _arg)
  {
    this->bottom_right_corner = _arg;
    return *this;
  }
  Type & set__bottom_left_corner(
    const std::array<int32_t, 2> & _arg)
  {
    this->bottom_left_corner = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::msg::CornersList_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::msg::CornersList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::CornersList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::CornersList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__msg__CornersList
    std::shared_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__msg__CornersList
    std::shared_ptr<custom_msgs_srvs::msg::CornersList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CornersList_ & other) const
  {
    if (this->top_left_corner != other.top_left_corner) {
      return false;
    }
    if (this->top_right_corner != other.top_right_corner) {
      return false;
    }
    if (this->bottom_right_corner != other.bottom_right_corner) {
      return false;
    }
    if (this->bottom_left_corner != other.bottom_left_corner) {
      return false;
    }
    return true;
  }
  bool operator!=(const CornersList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CornersList_

// alias to use template instance with default allocator
using CornersList =
  custom_msgs_srvs::msg::CornersList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__CORNERS_LIST__STRUCT_HPP_
