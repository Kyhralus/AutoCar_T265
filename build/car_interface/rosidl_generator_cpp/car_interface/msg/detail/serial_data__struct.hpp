// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interface:msg/SerialData.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__SERIAL_DATA__STRUCT_HPP_
#define CAR_INTERFACE__MSG__DETAIL__SERIAL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_interface__msg__SerialData __attribute__((deprecated))
#else
# define DEPRECATED__car_interface__msg__SerialData __declspec(deprecated)
#endif

namespace car_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SerialData_
{
  using Type = SerialData_<ContainerAllocator>;

  explicit SerialData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SerialData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interface::msg::SerialData_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interface::msg::SerialData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interface::msg::SerialData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interface::msg::SerialData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::SerialData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::SerialData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::SerialData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::SerialData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interface::msg::SerialData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interface::msg::SerialData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interface__msg__SerialData
    std::shared_ptr<car_interface::msg::SerialData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interface__msg__SerialData
    std::shared_ptr<car_interface::msg::SerialData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerialData_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerialData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerialData_

// alias to use template instance with default allocator
using SerialData =
  car_interface::msg::SerialData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interface

#endif  // CAR_INTERFACE__MSG__DETAIL__SERIAL_DATA__STRUCT_HPP_
