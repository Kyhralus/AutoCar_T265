// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_t265_interface:srv/SendCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__STRUCT_HPP_
#define CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_t265_interface__srv__SendCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__car_t265_interface__srv__SendCommand_Request __declspec(deprecated)
#endif

namespace car_t265_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendCommand_Request_
{
  using Type = SendCommand_Request_<ContainerAllocator>;

  explicit SendCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hex_command = "";
    }
  }

  explicit SendCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hex_command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hex_command = "";
    }
  }

  // field types and members
  using _hex_command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hex_command_type hex_command;

  // setters for named parameter idiom
  Type & set__hex_command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hex_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_t265_interface::srv::SendCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_t265_interface::srv::SendCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_t265_interface::srv::SendCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_t265_interface::srv::SendCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_t265_interface__srv__SendCommand_Request
    std::shared_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_t265_interface__srv__SendCommand_Request
    std::shared_ptr<car_t265_interface::srv::SendCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCommand_Request_ & other) const
  {
    if (this->hex_command != other.hex_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCommand_Request_

// alias to use template instance with default allocator
using SendCommand_Request =
  car_t265_interface::srv::SendCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace car_t265_interface


#ifndef _WIN32
# define DEPRECATED__car_t265_interface__srv__SendCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__car_t265_interface__srv__SendCommand_Response __declspec(deprecated)
#endif

namespace car_t265_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendCommand_Response_
{
  using Type = SendCommand_Response_<ContainerAllocator>;

  explicit SendCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SendCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_t265_interface::srv::SendCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_t265_interface::srv::SendCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_t265_interface::srv::SendCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_t265_interface::srv::SendCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_t265_interface__srv__SendCommand_Response
    std::shared_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_t265_interface__srv__SendCommand_Response
    std::shared_ptr<car_t265_interface::srv::SendCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendCommand_Response_

// alias to use template instance with default allocator
using SendCommand_Response =
  car_t265_interface::srv::SendCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace car_t265_interface

namespace car_t265_interface
{

namespace srv
{

struct SendCommand
{
  using Request = car_t265_interface::srv::SendCommand_Request;
  using Response = car_t265_interface::srv::SendCommand_Response;
};

}  // namespace srv

}  // namespace car_t265_interface

#endif  // CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__STRUCT_HPP_
