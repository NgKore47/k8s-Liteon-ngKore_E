# Use RHEL 8.7 as the base image
FROM registry.access.redhat.com/ubi8/ubi:8.7

# Install gcc11 and Development Tools
RUN yum install gcc-toolset-11 -y && \
    dnf groupinstall "Development Tools" -y && \
    dnf install https://dl.fedoraproject.org/pub/epel/epel-release-latest-8.noarch.rpm -y && \
    yum install -y git cmake lksctp-tools lksctp-tools-devel lksctp-tools-doc openssl-devel && \
    yum install -y libhugetlbfs libstdc++ numactl iproute kmod pciutils libaio libaio-devel numactl-devel net-tools ethtool && \
    yum install -y gtk3 mesa-libgbm at-spi2-core libdrm xdg-utils libxcb libnotify && \
    yum clean all

#
RUN scl enable gcc-toolset-11 bash

# Clone and build Ninja
RUN git clone https://github.com/ninja-build/ninja.git && \
    cd ninja && \
    cmake -Bbuild-cmake && \
    cd build-cmake && \
    make && \
    make install && \
    cp /usr/local/bin/ninja /usr/bin/

# install meson
RUN dnf install python3-requests -y
RUN dnf install python3-pip -y
RUN pip3 install meson  

# Copy DPDK source from host and build it
COPY dpdk-stable-20.11.7 /home/rhel/dpdk-stable-20.11.7/
RUN cd /home/rhel/dpdk-stable-20.11.7 && \
    /usr/local/bin/meson build && \
    ninja -C build && \
    ninja -C build install

# Setting environment variables for DPDK
ENV RTE_SDK=/home/rhel/dpdk-stable-20.11.7 \
    RTE_TARGET=x86_64-native-linuxapp-gcc

# Copy required directories and set work directory
COPY Liteon-ngKore_E/ /home/rhel/Liteon-ngKore_E
COPY phy/ /home/rhel/phy

# install extra deps
WORKDIR /home/rhel/Liteon-ngKore_E/rhel-packages/

RUN dnf install libtool -y
RUN dnf install blas -y
RUN dnf install lapack -y

RUN dnf install -y epel-release
#    dnf install -y guile-devel

RUN dnf localinstall ./gc-7.6.4-3.el8.i686.rpm -y && \
    dnf localinstall ./gc-devel-7.6.4-3.el8.i686.rpm -y && \
    dnf localinstall ./gc-devel-7.6.4-3.el8.x86_64.rpm -y && \
    dnf localinstall ./glibc-2.28-236.el8.7.i686.rpm -y && \
    dnf localinstall ./glibc-gconv-extra-2.28-236.el8.7.i686.rpm -y && \
    dnf localinstall ./libatomic_ops-7.6.2-3.el8.i686.rpm -y && \
    dnf localinstall ./libgcc-8.5.0-20.el8.i686.rpm -y && \
    dnf localinstall ./libstdc++-8.5.0-20.el8.i686.rpm -y

RUN dnf localinstall ./guile-devel-2.0.14-7.el8.x86_64.rpm -y    
RUN dnf localinstall ./gc-devel-7.6.4-3.el8.x86_64.rpm -y
RUN dnf localinstall ./libconfig-devel-1.5-9.el8.x86_64.rpm -y
RUN dnf localinstall ./pkgconf-pkg-config-1.4.2-1.el8.x86_64.rpm -y
RUN dnf localinstall ./blas-devel-3.8.0-8.el8.x86_64.rpm -y
RUN dnf localinstall ./lapack-devel-3.8.0-8.el8.x86_64.rpm -y
RUN dnf localinstall ./ninja-build-1.8.2-1.el8.x86_64.rpm -y

# set default workdir
WORKDIR /home/rhel/Liteon-ngKore_E/cmake_targets/ran_build/build/

# copy and run entrypoint.sh
COPY entrypoint.sh /home/rhel/

ENTRYPOINT ["/home/rhel/entrypoint.sh"]

# Set a default command or entrypoint
CMD ["bash"]
