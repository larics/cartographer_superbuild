cmake_minimum_required(VERSION 3.1.0)
project(ros_stub)
set(CMAKE_CXX_STANDARD 14)

set(BUILD_SHARED_LIBS OFF)

find_package(Boost COMPONENTS system REQUIRED)
find_package(BZip2 REQUIRED)
find_package(Eigen3 REQUIRED)

add_subdirectory(console_bridge)
file(GLOB ros_stub_SRCS *.cpp *.c)

add_library(ros_stub STATIC ${ros_stub_SRCS})

target_compile_definitions(ros_stub PUBLIC -DUSE_ROS_STUB)
target_include_directories(ros_stub PUBLIC
    include
    ${Boost_INCLUDE_DIRS}
    ${EIGEN3_INCLUDE_DIR}
    ${BZIP2_INCLUDE_DIR}
    ${LZ4_INCLUDE_DIR}
    console_bridge/include
    ${console_bridge_BINARY_DIR})

if (NOT WIN32)
  set(LZ4_LIBRARIES lz4)
endif()

target_link_libraries(ros_stub PUBLIC
    ${BZIP2_LIBRARIES}
    ${LZ4_LIBRARIES}
    console_bridge
    ${Boost_LIBRARIES})