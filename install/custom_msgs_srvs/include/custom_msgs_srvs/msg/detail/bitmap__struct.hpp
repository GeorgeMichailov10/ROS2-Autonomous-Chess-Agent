// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:msg/Bitmap.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__msg__Bitmap __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__msg__Bitmap __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Bitmap_
{
  using Type = Bitmap_<ContainerAllocator>;

  explicit Bitmap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row1.begin(), this->row1.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row2.begin(), this->row2.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row3.begin(), this->row3.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row4.begin(), this->row4.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row5.begin(), this->row5.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row6.begin(), this->row6.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row7.begin(), this->row7.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row8.begin(), this->row8.end(), "");
    }
  }

  explicit Bitmap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : row1(_alloc),
    row2(_alloc),
    row3(_alloc),
    row4(_alloc),
    row5(_alloc),
    row6(_alloc),
    row7(_alloc),
    row8(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row1.begin(), this->row1.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row2.begin(), this->row2.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row3.begin(), this->row3.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row4.begin(), this->row4.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row5.begin(), this->row5.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row6.begin(), this->row6.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row7.begin(), this->row7.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->row8.begin(), this->row8.end(), "");
    }
  }

  // field types and members
  using _row1_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row1_type row1;
  using _row2_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row2_type row2;
  using _row3_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row3_type row3;
  using _row4_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row4_type row4;
  using _row5_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row5_type row5;
  using _row6_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row6_type row6;
  using _row7_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row7_type row7;
  using _row8_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8>;
  _row8_type row8;

  // setters for named parameter idiom
  Type & set__row1(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row1 = _arg;
    return *this;
  }
  Type & set__row2(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row2 = _arg;
    return *this;
  }
  Type & set__row3(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row3 = _arg;
    return *this;
  }
  Type & set__row4(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row4 = _arg;
    return *this;
  }
  Type & set__row5(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row5 = _arg;
    return *this;
  }
  Type & set__row6(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row6 = _arg;
    return *this;
  }
  Type & set__row7(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row7 = _arg;
    return *this;
  }
  Type & set__row8(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 8> & _arg)
  {
    this->row8 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::msg::Bitmap_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::msg::Bitmap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::Bitmap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::msg::Bitmap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__msg__Bitmap
    std::shared_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__msg__Bitmap
    std::shared_ptr<custom_msgs_srvs::msg::Bitmap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Bitmap_ & other) const
  {
    if (this->row1 != other.row1) {
      return false;
    }
    if (this->row2 != other.row2) {
      return false;
    }
    if (this->row3 != other.row3) {
      return false;
    }
    if (this->row4 != other.row4) {
      return false;
    }
    if (this->row5 != other.row5) {
      return false;
    }
    if (this->row6 != other.row6) {
      return false;
    }
    if (this->row7 != other.row7) {
      return false;
    }
    if (this->row8 != other.row8) {
      return false;
    }
    return true;
  }
  bool operator!=(const Bitmap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Bitmap_

// alias to use template instance with default allocator
using Bitmap =
  custom_msgs_srvs::msg::Bitmap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__MSG__DETAIL__BITMAP__STRUCT_HPP_
