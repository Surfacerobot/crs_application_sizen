import os
import sys
import subprocess
from pathlib import Path
import shutil
from ament_index_python.packages import get_package_share_directory, get_package_prefix

import launch
import launch_ros.actions
from launch.actions import OpaqueFunction
from launch import some_substitutions_type
from rosidl_generator_cpp import default_value_from_type

GAZEBO_HEADLESS = True

def launch_setup(context, *args, **kwargs):
    
    if not "tesseract_collision" in os.environ["AMENT_PREFIX_PATH"]:
        # workaround for pluginlib ClassLoader bug: manually add tesseract_collision to the AMENT_PREFIX_PATH env variable
        head, tail = os.path.split(get_package_prefix('fanuc_r2000ic_support'))
        path = os.path.join(head, 'tesseract_collision')
        os.environ["AMENT_PREFIX_PATH"] += os.pathsep + path  
    
    
    # parsing arguments    
    xacro = launch.substitutions.LaunchConfiguration('xacro').perform(context)
    srdf = launch.substitutions.LaunchConfiguration('srdf').perform(context)
    motion_planning_cfg = launch.substitutions.LaunchConfiguration('motion_planning_cfg').perform(context)
    gzworld = launch.substitutions.LaunchConfiguration('gazebo_world').perform(context)
    urdf_preview_path = launch.substitutions.LaunchConfiguration('urdf_preview_path').perform(context)
    
    urdf = os.path.join(get_package_share_directory('fanuc_r2000ic_support'), 'urdf', 'r2000ic165f.urdf')
    print(urdf)
    # create urdfs from xacro file
    cmd2 = 'xacro %s prefix:=preview/ > %s'%(xacro, urdf_preview_path)
    cmd3 = 'xacro %s > %s'%(xacro, urdf)        
    cmd4 = 'killall -9 gzserver & killall -9 gzclient & killall -9 gazebo'
    cmd_dict = {cmd2 : True, cmd3: True, cmd4 : False}
    
    # check if soft link exists
    gazebo_model_path = os.path.join(os.environ['HOME'],'.gazebo', 'models', 'fanuc_r2000ic_support')
    crs_model_path = get_package_share_directory('fanuc_r2000ic_support')
    cmd1 = 'ln -s %s %s'%(crs_model_path, gazebo_model_path)
    if not os.path.exists(gazebo_model_path):
        cmd_dict[cmd1] = True        
    
    for cmd, req_ in cmd_dict.items():   
        try:       
            print('Running cmd: %s' % (cmd))    
            process = subprocess.run(cmd , shell=True, check=True, stdout=subprocess.PIPE, universal_newlines=True)       
        
        except subprocess.CalledProcessError as e:
            print(e.output)
            if req_:
                return None       
    
    gazebo_cmd = 'gzserver' if GAZEBO_HEADLESS else 'gazebo'
    gzserver = launch.actions.ExecuteProcess(
        cmd=['xterm', '-e', gazebo_cmd, '--verbose', '-s', 'libgazebo_ros_factory.so', '--world', gzworld],
        output='screen',   
        condition = launch.conditions.IfCondition(launch.substitutions.LaunchConfiguration('sim_robot'))
    )
    
    spawner1 = launch_ros.actions.Node(
        node_name='spawn_node',
        #node_namespace = [launch.substitutions.LaunchConfiguration('global_ns')],
        package='gazebo_ros',
        node_executable='spawn_entity.py',
        arguments=['-entity', 'robot', '-x', '0', '-y', '0', '-z', '0', '-file', urdf],
        condition = launch.conditions.IfCondition(launch.substitutions.LaunchConfiguration('sim_robot'))
        )

    motion_planning_server = launch_ros.actions.Node(
        node_executable='crs_motion_planning_motion_planning_server',
        package='crs_motion_planning',
        node_name='motion_planning_server',
        #node_namespace = [launch.substitutions.LaunchConfiguration('global_ns')],
#        prefix= 'xterm -e',
        output='screen',
        parameters=[{
        'motion_planning_config': motion_planning_cfg,
        'urdf_path': urdf,
        'srdf_path': srdf,
        'process_planner_service': "plan_process_motion",
        'freespace_motion_service': "plan_freespace_motion",
        'trajectory_topic': "set_trajectory_test",
        'base_link_frame': "base_link",
        'world_frame': "world",
        'tool0_frame': "tool0",
        'manipulator_group': "manipulator",
        'num_steps': 20,
        'max_joint_velocity': 0.22,
        'max_joint_acceleration': 0.7,
#        'max_joint_velocity': 1.5,
#        'max_joint_acceleration': 3.0,
        'min_raster_length': 4,
        'use_gazebo_simulation_time': False,
        'set_trajopt_verbose': False}])
    
    '''  
    Example of how to push a ros namespace 
    group_action = GroupAction([
        PushRosNamespace('my_ns'),
        IncludeLaunchDescription(PythonLaunchDescriptionSource('another_launch_file'),
                                 ])
        ])
    '''

    test_process_planner = launch_ros.actions.Node(
        node_executable='crs_motion_planning_process_planner_test',
        package='crs_motion_planning',
        node_name='process_planner_test',
        output='screen',
        parameters=[{'urdf_path': urdf,
        'srdf_path': srdf,
        'process_planner_service': "plan_process_motion",
        'freespace_motion_service': "plan_freespace_motion",
        'trajectory_topic': "set_trajectory_test",
        'base_link_frame': "base_link",
        'world_frame': "world",
        'tool0_frame': "tool0",
        'manipulator_group': "manipulator",
        'num_steps': 20,
        'max_joint_velocity': 0.22,
        'max_joint_acceleration': 0.7,
        'min_raster_length': 4,
        'use_gazebo_simulation_time': False,
        'set_trajopt_verbose': False}])

    ur_comms_node = launch_ros.actions.Node(
        node_executable='crs_robot_comms_ur_comms',
        package='crs_robot_comms',
        node_name='ur_comms_node',
        output='screen',
        condition = launch.conditions.UnlessCondition(launch.substitutions.LaunchConfiguration('sim_robot')))

    ur_comms_node_sim = launch_ros.actions.Node(
        node_executable='crs_robot_comms_ur_comms_sim',
        package='crs_robot_comms',
        node_name='ur_comms_sim_node',
        output='screen',
        condition = launch.conditions.IfCondition(launch.substitutions.LaunchConfiguration('sim_robot')))
    
    
    return [
        # environment
        launch_ros.actions.Node(
             node_name = ['env_node'],
             #node_namespace = [launch.substitutions.LaunchConfiguration('global_ns')],
             package='tesseract_monitoring',
             node_executable='tesseract_monitoring_environment_node',
             output='screen',
             parameters=[{'use_sim_time': launch.substitutions.LaunchConfiguration('sim_robot'),
             'desc_param': 'robot_description',
             'robot_description': urdf,
             'robot_description_semantic': srdf}]),
        
        # gazebo
        gzserver,
        spawner1,

        # planning
        motion_planning_server,

#        xiao peng 2021-3-15 not start ur robot
        # robot nodes
        ur_comms_node,
        ur_comms_node_sim,
        ]
    

