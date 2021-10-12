#!/bin/bash
export LD_LIBRARY_PATH=/opt/qt513/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=/opt/qt513/plugins:$LD_LIBRARY_PATH
source /opt/ros/eloquent/setup.bash
source /home/sizen/crs_ws_fanuc/install/setup.bash
ros2 launch crs_application fanuc.launch.xml
