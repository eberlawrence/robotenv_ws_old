## *********************************************************
##
## File autogenerated for the phoxi_camera package
## by the dynamic_reconfigure package.
## Please do not edit.
##
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'name': 'Default', 'type': '', 'state': True, 'cstate': 'true', 'id': 0, 'parent': 0, 'parameters': [{'name': 'resolution', 'type': 'int', 'default': 1, 'level': 2, 'description': 'A size parameter which is edited via an enum', 'min': 0, 'max': 1, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': 'Low', 'type': 'int', 'value': 0, 'srcline': 11, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'Low resolution (2064x1544)', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'High', 'type': 'int', 'value': 1, 'srcline': 12, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'High resolution Low(1032x772)', 'ctype': 'int', 'cconsttype': 'const int'}], 'enum_description': 'Resolution'}", 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'scan_multiplier', 'type': 'int', 'default': 1, 'level': 4, 'description': 'Scan multiplier', 'min': 1, 'max': 50, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'shutter_multiplier', 'type': 'int', 'default': 1, 'level': 8, 'description': 'Shutter multiplier', 'min': 1, 'max': 20, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'trigger_mode', 'type': 'int', 'default': 1, 'level': 16, 'description': 'Trigger_mode.', 'min': 0, 'max': 1, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': 'Freerun', 'type': 'int', 'value': 0, 'srcline': 18, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'Freerun.', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Software', 'type': 'int', 'value': 1, 'srcline': 19, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'Software trigger.', 'ctype': 'int', 'cconsttype': 'const int'}], 'enum_description': 'Trigger enum'}", 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'start_acquisition', 'type': 'bool', 'default': True, 'level': 16, 'description': 'Start acquisition', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'timeout', 'type': 'int', 'default': -3, 'level': 32, 'description': 'A size parameter which is edited via an enum', 'min': -3, 'max': 0, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': 'ZeroTimeout', 'type': 'int', 'value': 0, 'srcline': 28, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'ZeroTimeout', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Infinity', 'type': 'int', 'value': -1, 'srcline': 29, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'Infinity', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'LastStored', 'type': 'int', 'value': -2, 'srcline': 30, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'LastStored', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'Default', 'type': 'int', 'value': -3, 'srcline': 31, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'Default timeout 10s', 'ctype': 'int', 'cconsttype': 'const int'}], 'enum_description': 'An enum to set size'}", 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'confidence', 'type': 'double', 'default': 3.0, 'level': 64, 'description': 'A double parameter', 'min': 0.0, 'max': 10.0, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'double', 'cconsttype': 'const double'}, {'name': 'send_point_cloud', 'type': 'bool', 'default': True, 'level': 128, 'description': 'Send point cloud.', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'send_normal_map', 'type': 'bool', 'default': True, 'level': 256, 'description': 'Send normal map.', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'send_confidence_map', 'type': 'bool', 'default': True, 'level': 512, 'description': 'Send confidence map', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'send_texture', 'type': 'bool', 'default': True, 'level': 1024, 'description': 'Send texture', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'send_depth_map', 'type': 'bool', 'default': True, 'level': 2048, 'description': 'Send depth map', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'coordinate_space', 'type': 'int', 'default': 1, 'level': 4096, 'description': 'Coordinate space which is edited via an enum. Only for PhoXi Control 1.2 and higher.', 'min': 1, 'max': 5, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': 'CameraSpace', 'type': 'int', 'value': 1, 'srcline': 44, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'CameraSpace', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'MountingSpace', 'type': 'int', 'value': 2, 'srcline': 45, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'MountingSpace', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'MarkerSpace', 'type': 'int', 'value': 3, 'srcline': 46, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'MarkerSpace', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'RobotSpace', 'type': 'int', 'value': 4, 'srcline': 47, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'RobotSpace', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'CustomSpace', 'type': 'int', 'value': 5, 'srcline': 48, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': 'CustomSpace', 'ctype': 'int', 'cconsttype': 'const int'}], 'enum_description': 'An enum to set size'}", 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'organized_cloud', 'type': 'bool', 'default': True, 'level': 8192, 'description': 'Send organized cloud (if true).', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'ambient_light_suppression', 'type': 'bool', 'default': False, 'level': 16384, 'description': 'Ambient Light Suppression. Only for PhoXi Control 1.2 and higher.', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}, {'name': 'single_pattern_exposure', 'type': 'int', 'default': 2, 'level': 32768, 'description': 'Single Pattern Exposure. Only for PhoXi Control 1.2 and higher.', 'min': 0, 'max': 11, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': "{'enum': [{'name': '10_240', 'type': 'int', 'value': 0, 'srcline': 55, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '10_240', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '14_336', 'type': 'int', 'value': 1, 'srcline': 56, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '14_336', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '20_480', 'type': 'int', 'value': 2, 'srcline': 57, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '20_480', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '24_576', 'type': 'int', 'value': 3, 'srcline': 58, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '24_576', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '30_720', 'type': 'int', 'value': 4, 'srcline': 59, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '30_720', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '34_816', 'type': 'int', 'value': 5, 'srcline': 60, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '34_816', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '40_960', 'type': 'int', 'value': 6, 'srcline': 61, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '40_960', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '49_152', 'type': 'int', 'value': 7, 'srcline': 62, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '49_152', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '75_776', 'type': 'int', 'value': 8, 'srcline': 63, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '75_776', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '79_872', 'type': 'int', 'value': 9, 'srcline': 64, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '79_872', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '90_112', 'type': 'int', 'value': 10, 'srcline': 65, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '90_112', 'ctype': 'int', 'cconsttype': 'const int'}, {'name': '100_352', 'type': 'int', 'value': 11, 'srcline': 66, 'srcfile': '/home/user/Projects/ROS_WORKSPACES/robotenv_ws/src/phoxi_camera/cfg/phoxi_camera.cfg', 'description': '100_352', 'ctype': 'int', 'cconsttype': 'const int'}], 'enum_description': 'The time for projection of one pattern'}", 'ctype': 'int', 'cconsttype': 'const int'}, {'name': 'camera_only_mode', 'type': 'bool', 'default': False, 'level': 65536, 'description': 'With this mode you can use the scanner internal camera to capture only 2D images of the scene. Only for PhoXi Control 1.2 and higher.', 'min': False, 'max': True, 'srcline': 291, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'edit_method': '', 'ctype': 'bool', 'cconsttype': 'const bool'}], 'groups': [], 'srcline': 246, 'srcfile': '/opt/ros/noetic/lib/python3/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'class': 'DEFAULT', 'parentclass': '', 'parentname': 'Default', 'field': 'default', 'upper': 'DEFAULT', 'lower': 'groups'}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

phoxi_camera_Low = 0
phoxi_camera_High = 1
phoxi_camera_Freerun = 0
phoxi_camera_Software = 1
phoxi_camera_ZeroTimeout = 0
phoxi_camera_Infinity = -1
phoxi_camera_LastStored = -2
phoxi_camera_Default = -3
phoxi_camera_CameraSpace = 1
phoxi_camera_MountingSpace = 2
phoxi_camera_MarkerSpace = 3
phoxi_camera_RobotSpace = 4
phoxi_camera_CustomSpace = 5
phoxi_camera_10_240 = 0
phoxi_camera_14_336 = 1
phoxi_camera_20_480 = 2
phoxi_camera_24_576 = 3
phoxi_camera_30_720 = 4
phoxi_camera_34_816 = 5
phoxi_camera_40_960 = 6
phoxi_camera_49_152 = 7
phoxi_camera_75_776 = 8
phoxi_camera_79_872 = 9
phoxi_camera_90_112 = 10
phoxi_camera_100_352 = 11
