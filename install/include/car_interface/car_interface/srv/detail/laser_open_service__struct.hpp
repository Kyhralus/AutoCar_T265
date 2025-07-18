// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_interface:srv/LaserOpenService.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__STRUCT_HPP_
#define CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__car_interface__srv__LaserOpenService_Request __attribute__((deprecated))
#else
# define DEPRECATED__car_interface__srv__LaserOpenService_Request __declspec(deprecated)
#endif

namespace car_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LaserOpenService_Request_
{
  using Type = LaserOpenService_Request_<ContainerAllocator>;

  explicit LaserOpenService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0ll;
      this->count = 0ll;
    }
  }

  explicit LaserOpenService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0ll;
      this->count = 0ll;
    }
  }

  // field types and members
  using _mode_type =
    int64_t;
  _mode_type mode;
  using _count_type =
    int64_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__mode(
    const int64_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__count(
    const int64_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_interface::srv::LaserOpenService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interface::srv::LaserOpenService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interface::srv::LaserOpenService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interface::srv::LaserOpenService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interface__srv__LaserOpenService_Request
    std::shared_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interface__srv__LaserOpenService_Request
    std::shared_ptr<car_interface::srv::LaserOpenService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserOpenService_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserOpenService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserOpenService_Request_

// alias to use template instance with default allocator
using LaserOpenService_Request =
  car_interface::srv::LaserOpenService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace car_interface


#ifndef _WIN32
# define DEPRECATED__car_interface__srv__LaserOpenService_Response __attribute__((deprecated))
#else
# define DEPRECATED__car_interface__srv__LaserOpenService_Response __declspec(deprecated)
#endif

namespace car_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LaserOpenService_Response_
{
  using Type = LaserOpenService_Response_<ContainerAllocator>;

  explicit LaserOpenService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit LaserOpenService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    car_interface::srv::LaserOpenService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_interface::srv::LaserOpenService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_interface::srv::LaserOpenService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_interface::srv::LaserOpenService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_interface__srv__LaserOpenService_Response
    std::shared_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_interface__srv__LaserOpenService_Response
    std::shared_ptr<car_interface::srv::LaserOpenService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserOpenService_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserOpenService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserOpenService_Response_

// alias to use template instance with default allocator
using LaserOpenService_Response =
  car_interface::srv::LaserOpenService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace car_interface

namespace car_interface
{

namespace srv
{

struct LaserOpenService
{
  using Request = car_interface::srv::LaserOpenService_Request;
  using Response = car_interface::srv::LaserOpenService_Response;
};

}  // namespace srv

}  // namespace car_interface

#endif  // CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__STRUCT_HPP_
