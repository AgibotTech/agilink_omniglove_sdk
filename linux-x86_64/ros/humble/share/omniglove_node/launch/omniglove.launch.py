# Copyright 2026 Agibot
# SPDX-License-Identifier: MulanPSL-2.0

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    default_config = PathJoinSubstitution(
        [FindPackageShare('omniglove_node'), 'config', 'default.yaml']
    )
    parameters_file = LaunchConfiguration('parameters_file')

    return LaunchDescription(
        [
            DeclareLaunchArgument(
                'parameters_file',
                default_value=default_config,
                description='Omniglove node parameter YAML file',
            ),
            ComposableNodeContainer(
                name='omniglove_container',
                namespace='',
                package='rclcpp_components',
                executable='component_container_mt',
                output='screen',
                composable_node_descriptions=[
                    ComposableNode(
                        package='omniglove_node',
                        plugin='omniglove_node::OmnigloveNode',
                        name='omniglove_node',
                        parameters=[parameters_file],
                        extra_arguments=[
                            {'use_intra_process_comms': True},
                        ],
                    ),
                ],
            ),
        ]
    )
