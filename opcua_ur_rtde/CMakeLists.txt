cmake_minimum_required(VERSION 3.8)
project(opcua_ur_rtde)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ur_rtde REQUIRED PATHS 
              "/home/mostafa/workspaces/common/ur_rtde_ws/ur_rtde/build/ur_rtde")

find_library(MBEDTLS_LIBRARY mbedtls REQUIRED)
find_library(MBEDX509_LIBRARY mbedx509 REQUIRED)
find_library(MBEDCRYPTO_LIBRARY mbedcrypto REQUIRED)

include_directories(include)


add_library(ur_opcua_server STATIC src/open62541.c src/server_opcua_ur5e.c)
target_link_libraries(ur_opcua_server pthread ${MBEDTLS_LIBRARY} ${MBEDX509_LIBRARY} ${MBEDCRYPTO_LIBRARY})

add_executable(server_from_generated_ur5e_model src/server_opcua_generated_ur5e.c src/open62541.c src/robot.c)
target_link_libraries(server_from_generated_ur5e_model pthread ${MBEDTLS_LIBRARY} ${MBEDX509_LIBRARY} ${MBEDCRYPTO_LIBRARY})

add_executable(opcua_server_ur5e_RTDE src/server_rtde_feeddata.cpp)
target_link_libraries(opcua_server_ur5e_RTDE
  PUBLIC ur_opcua_server
  PRIVATE ur_rtde::rtde
)

install(TARGETS
  opcua_server_ur5e_RTDE
  server_from_generated_ur5e_model
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
