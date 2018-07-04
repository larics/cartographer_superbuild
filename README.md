cartographer/ and cartographer_ros/ have not been modified from upstream. If replacing/updating cartographer_ros, it may be necessary to update ros_stub/include/cartographer_ros_msgs from a real ROS build.

Building on a clean Ubuntu 18.04 installation:

```bash
sudo add-apt-repository universe
sudo apt update
sudo apt install git cmake bzip2 libbz2-dev libceres-dev libprotobuf-dev protobuf-compiler libpcl-dev liburdfdom-headers-dev liburdfdom-model liblz4-dev libtinyxml-dev liburdfdom-dev
git clone https://github.com/larics/cartographer_superbuild --branch ros_stub
./cartographer_superbuild/cartographer/scripts/install_debs_cmake.sh 
cd cartographer_superbuild
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make cartographer_offline_node -j8
```
