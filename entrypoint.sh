#!/bin/bash

export XRAN_LIB_DIR="/home/phy/fhi_lib/lib/build"
export XRAN_DIR="/home/phy/fhi_lib"
export RTE_SDK="/home/dpdk-stable-20.11.7"
export RTE_TARGET="x86_64-native-linuxapp-gcc"
export RTE_INCLUDE="/usr/local/include"

# Execute the command passed to the docker container
exec "$@"

