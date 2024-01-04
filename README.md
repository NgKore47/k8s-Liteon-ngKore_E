# k8s-Liteon-ngKore_E
Containerized ORAN 7.2x split for Liteon-ngKore

## Pre-requisites
- K8s cluster
![image](https://github.com/Alt-Shivam/k8s-Liteon-ngKore_E/assets/81817735/e265be73-2160-4c43-8446-66e5ab445895)
- Server configured as per [Origin](https://github.com/NgKore47/Liteon-ngKore_E)

### Build a container image
you can make changes to `Dockerfile` as per usecase
```
docker build -t <repo-name>/<image name>:<tag> .
```

### Configure Sriov plugin with configmap
```
cd sriov
```
* Configure vfs as per your system, make sure to change the interface details acc to your setup.
```
setupvf.sh
```
* Edit pci addr in `sriov-device-plugin-config.yaml`
* Apply the config to k8s cluster.
```
kubectl apply -f sriov-device-plugin-config.yaml
```
* Create sriov device plugin deployment.
```
kubectl apply -f sriov-device-plugin.yaml
```
* Sriov is deployed: check
![image](https://github.com/Alt-Shivam/k8s-Liteon-ngKore_E/assets/81817735/b48f10b7-5586-40bb-8387-9a65523c23d4)

### Make a deployment.
```
kubectl apply -f pod.yaml
```
![image](https://github.com/Alt-Shivam/k8s-Liteon-ngKore_E/assets/81817735/5dbe42aa-6056-4dd6-818f-679fe8bffbb4)

### Run RAN 
```
kubectl exec -it oran-pod -- /bin/bash
```
```
LD_LIBRARY_PATH=.:/usr/local/lib64 ./nr-softmodem -O mwc_20899_newfhi_E_3450.conf --sa --reorder-thread-disable 1 --thread-pool 9,10,11,12,13,14,15
```
