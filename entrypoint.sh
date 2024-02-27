#!/bin/bash

export XRAN_LIB_DIR="/phy/fhi_lib/lib/build"
export XRAN_DIR="/phy/fhi_lib"
export RTE_SDK="/dpdk-stable-20.11.7"
export RTE_TARGET="x86_64-native-linuxapp-gcc"
export RTE_INCLUDE="/usr/local/include"
export PKG_CONFIG_PATH=/usr/local/lib64/pkgconfig/

cd /openairinterface5g/cmake_targets/ran_build/build/
# Execute the command passed to the docker container
exec "$@"

