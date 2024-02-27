# k8s-Liteon-ngKore_E
Containerized ORAN 7.2x split for Liteon-ngKore

## Pre-requisites
- K8s cluster
```
NAMESPACE     NAME                                                    READY   STATUS      RESTARTS   AGE
default       kube-sriov-device-plugin-amd64-qfhzs                    1/1     Running     0          26h
kube-system   cloud-controller-manager-node1                          1/1     Running     0          26h
kube-system   etcd-node1                                              1/1     Running     0          26h
kube-system   helm-install-rke2-canal-6svfn                           0/1     Completed   0          26h
kube-system   helm-install-rke2-coredns-fjncm                         0/1     Completed   0          26h
kube-system   helm-install-rke2-ingress-nginx-d4cwj                   0/1     Completed   0          26h
kube-system   helm-install-rke2-metrics-server-6s6nz                  0/1     Completed   0          26h
kube-system   helm-install-rke2-multus-s792d                          0/1     Completed   0          26h
kube-system   kube-apiserver-node1                                    1/1     Running     0          26h
kube-system   kube-controller-manager-node1                           1/1     Running     0          26h
kube-system   kube-multus-ds-hpjfw                                    1/1     Running     0          26h
kube-system   kube-proxy-node1                                        1/1     Running     0          26h
kube-system   kube-scheduler-node1                                    1/1     Running     0          26h
kube-system   rke2-canal-rcvcr                                        2/2     Running     0          26h
kube-system   rke2-coredns-rke2-coredns-869b5d56d4-9mks8              1/1     Running     0          26h
kube-system   rke2-coredns-rke2-coredns-autoscaler-5b947fbb77-skqsq   1/1     Running     0          26h
kube-system   rke2-ingress-nginx-controller-8rvhg                     1/1     Running     0          26h
kube-system   rke2-metrics-server-6564db4569-dgf7n                    1/1     Running     0          26h
```
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
```
NAME                                       READY   STATUS    RESTARTS   AGE
pod/kube-sriov-device-plugin-amd64-qfhzs   1/1     Running   0          26h

NAME                 TYPE        CLUSTER-IP   EXTERNAL-IP   PORT(S)   AGE
service/kubernetes   ClusterIP   10.42.0.1    <none>        443/TCP   26h

NAME                                            DESIRED   CURRENT   READY   UP-TO-DATE   AVAILABLE   NODE SELECTOR                   AGE
daemonset.apps/kube-sriov-device-plugin-amd64   1         1         1       1            1           beta.kubernetes.io/arch=amd64   26h
```
Node capacity
```
Capacity:
  cpu:                         18
  ephemeral-storage:           958689400Ki
  hugepages-1Gi:               40Gi
  hugepages-2Mi:               0
  intel.com/intel_oran_sriov:  2
  memory:                      395385348Ki
  pods:                        110
Allocatable:
  cpu:                         18
  ephemeral-storage:           932613047589
  hugepages-1Gi:               40Gi
  hugepages-2Mi:               0
  intel.com/intel_oran_sriov:  2
  memory:                      353442308Ki
  pods:                        110
```

### Make a deployment.
```
kubectl apply -f pod.yaml
```

### Run RAN 
```
kubectl exec -it oran-pod -- /bin/bash
```
```
LD_LIBRARY_PATH=.:/usr/local/lib64 ./nr-softmodem -O ../../../targets/PROJECTS/GENERIC-NR-5GC/CONF/gnb.sa.band78.273prb.fhi72.4x4-liteon.conf --sa --reorder-thread-disable 1 --thread-pool 9,10,11,12,13,14,15
```
