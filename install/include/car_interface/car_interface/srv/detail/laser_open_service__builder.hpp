// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interface:srv/LaserOpenService.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__BUILDER_HPP_
#define CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_interface/srv/detail/laser_open_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_interface
{

namespace srv
{

namespace builder
{

class Init_LaserOpenService_Request_count
{
public:
  explicit Init_LaserOpenService_Request_count(::car_interface::srv::LaserOpenService_Request & msg)
  : msg_(msg)
  {}
  ::car_interface::srv::LaserOpenService_Request count(::car_interface::srv::LaserOpenService_Request::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interface::srv::LaserOpenService_Request msg_;
};

class Init_LaserOpenService_Request_mode
{
public:
  Init_LaserOpenService_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaserOpenService_Request_count mode(::car_interface::srv::LaserOpenService_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_LaserOpenService_Request_count(msg_);
  }

private:
  ::car_interface::srv::LaserOpenService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interface::srv::LaserOpenService_Request>()
{
  return car_interface::srv::builder::Init_LaserOpenService_Request_mode();
}

}  // namespace car_interface


namespace car_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interface::srv::LaserOpenService_Response>()
{
  return ::car_interface::srv::LaserOpenService_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace car_interface

#endif  // CAR_INTERFACE__SRV__DETAIL__LASER_OPEN_SERVICE__BUILDER_HPP_
