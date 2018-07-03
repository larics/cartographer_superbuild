cmake_minimum_required(VERSION 3.1.0)
project(slam)
set(CMAKE_CXX_STANDARD 14)

# catkin sets this to "on" by default, which causes linking problems
set(BUILD_SHARED_LIBS OFF)

# The ros_stub library is a ROS replacement which enables building ROS stuff
# on systems without ROS, even on Windows. It includes headers for commonly used
# ROS messages and support for writing/reading ros bags. We build cartographer_ros
# against ros_stub. (You can also build it against real ROS. Then you can subscribe
# to topics published by the SLAM node.)
option(USE_ROS_STUB "Use ROS stub." TRUE)

if(USE_ROS_STUB)
  add_subdirectory(ros_stub)
  # Use the fake Catkin module in this directory.
  list(INSERT CMAKE_MODULE_PATH 0 "${PROJECT_SOURCE_DIR}/ros_stub/cmake/modules/")
  set(catkin_EXPORTED_TARGETS ros_stub)
  set(catkin_LIBRARIES ros_stub)
endif()

# Cartographer's configuration_file_resolver looks for cartographer's own .lua files in this directory.
# When we're developing, we point it to the ones in the build tree.
set(CARTOGRAPHER_CONFIGURATION_FILES_DIRECTORY "${PROJECT_SOURCE_DIR}/cartographer/configuration_files"
  CACHE PATH ".lua config file directory")

# Build cartographer library
add_subdirectory(cartographer)

# point CMake to the special Findcartographer.cmake module which is run when find_package(cartographer)
# is called; this module just checks if libcartographer is in the build tree at this point
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}/cmake/modules/")

# add catkin packages
add_subdirectory(cartographer_ros/cartographer_ros_msgs)
add_subdirectory(cartographer_ros/cartographer_ros)

if(NOT USE_ROS_STUB)
  # The rviz plugin has to be built as a shared library
  set(BUILD_SHARED_LIBS ON)
  add_subdirectory(cartographer_ros/cartographer_rviz)
endif()