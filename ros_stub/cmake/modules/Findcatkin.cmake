# Fake catkin noop functions. Used for building cartographer_ros when USE_ROS_STUB = true.

function(add_message_files arg)
endfunction()

function(add_service_files arg)
endfunction()

function(generate_messages arg)
endfunction()

function(catkin_package)
endfunction()

function(catkin_add_gtest arg)
endfunction()

function(generate_dynamic_reconfigure_options arg)
endfunction()

set(CATKIN_ENABLE_TESTING false)

set(CATKIN_PACKAGE_BIN_DESTINATION ${PROJECT_BINARY_DIR}/bin)
set(CATKIN_PACKAGE_LIB_DESTINATION ${PROJECT_BINARY_DIR}/lib)
set(CATKIN_PACKAGE_SHARE_DESTINATION ${PROJECT_BINARY_DIR}/share)

set(rviz_QT_VERSION 5.7.1)

# this checks if cartographer_SOURCE_DIR is set, and complains if not, indicating that libcartographer has
# not been properly added to the build tree
include(FindPackageHandleStandardArgs)
