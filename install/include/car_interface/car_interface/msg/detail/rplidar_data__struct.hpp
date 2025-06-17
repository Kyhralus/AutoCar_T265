// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interface:msg/RplidarData.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__STRUCT_HPP_
#define CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_interface__msg__RplidarData __attribute__((deprecated))
#else
# define DEPRECATED__car_interface__msg__RplidarData __declspec(deprecated)
#endif

namespace car_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RplidarData_
{
  using Type = RplidarData_<ContainerAllocator>;

  explicit RplidarData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0;
      this->theta = 0.0;
    }
  }

  explicit RplidarData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0;
      this->theta = 0.0;
    }
  }

  // field types and members
  using _dist_type =
    double;
  _dist_type dist;
  using _theta_type =
    double;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__dist(
    const double & _arg)
  {
    this->dist = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interface::msg::RplidarData_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interface::msg::RplidarData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interface::msg::RplidarData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interface::msg::RplidarData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::RplidarData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::RplidarData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::RplidarData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::RplidarData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interface::msg::RplidarData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interface::msg::RplidarData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interface__msg__RplidarData
    std::shared_ptr<car_interface::msg::RplidarData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interface__msg__RplidarData
    std::shared_ptr<car_interface::msg::RplidarData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RplidarData_ & other) const
  {
    if (this->dist != other.dist) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const RplidarData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RplidarData_

// alias to use template instance with default allocator
using RplidarData =
  car_interface::msg::RplidarData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interface

#endif  // CAR_INTERFACE__MSG__DETAIL__RPLIDAR_DATA__STRUCT_HPP_
