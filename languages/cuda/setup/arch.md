# CUDA in Arch

here is how to setup CUDA on arch linux for programming.

```bash
# first make sure to have the latest packages before installing drivers.
sudo pacman -Syu

# you need linux-headers if you don't already have them:
sudo pacman -S linux-headers

# now install drivers. this is the best way to.
sudo pacman -S nvidia-dkms

# you need to restart the machine
sudo reboot
```

after the reboot , test the following command.

```bash
nvidia-smi
```

if the above works , your nvidia drivers are good to go and you can install the CUDA toolkit.

```bash
sudo pacman -S cuda

# add our cuda installation to path
echo 'export PATH=/opt/cuda/bin:$PATH' >> ~/.bashrc

# update path to dynamic runtime libraries
echo 'export LD_LIBRARY_PATH=/opt/cuda/lib64:$LD_LIBRARY_PATH' >> ~/.bashrc

source ~/.bashrc
```

test if everything's good.

```bash
nvcc --version

# test a quick program
echo 'int main(){return 0;}' > test.cu && nvcc test.cu && echo "CUDA compilation works!" && rm test.cu a.out
```
