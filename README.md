# cartographer_superbuild

This repository contains a CMake project which builds the Google Cartographer library and the ROS node in a single project, which facilitates easier debugging in an IDE such as CLion or KDevelop.

#### Usage

First, clone this repository:
`git clone https://github.com/ojura/cartographer_superbuild`

Next, clone the Cartographer library and the ROS nodes into the super-build directory:
```
cd cartographer_superbuild
git clone https://github.com/ojura/cartographer
git clone https://github.com/ojura/cartographer_ros
```

Be sure to source the ROS Kinetic environment for your shell (e.g. `source /opt/ros/kinetic/setup.bash`), especially when using an IDE.

#### Building with CMake
From here, you can follow the classic build pattern for a CMake build: `mkdir build`, `cd build`, `cmake ../`, `make -j8`. The catkin workspace can be sourced from `build/devel/setup.bash` if you wish to use `rosrun` or `roslaunch`.

#### Using an IDE
Alternatively, you can open the project in an IDE such as CLion (the ROS environment has to be sourced in the shell from which the IDE has been launched). After starting the IDE, open the `cartographer_superbuild` folder as a project. Be sure to change the CMake build type to `RelWithDebInfo` (in CLion: File -> Settings -> Build, Execution, Deployment -> CMake -> Configuration).

To debug the ROS node from the IDE, first setup the necessary command-line parameters and topic remappings: in CLion, open Run -> Edit Configurations -> `cartographer_node`, verify that `Target` and `Executable` are set to `cartographer_node`, and the Configuration to `RelWithDebInfo`. The parameters and remappings may be entered under "Program arguments" (use the button on the right to open a larger editing field).

You can now run a `roscore` master and launch the node using the Debug command in CLion.
