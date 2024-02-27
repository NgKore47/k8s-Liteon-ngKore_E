echo "0" > /sys/class/net/ens2f0/device/sriov_numvfs
echo "2" > /sys/class/net/ens2f0/device/sriov_numvfs
sudo ip link set ens2f0 vf 0 mac 00:11:22:33:44:66 vlan 564 spoofchk off trust on 
sudo ip link set ens2f0 vf 1 mac 00:11:22:33:44:66 vlan 564 spoofchk off trust on
modprobe vfio_pci

dpdk-devbind.py -s
dpdk-devbind.py --bind vfio-pci 0000:8a:02.0 0000:8a:02.1

sudo ifconfig ens2f0 mtu 1500
sudo ethtool -G ens2f0 rx 4096 tx 4096