def generate_launch_description():
        
    return launch.LaunchDescription([
        # arguments
        #launch.actions.DeclareLaunchArgument('global_ns', default_value = ['crs']),
        launch.actions.DeclareLaunchArgument('sim_robot',default_value = ['True']),
        launch.actions.DeclareLaunchArgument('gazebo_gui',default_value = ['False']),
        launch.actions.DeclareLaunchArgument('xacro',
            default_value = [os.path.join(get_package_share_directory('fanuc_r2000ic_support'), 'urdf', 'r2000ic165f.xacro')]),
        launch.actions.DeclareLaunchArgument('srdf',
            default_value = [os.path.join(get_package_share_directory('fanuc_r2000ic_support'), 'urdf', 'fanuc_r2000ic165f.srdf')]),
        launch.actions.DeclareLaunchArgument('motion_planning_cfg',
            default_value = [os.path.join(get_package_share_directory('crs_application'), 'config/motion_planning','fanuc_MP_config.yaml')]),
        launch.actions.DeclareLaunchArgument('gazebo_world',
            default_value = [os.path.join(get_package_share_directory('crs_support'), 'worlds', 'crs.world')]),
        launch.actions.DeclareLaunchArgument('urdf_preview_path', 
             default_value = [os.path.join(get_package_share_directory('fanuc_r2000ic_support'), 'urdf', 'r2000ic165f.urdf')],
             description = 'The path where the launch file will generate the urdf for preview purposes'),
        OpaqueFunction(function = launch_setup)
        ])
