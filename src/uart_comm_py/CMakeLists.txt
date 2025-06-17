cmake_minimum_required(VERSION 3.8)
project(uart_comm_py)

find_package(ament_python REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  uart_comm_py/uart_node.py
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()