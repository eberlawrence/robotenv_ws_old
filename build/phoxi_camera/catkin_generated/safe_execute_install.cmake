execute_process(COMMAND "/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/phoxi_camera/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/user/Projects/ROS_WORKSPACES/robotenv_ws/build/phoxi_camera/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
