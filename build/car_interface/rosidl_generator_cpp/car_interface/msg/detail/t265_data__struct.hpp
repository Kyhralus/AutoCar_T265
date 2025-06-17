// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interface:msg/T265Data.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__MSG__DETAIL__T265_DATA__STRUCT_HPP_
#define CAR_INTERFACE__MSG__DETAIL__T265_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_interface__msg__T265Data __attribute__((deprecated))
#else
# define DEPRECATED__car_interface__msg__T265Data __declspec(deprecated)
#endif

namespace car_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct T265Data_
{
  using Type = T265Data_<ContainerAllocator>;

  explicit T265Data_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0;
      this->pos_y = 0.0;
      this->pos_z = 0.0;
      this->confidence = 0ll;
      this->pos_orient_x = 0.0;
      this->pos_orient_y = 0.0;
      this->pos_orient_z = 0.0;
      this->pos_orient_w = 0.0;
      this->vel_linear_x = 0.0;
      this->vel_linear_y = 0.0;
      this->vel_linear_z = 0.0;
      this->vel_angular_x = 0.0;
      this->vel_angular_y = 0.0;
      this->vel_angular_z = 0.0;
      this->acc_linear_x = 0.0;
      this->acc_linear_y = 0.0;
      this->acc_linear_z = 0.0;
      this->acc_angular_x = 0.0;
      this->acc_angular_y = 0.0;
      this->acc_angular_z = 0.0;
    }
  }

  explicit T265Data_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0.0;
      this->pos_y = 0.0;
      this->pos_z = 0.0;
      this->confidence = 0ll;
      this->pos_orient_x = 0.0;
      this->pos_orient_y = 0.0;
      this->pos_orient_z = 0.0;
      this->pos_orient_w = 0.0;
      this->vel_linear_x = 0.0;
      this->vel_linear_y = 0.0;
      this->vel_linear_z = 0.0;
      this->vel_angular_x = 0.0;
      this->vel_angular_y = 0.0;
      this->vel_angular_z = 0.0;
      this->acc_linear_x = 0.0;
      this->acc_linear_y = 0.0;
      this->acc_linear_z = 0.0;
      this->acc_angular_x = 0.0;
      this->acc_angular_y = 0.0;
      this->acc_angular_z = 0.0;
    }
  }

  // field types and members
  using _pos_x_type =
    double;
  _pos_x_type pos_x;
  using _pos_y_type =
    double;
  _pos_y_type pos_y;
  using _pos_z_type =
    double;
  _pos_z_type pos_z;
  using _confidence_type =
    int64_t;
  _confidence_type confidence;
  using _pos_orient_x_type =
    double;
  _pos_orient_x_type pos_orient_x;
  using _pos_orient_y_type =
    double;
  _pos_orient_y_type pos_orient_y;
  using _pos_orient_z_type =
    double;
  _pos_orient_z_type pos_orient_z;
  using _pos_orient_w_type =
    double;
  _pos_orient_w_type pos_orient_w;
  using _vel_linear_x_type =
    double;
  _vel_linear_x_type vel_linear_x;
  using _vel_linear_y_type =
    double;
  _vel_linear_y_type vel_linear_y;
  using _vel_linear_z_type =
    double;
  _vel_linear_z_type vel_linear_z;
  using _vel_angular_x_type =
    double;
  _vel_angular_x_type vel_angular_x;
  using _vel_angular_y_type =
    double;
  _vel_angular_y_type vel_angular_y;
  using _vel_angular_z_type =
    double;
  _vel_angular_z_type vel_angular_z;
  using _acc_linear_x_type =
    double;
  _acc_linear_x_type acc_linear_x;
  using _acc_linear_y_type =
    double;
  _acc_linear_y_type acc_linear_y;
  using _acc_linear_z_type =
    double;
  _acc_linear_z_type acc_linear_z;
  using _acc_angular_x_type =
    double;
  _acc_angular_x_type acc_angular_x;
  using _acc_angular_y_type =
    double;
  _acc_angular_y_type acc_angular_y;
  using _acc_angular_z_type =
    double;
  _acc_angular_z_type acc_angular_z;

  // setters for named parameter idiom
  Type & set__pos_x(
    const double & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const double & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__pos_z(
    const double & _arg)
  {
    this->pos_z = _arg;
    return *this;
  }
  Type & set__confidence(
    const int64_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__pos_orient_x(
    const double & _arg)
  {
    this->pos_orient_x = _arg;
    return *this;
  }
  Type & set__pos_orient_y(
    const double & _arg)
  {
    this->pos_orient_y = _arg;
    return *this;
  }
  Type & set__pos_orient_z(
    const double & _arg)
  {
    this->pos_orient_z = _arg;
    return *this;
  }
  Type & set__pos_orient_w(
    const double & _arg)
  {
    this->pos_orient_w = _arg;
    return *this;
  }
  Type & set__vel_linear_x(
    const double & _arg)
  {
    this->vel_linear_x = _arg;
    return *this;
  }
  Type & set__vel_linear_y(
    const double & _arg)
  {
    this->vel_linear_y = _arg;
    return *this;
  }
  Type & set__vel_linear_z(
    const double & _arg)
  {
    this->vel_linear_z = _arg;
    return *this;
  }
  Type & set__vel_angular_x(
    const double & _arg)
  {
    this->vel_angular_x = _arg;
    return *this;
  }
  Type & set__vel_angular_y(
    const double & _arg)
  {
    this->vel_angular_y = _arg;
    return *this;
  }
  Type & set__vel_angular_z(
    const double & _arg)
  {
    this->vel_angular_z = _arg;
    return *this;
  }
  Type & set__acc_linear_x(
    const double & _arg)
  {
    this->acc_linear_x = _arg;
    return *this;
  }
  Type & set__acc_linear_y(
    const double & _arg)
  {
    this->acc_linear_y = _arg;
    return *this;
  }
  Type & set__acc_linear_z(
    const double & _arg)
  {
    this->acc_linear_z = _arg;
    return *this;
  }
  Type & set__acc_angular_x(
    const double & _arg)
  {
    this->acc_angular_x = _arg;
    return *this;
  }
  Type & set__acc_angular_y(
    const double & _arg)
  {
    this->acc_angular_y = _arg;
    return *this;
  }
  Type & set__acc_angular_z(
    const double & _arg)
  {
    this->acc_angular_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interface::msg::T265Data_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interface::msg::T265Data_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interface::msg::T265Data_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interface::msg::T265Data_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::T265Data_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::T265Data_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interface::msg::T265Data_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interface::msg::T265Data_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interface::msg::T265Data_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interface::msg::T265Data_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interface__msg__T265Data
    std::shared_ptr<car_interface::msg::T265Data_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interface__msg__T265Data
    std::shared_ptr<car_interface::msg::T265Data_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const T265Data_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->pos_z != other.pos_z) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->pos_orient_x != other.pos_orient_x) {
      return false;
    }
    if (this->pos_orient_y != other.pos_orient_y) {
      return false;
    }
    if (this->pos_orient_z != other.pos_orient_z) {
      return false;
    }
    if (this->pos_orient_w != other.pos_orient_w) {
      return false;
    }
    if (this->vel_linear_x != other.vel_linear_x) {
      return false;
    }
    if (this->vel_linear_y != other.vel_linear_y) {
      return false;
    }
    if (this->vel_linear_z != other.vel_linear_z) {
      return false;
    }
    if (this->vel_angular_x != other.vel_angular_x) {
      return false;
    }
    if (this->vel_angular_y != other.vel_angular_y) {
      return false;
    }
    if (this->vel_angular_z != other.vel_angular_z) {
      return false;
    }
    if (this->acc_linear_x != other.acc_linear_x) {
      return false;
    }
    if (this->acc_linear_y != other.acc_linear_y) {
      return false;
    }
    if (this->acc_linear_z != other.acc_linear_z) {
      return false;
    }
    if (this->acc_angular_x != other.acc_angular_x) {
      return false;
    }
    if (this->acc_angular_y != other.acc_angular_y) {
      return false;
    }
    if (this->acc_angular_z != other.acc_angular_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const T265Data_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct T265Data_

// alias to use template instance with default allocator
using T265Data =
  car_interface::msg::T265Data_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_interface

#endif  // CAR_INTERFACE__MSG__DETAIL__T265_DATA__STRUCT_HPP_
