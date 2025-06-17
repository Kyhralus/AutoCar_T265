// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_t265_interface:srv/SendCommand.idl
// generated code does not contain a copyright notice

#ifndef CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__BUILDER_HPP_
#define CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "car_t265_interface/srv/detail/send_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace car_t265_interface
{

namespace srv
{

namespace builder
{

class Init_SendCommand_Request_hex_command
{
public:
  Init_SendCommand_Request_hex_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::car_t265_interface::srv::SendCommand_Request hex_command(::car_t265_interface::srv::SendCommand_Request::_hex_command_type arg)
  {
    msg_.hex_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_t265_interface::srv::SendCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_t265_interface::srv::SendCommand_Request>()
{
  return car_t265_interface::srv::builder::Init_SendCommand_Request_hex_command();
}

}  // namespace car_t265_interface


namespace car_t265_interface
{

namespace srv
{

namespace builder
{

class Init_SendCommand_Response_message
{
public:
  explicit Init_SendCommand_Response_message(::car_t265_interface::srv::SendCommand_Response & msg)
  : msg_(msg)
  {}
  ::car_t265_interface::srv::SendCommand_Response message(::car_t265_interface::srv::SendCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_t265_interface::srv::SendCommand_Response msg_;
};

class Init_SendCommand_Response_success
{
public:
  Init_SendCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendCommand_Response_message success(::car_t265_interface::srv::SendCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SendCommand_Response_message(msg_);
  }

private:
  ::car_t265_interface::srv::SendCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_t265_interface::srv::SendCommand_Response>()
{
  return car_t265_interface::srv::builder::Init_SendCommand_Response_success();
}

}  // namespace car_t265_interface

#endif  // CAR_T265_INTERFACE__SRV__DETAIL__SEND_COMMAND__BUILDER_HPP_
