# CUDA in Arch

here is how to setup CUDA on arch linux for programming.

## drivers

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

## CUDA toolkit

if the above works , your nvidia drivers are good to go and you can install the CUDA toolkit , also called the cuda SDK.

this part depends on your gpu's compute capability (CC)--a decimal of the form X.Y. to see what CC you have , enter the following

```sh
nvidia-smi --query-gpu=name,compute_cap --format=csv

# output example:
# name, compute_cap
# NVIDIA GeForce GTX 1080 Ti, 6.1
```

in the example above , the CC is 6.1. you need a cuda toolkit version that supports your CC. to see what versions of cuda support your CC , check this page: https://en.wikipedia.org/wiki/CUDA. scroll down to "GPUs supported" and see the table. for instance , my CC is 6.1 and i need toolkit 12.9.1.

here is how to install the toolkit.

```bash
# for latest toolkit
sudo pacman -S cuda

# OR for a specic toolkit
sudo pacman -S cuda-12.9.1
# replace 12.9.1 with your needed version

# add our cuda installation to path
echo 'export PATH=/opt/cuda/bin:$PATH' >> ~/.bashrc

# update path to dynamic runtime libraries
echo 'export LD_LIBRARY_PATH=/opt/cuda/lib64:$LD_LIBRARY_PATH' >> ~/.bashrc

source ~/.bashrc
```

## gcc

in addition to the toolkit , you need a version of gcc compatible with your toolkit. this depends on your cpu architecture. to see what version of gcc you need , see this page: https://stackoverflow.com/questions/6622454/cuda-incompatible-with-gcc-version. the top comment has a neat table.

for example , since i installed cuda 12.9.1 , i would install gcc14

```bash
# for latest gcc
sudo pacman -S gcc

# OR for specific gcc
sudo pacman -S gcc14
## replace 14 with your needed version
```

## testing

test if everything's good. start by testing this simple compilation.

```bash
nvcc --version

# test a quick program
echo 'int main(){return 0;}' > test.cu && nvcc test.cu && echo "CUDA compilation works!" && rm test.cu a.out
```

if the above works , it still isn't enough to know whether we can launch actual kernel code. you should now test compiling and running actual kernel code.

in `notes.cu` , call `simple_example()` in `main()`. so it should look like this

```cpp
int main() {
    // RUN
    simple_example();
    return 0;
}
```

now compile and run the code for your specific compute and gcc.

```bash
# add a neat alias to your .bashrc
alias nv='nvcc -ccbin g++-14 -arch=sm_61 -Wno-deprecated-gpu-targets'
# for a different compute , change the 61 in -arch=sm_61
# for a difference g++ , change the 14

source ~/.bashrc
nv
```

you don't have to add an alias but i recommend it so you don't have to specify the g++ and compute each time.

if the g++ version in your path is the same one you want to use for nvcc , you don't need to pass the `-ccbin g++-14` flag.

the `-Wno-deprecated-gpu-targets` flag is for suppressing deprecation warnings for compute capabilities that are deprecated , like 6.1 :(

## end

if you're struggling , idk gpt it. good luck and i hope you have fun learning cuda. it is one of my most enjoyable things to do in programming.
