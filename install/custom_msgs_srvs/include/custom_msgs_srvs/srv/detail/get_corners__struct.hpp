// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs_srvs:srv/GetCorners.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__STRUCT_HPP_
#define CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'board'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__GetCorners_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__GetCorners_Request __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCorners_Request_
{
  using Type = GetCorners_Request_<ContainerAllocator>;

  explicit GetCorners_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : board(_init)
  {
    (void)_init;
  }

  explicit GetCorners_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : board(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _board_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _board_type board;

  // setters for named parameter idiom
  Type & set__board(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->board = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__GetCorners_Request
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__GetCorners_Request
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCorners_Request_ & other) const
  {
    if (this->board != other.board) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCorners_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCorners_Request_

// alias to use template instance with default allocator
using GetCorners_Request =
  custom_msgs_srvs::srv::GetCorners_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs_srvs


// Include directives for member types
// Member 'corners_list'
#include "custom_msgs_srvs/msg/detail/corners_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs_srvs__srv__GetCorners_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs_srvs__srv__GetCorners_Response __declspec(deprecated)
#endif

namespace custom_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetCorners_Response_
{
  using Type = GetCorners_Response_<ContainerAllocator>;

  explicit GetCorners_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : corners_list(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GetCorners_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : corners_list(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _corners_list_type =
    custom_msgs_srvs::msg::CornersList_<ContainerAllocator>;
  _corners_list_type corners_list;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__corners_list(
    const custom_msgs_srvs::msg::CornersList_<ContainerAllocator> & _arg)
  {
    this->corners_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs_srvs__srv__GetCorners_Response
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs_srvs__srv__GetCorners_Response
    std::shared_ptr<custom_msgs_srvs::srv::GetCorners_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetCorners_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->corners_list != other.corners_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetCorners_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetCorners_Response_

// alias to use template instance with default allocator
using GetCorners_Response =
  custom_msgs_srvs::srv::GetCorners_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs_srvs

namespace custom_msgs_srvs
{

namespace srv
{

struct GetCorners
{
  using Request = custom_msgs_srvs::srv::GetCorners_Request;
  using Response = custom_msgs_srvs::srv::GetCorners_Response;
};

}  // namespace srv

}  // namespace custom_msgs_srvs

#endif  // CUSTOM_MSGS_SRVS__SRV__DETAIL__GET_CORNERS__STRUCT_HPP_
