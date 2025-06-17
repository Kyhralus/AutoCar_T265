// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interface:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_interface__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__car_interface__msg__MotorCommand __declspec(deprecated)
#endif

namespace car_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->speed = 0.0f;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CMD_FORWARD =
    1u;
  static constexpr uint8_t CMD_BACKWARD =
    2u;
  static constexpr uint8_t CMD_STOP =
    3u;
  static constexpr uint8_t CMD_TURN_LEFT =
    4u;
  static constexpr uint8_t CMD_TURN_RIGHT =
    5u;

  // pointer types
  using RawPtr =
    car_interface::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interface::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interface::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interface::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interface::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interface::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interface__msg__MotorCommand
    std::shared_ptr<car_interface::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interface__msg__MotorCommand
    std::shared_ptr<car_interface::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  car_interface::msg::MotorCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_<ContainerAllocator>::CMD_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_<ContainerAllocator>::CMD_BACKWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_<ContainerAllocator>::CMD_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_<ContainerAllocator>::CMD_TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MotorCommand_<ContainerAllocator>::CMD_TURN_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace car_interface

#endif  // CAR_INTERFACE__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
