# Use a base image with a compatible Linux distribution
FROM ubuntu:22.04

# Avoid prompts from apt
ENV DEBIAN_FRONTEND=noninteractive

# Install necessary packages
RUN apt-get update && apt-get install -y \
    xz-utils \
    net-tools \
    meson \
    wget \
    pkg-config \
    linux-tools-generic \
    libnuma-dev \
    ninja-build \
    && rm -rf /var/lib/apt/lists/*

# Download and install DPDK
RUN wget http://fast.dpdk.org/rel/dpdk-20.11.7.tar.xz \
    && tar xvf dpdk-20.11.7.tar.xz \
    && cd dpdk-stable-20.11.7 \
    && meson build \
    && ninja -C build \
    && ninja install -C build

# Setup environment variables for DPDK
ENV PKG_CONFIG_PATH=/usr/local/lib64/pkgconfig/
ENV RTE_SDK=/dpdk-stable-20.11.7
ENV RTE_TARGET=x86_64-native-linuxapp-gcc


# Copy the Liteon-ngKore_E repository
COPY openairinterface5g /openairinterface5g
COPY phy /phy

# Set additional environment variables for building the PHY
ENV XRAN_DIR=/phy/fhi_lib
ENV XRAN_LIB_DIR=/phy/fhi_lib/lib/build

# Build the XRAN library
RUN cd /phy/fhi_lib/lib/ \
    && make clean \
    && make XRAN_LIB_SO=1

# Build OAI gNB
RUN apt-get update && apt-get install -y libnuma-dev \
    && cd /openairinterface5g/cmake_targets/ \
    && ./build_oai -I \
    && ./build_oai --gNB --ninja -t oran_fhlib_5g --cmake-opt -Dxran_LOCATION=/phy/fhi_lib/lib

# Cleanup the build dependencies and files not needed in the final image
RUN apt-get purge -y --auto-remove wget xz-utils git meson ninja-build \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* 

# Set the final working directory
COPY entrypoint.sh /

ENTRYPOINT ["/entrypoint.sh"]

# Command to run when starting the container
CMD ["bash"]
