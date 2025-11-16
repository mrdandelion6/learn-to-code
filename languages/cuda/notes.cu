#include "notes.cuh"
#include <iostream>
#include <random>
#include <vector>
// welcome to my cuda notes. prerequisites: ../c/notes.c and ../c++/notes.cpp

// INTRO & FUNDAMENTALS
int getting_started();
int what_is_cuda();
int simple_example();
int what_are_drivers();
int gpu_drivers();
int cuda_driver_vs_runtime();
int host_device_paradigm();
int cuda_programming_model();
int gpu_architecture_overview();
int cuda_toolkit_components();
int compute_capability();
int nvcc_compiler();

// GPU HARDWARE ARCHITECTURE
int streaming_multiprocessors();
int cuda_cores_vs_tensor_cores();
int warp_architecture();
int memory_hierarchy();
int l1_l2_cache_behavior();
int register_file_organization();
int branch_prediction_units();
int instruction_pipelines();
int occupancy_calculator();
int hardware_scheduling();
int concurrent_kernels();
int hyper_q();
int mps_multi_process_service();
int gpu_direct();
int nvlink_architecture();

// MEMORY TYPES & MANAGEMENT
int global_memory();
int shared_memory();
int constant_memory();
int texture_memory();
int register_memory();
int local_memory();
int unified_memory();
int zero_copy_memory();
int pinned_memory();
int memory_coalescing();
int memory_banking();
int memory_alignment();
int memory_padding();
int memory_pools();
int cudaMallocManaged();
int cudaMallocAsync();
int memory_advise_system();
int peer_to_peer_memory();
int memory_prefetching();

// KERNEL PROGRAMMING
int kernel_functions();
int device_functions();
int thread_hierarchy();
int grid_block_thread_indexing();
int thread_divergence();
int warp_synchronous_programming();
int cooperative_groups();
int dynamic_parallelism();
int kernel_launch_parameters();
int kernel_occupancy_optimization();
int register_pressure();
int shared_memory_bank_conflicts();
int warp_shuffle_operations();
int ballot_functions();
int reduction_primitives();
int scan_operations();
int atomic_operations();
int memory_fence_operations();
int gemm();

// SYNCHRONIZATION & COMMUNICATION
int syncthreads();
int syncwarp();
int intra_warp_communication();
int inter_warp_communication();
int cooperative_groups_sync();
int grid_synchronization();
int inter_block_communication();
int atomic_compare_and_swap();
int memory_ordering();
int volatile_qualifier();
int cuda_events();
int cuda_streams();
int stream_priorities();
int stream_callbacks();
int multi_gpu_synchronization();

// PERFORMANCE OPTIMIZATION
int occupancy_optimization();
int memory_throughput_optimization();
int instruction_throughput_optimization();
int latency_hiding();
int register_spilling();
int shared_memory_optimization();
int constant_memory_optimization();
int texture_memory_optimization();
int loop_unrolling();
int instruction_level_parallelism();
int memory_access_patterns();
int stride_patterns();
int cache_blocking();
int tiling_strategies();
int software_pipelining();
int double_buffering();
int prefetching_strategies();

// CUDA LIBRARIES
int cublas();
int cufft();
int curand();
int cusparse();
int cusolver();
int cudnn();
int nccl();
int thrust_library();
int cub_library();
int nvgraph();
int nvjpeg();
int npp_image_processing();
int tensorrt();
int cutlass();

// COMPILATION & LINKING
int nvcc_compilation_phases();
int ptx_intermediate_representation();
int cubin_binary_format();
int fatbinary_format();
int separate_compilation();
int device_link_time_optimization();
int relocatable_device_code();
int nvcc_compiler_flags();
int ptxas_assembler();
int compute_capability_targeting();
int cross_compilation();
int cuda_library_linking();

// DEBUGGING & PROFILING
int cuda_gdb();
int cuda_memcheck();
int nsight_compute();
int nsight_systems();
int nvprof_legacy();
int nvtx_markers();
int occupancy_profiling();
int memory_profiling();
int instruction_profiling();
int warp_efficiency_analysis();
int register_usage_analysis();
int shared_memory_usage_analysis();
int divergence_analysis();
int memory_transaction_analysis();
int kernel_replay();
int performance_metrics();
int roofline_analysis();

// ADVANCED MEMORY PATTERNS
int structure_of_arrays_vs_array_of_structures();
int memory_interleaving();
int memory_striping();
int numa_awareness();
int memory_compression();
int virtual_memory_management();
int memory_oversubscription();
int demand_paging();
int memory_migration();
int heterogeneous_memory();
int high_bandwidth_memory();
int memory_fabric();

// MULTI-GPU PROGRAMMING
int multi_gpu_strategies();
int peer_to_peer_transfers();
int gpu_direct_rdma();
int nvlink_programming();
int multi_gpu_memory_management();
int load_balancing_across_gpus();
int gpu_topology_awareness();
int multi_gpu_synchronization();
int collective_operations();
int gpu_clusters();

// CUDA STREAMS & CONCURRENCY
int stream_based_programming();
int stream_dependencies();
int stream_callbacks();
int stream_priorities();
int concurrent_kernel_execution();
int overlap_computation_communication();
int asynchronous_memory_transfers();
int stream_synchronization();
int event_based_synchronization();
int pipeline_parallelism();
int task_parallelism();
int work_stealing();

// NUMERICAL COMPUTING PATTERNS
int reduction_algorithms();
int scan_prefix_sum();
int histogram_computation();
int sorting_algorithms();
int matrix_multiplication_optimization();
int convolution_algorithms();
int fft_implementations();
int sparse_matrix_operations();
int iterative_solvers();
int monte_carlo_methods();
int random_number_generation();
int numerical_precision();
int mixed_precision_computing();

// ERROR HANDLING & ROBUSTNESS
int cuda_error_codes();
int error_checking_macros();
int cuda_last_error();
int cuda_peak_at_last_error();
int exception_handling_in_cuda();
int recovery_strategies();
int fault_tolerance();
int ecc_memory();
int resilient_computing();
int checkpoint_restart();

// INTEROPERABILITY
int cuda_opengl_interop();
int cuda_directx_interop();
int cuda_opencl_interop();
int cuda_mpi_integration();
int cuda_openmp_integration();
int python_cuda_integration();
int julia_cuda_integration();
int fortran_cuda_integration();
int java_cuda_integration();

// TEMPLATE METAPROGRAMMING IN CUDA
int device_template_functions();
int template_kernel_specialization();
int sfinae_in_cuda();
int constexpr_device_functions();
int cuda_template_libraries();
int type_traits_for_cuda();
int policy_based_cuda_design();
int expression_templates_for_gpu();

// EMERGING FEATURES & TECHNOLOGIES
int tensor_cores_programming();
int mixed_precision_training();
int graph_capture_and_launch();
int cuda_graphs();
int memory_pool_allocators();
int stream_ordered_allocators();
int cooperative_kernel_launch();
int persistent_kernels();
int cuda_runtime_compilation();
int nvrtc_runtime_compilation();
int jit_compilation();
int dynamic_kernel_generation();

// DOMAIN-SPECIFIC OPTIMIZATIONS
int deep_learning_optimization();
int hpc_workload_optimization();
int financial_computing_patterns();
int image_processing_optimization();
int signal_processing_optimization();
int graph_algorithms_on_gpu();
int database_operations_on_gpu();
int crypto_acceleration();
int scientific_simulation_patterns();

// SYSTEM-LEVEL INTEGRATION
int cuda_containers();
int kubernetes_gpu_scheduling();
int slurm_gpu_scheduling();
int mig_multi_instance_gpu();
int virtualization_passthrough();
int cloud_gpu_instances();
int gpu_monitoring();
int power_management();
int thermal_management();
int gpu_health_monitoring();

// ADVANCED DEBUGGING TECHNIQUES
int warp_level_debugging();
int memory_race_detection();
int deadlock_detection();
int performance_regression_analysis();
int kernel_divergence_debugging();
int memory_leak_detection();
int synchronization_bug_detection();
int numerical_stability_analysis();
int reproducibility_debugging();

int main() {
    // RUN
    gemm();
    return 0;
}

int getting_started() {
    // in order to compile and run these notes , you need an NVIDIA GPU and CUDA
    // properly installed on your machine. you can find some guides in setup/
    return 0;
}

int what_is_cuda() {
    // CUDA can refer to two things:
    //   1. a parallel computing platform for NVIDIA GPUs. this includes the
    //      drivers , runtime libraries , dev tools , and so on
    //
    //   2. a language extension to C++. the specific syntax additions that
    //      let you write GPU code
    //
    // usually people refer to CUDA as the whole platform / ecosystem , but
    // sometimes it is referred to as a "programming language"--though it's
    // much more than that.
    //
    // so when you write some "CUDA code" , you are essentialy writing C++ with
    // special syntax that can be compiled by a special compiler (nvcc) into a
    // binary.
    //
    // what's special about this binary is that unlike a regular gcc compiled
    // binary , this one contains both:
    //   - regular x86/ARM CPU code (host code)
    //   - GPU bytecode/machine code (device code) that can run on GPU cores
    //
    // the CUDA runtime handles launching the GPU code , managing memory
    // between CPU and GPU , and coordinating execution. regular gcc binaries
    // can talk to the GPU driver but can't execute code on the GPU itself.
    //
    // we will talk about what exactly GPU bytecode is later on in these notes.
    // before anything else , let's look at a simple example of a CUDA kernel.
    return 0;
}

// this kernel is explained in simple_example()
__global__ void vector_addition(int *a, int *b, int *c) {
    size_t idx = threadIdx.x;
    c[idx] = a[idx] + b[idx];
}
// pretty small right ? this small guy is the code that will run on our gpu.

int simple_example() {
    // without really explaining too much of the syntax , we will just look at
    // quick and simple example of a CUDA kernel--a user written function of
    // code that will run on the GPU. you can see the example above. the kernel
    // is the function starting with __global__

    // suppose we want to do vector addition [a_1, a_2, a_3] + [b_1, b_2, b_3].
    // on a GPU , we can parallelize this by letting each thread handle one
    // entry's sum. so thread i sums a[i] + b[i] and records it in c[i].

    // we do an example with 64 entries. hopefully this motivates you as to why
    // gpu programming is very powerful. each entry's will be calculated will be
    // calculated in parallel instead of sequentially.
    size_t n = 64;

    // host buffers
    std::vector<int> h_a = random_vector<int>(n, 0, 100);
    std::vector<int> h_b = random_vector<int>(n, 0, 100);
    std::vector<int> h_c(n);

    // device buffers
    int *d_a;
    int *d_b;
    int *d_c;

    // allocate device memory
    cudaMalloc(&d_a, n * sizeof(int));
    cudaMalloc(&d_b, n * sizeof(int));
    cudaMalloc(&d_c, n * sizeof(int));

    // copy host buffers to device buffers--these are our "inputs"
    cudaMemcpy(d_a, h_a.data(), n * sizeof(int), cudaMemcpyHostToDevice);
    cudaMemcpy(d_b, h_b.data(), n * sizeof(int), cudaMemcpyHostToDevice);

    // launch the gpu kernel
    std::cout << "launching kernel..." << std::endl;
    vector_addition<<<1, n>>>(d_a, d_b, d_c);

    // check for kernel launch errors
    cudaError_t err = cudaGetLastError();
    if (err != cudaSuccess) {
        std::cout << "Kernel launch error: " << cudaGetErrorString(err)
            << std::endl;
    }

    // wait for kernel to finish
    cudaDeviceSynchronize();

    // check for kernel execution errors
    err = cudaGetLastError();
    if (err != cudaSuccess) {
        std::cout << "Kernel execution error: " << cudaGetErrorString(err)
            << std::endl;
    }

    // copy the result from device buffer back to host buffer
    cudaMemcpy(h_c.data(), d_c, n * sizeof(int), cudaMemcpyDeviceToHost);

    // free device memory
    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);

    // take a look at the results
    std::cout << vector_head(h_a) << " + " << vector_head(h_b) << " = "
        << vector_head(h_c) << std::endl;

    // as you may have noticed , we needed to do lots of things in this current
    // funciton as well. in fact , for this particular example , we had much
    // more lines in this function then in the actual kernel vector_addition().
    // this host code vs device code is the fundamental structure of gpu
    // programming in cuda. we will learn more about this soon.

    // anyhow , i showed lots of things that i did not explain in depth. we will
    // go over everything but first , we learn about drivers.
    return 0;
}

int what_are_drivers() {
    // a driver is software that acts as a translator between operating systems
    // and a hardware device.
    //
    // the OS and user programs are higher levels of abstraction on top of
    // hardware. the hardware speaks in specic low-level instructions ,
    //  - specific voltage signals
    //  - register writes
    //  - DMA operations
    //
    // the driver's job is to map the OS' requests to actual hardware operations.
    //
    // so a driver is a the piece of software that allows the OS to use a
    // specific of hardware , without requiring the OS to know its internal
    // details.

    // this is where drivers fit into the OS architecture:
    /*
    +-------------------------+
    | User Space Applications |
    +-------------------------+
    |     OS System Calls     |
    +-------------------------+
    | Kernel (device drivers) |
    +-------------------------+
    |     Hardware Devices    |
    +-------------------------+
    */
    // a little rehash of operating systems (see my OS notes for more info):
    //  - user space: programs like chrome , blender , or your game
    //  - kernel space: trusted code that manages hardware access like drivers
    //  - hardware: your GPU , SSD , network card , etc.
    //
    // the OS kernel cannot directly support every hardware. that would not be
    // a pracitcal design. instead the OS provides a driver interface with APIs
    // and protocols. hardware vendors , like AMD and NVIDIA , write drivers
    // that conform to this interface , so the OS can talk to the device safely
    // and efficiently.
    //
    // broadly speaking , there are 3 kinds of drivers
    //  1. user-mode drivers (UMD):
    //      there run in user space. this is more safe and portable when direct
    //      hardware access isn't crucial. eg) some printer drivers , USB
    //      peripherals
    //  2. kernel-mode drivers (KMD):
    //      these run in privileged mode and can access hardware directly. some
    //      eg) disk drivers , GPU drivers , network interface drivers
    //  3. virtual drivers:
    //      don't control real hardware , but simulate or translate to something
    //      else. eg) virtual network adapters (VPNs) , emulated GPUs in VMs
    //
    //  drivers are all mostly written in C. we write drivers in C because C
    //  allows for simple direct hardware access. we can't use C++ features
    //  like exceptions , dynamic memory allocation , or most of the standard
    //  lib in kernel space--and this is where drivers often run.
    //
    //  in kernel space , we don't have exceptions: if an exception is thrown ,
    //  it crashes the entire system. we do not have dynamic allocators like
    //  malloc() either , and instead have to use special allocators like
    //  kmalloc(). C makes it very obvious when you're doing something that might
    //  not work in kernel space.
    //
    //  we won't actually talk about kernel driver programming though. instead we
    //  now focus on gpu drivers.
    return 0;
}

int gpu_drivers() {
    // a GPU driver is one of the most complex and performance critical drivers
    // in a system. it's responsible for managing:
    //  - VRAM (gpu's memory)
    //  - commands queues (instructions sent to the gpu)
    //  - context switching between gpu tasks
    //  - shader compilation and optimization
    //  - synchronization between cpu and gpu
    //  - exposing high level graphics API like DirectX to applications
    //
    //  so when installing drivers for AMD , NVIDIA , or Intel , you don't just
    //  install one C binary. it's actually a stack of components tha span user
    //  space and kernel space.

    //  GPU driver stack on linux:
    /*
    +--------------------------------------------+
    | game / app (e.g., Blender, TensorFlow)     |
    +--------------------------------------------+
    | graphics API (OpenGL, Vulkan, CUDA, etc.)  |
    +--------------------------------------------+
    | user-space Driver (libGL.so, libcuda.so)   |
    +--------------------------------------------+
    | kernel-space driver (nvidia.ko, amdgpu.ko) |
    +--------------------------------------------+
    | gpu hardware                               |
    +--------------------------------------------+
    */
    // windows has a similar conceptual structure but we take a look at linux
    // first.

    // USER SPACE DRIVER
    //
    // translates high level API calls into GPU commands. also handles shader
    // compilation , memory managemnt at the logical level , and pipeline setup.
    //
    // for example , a kernel launch in CUDA like myKernel<<grid, block>>(data)
    // would be handled by the CUDA runtime (user space driver). this driver
    // would:
    //  1. translate the kernel into PTX code (intermediate GPU assembly)
    //  2. complie the PTX code into SASS (GPU machine code)
    //  3. build a command buffer telling the GPU:
    //      - which kernel to run
    //      - how many threads / blocks to launch
    //      - where input / output memory lives
    //  4. pass that buffer to the kernel space driver.
    //      - note that this buffer is a list of instructions separate from the
    //        actual PTX / SASS code

    // KERNEL SPACE DRIVER
    //
    // talks directly to the hardware registers via PCIe (peripherical component
    // interconnect express)--a high speed serial bus that connect the GPU to the
    // motherboard and CPU.
    //
    // this driver handles:
    //  1. GPU memory allocation
    //  2. command submission queues
    //  3. context switcing between apps
    //  4. power management
    //  5. interrrupt handling (GPU signals completion or errors)

    // here is a full example. let's say a game needs to render a new frame:
    //  1. game requests gpu memory -> user-space driver asks kernel driver to
    //     allocate vram.
    //
    //  2. game issues draw commands -> user-space driver builds gpu command
    //     buffers.
    //
    //  3. user-space driver submits command buffers -> kernel driver writes
    //     them into a ring buffer.
    //
    //  4. kernel driver signals gpu -> gpu executes instructions.
    //
    //  5. gpu finishes -> triggers interrupt -> kernel driver updates status
    //     -> user-space notified.
    return 0;
}

int cuda_driver_vs_runtime() {
    // the CUDA runtime is a runtime library (recall these from C++ notes). the
    // CUDA runtime is known as `libcudart` , standing for library-cuda-runtime.
    // on windows this is a .dll file and on linux this is a .so file.
    //
    // when you write any code in CUDA , for example a kernel launch , you are
    // using the CUDA runtime API.
    return 0;
}

int intra_warp_communication() {
    // intra-warp communication is about threads communicating within the same
    // warp. intra means "within" itself.
    return 0;
}

__global__ void gemm_1(int *A, int *B, int *C, size_t m, size_t q, size_t n) {
    int idx = threadIdx.x;
    C[idx] = 0;

    // we want to get the dot product , so we need to know the column and row
    // that we are at. note that idx = i * cols + j.
    int i = idx / n;
    int j = idx % n;

    for (int k = 0; k < q; ++k) {
        C[idx] += A[i * q + k] * B[k * n + j];
    }
}

int gemm() {
    // in this section , we will go through different implementations of general
    // matrix multiplication (gemm) , starting with naive implementations ,
    // slowly building our way up.

    // we start by making the host buffers. all the matrices are flattened here.
    // matrices are usually flattened in programs becuase of memory contiguity.
    // better contiguity means better cache locality.

    // small matrices. A in M(4, 2) , B in M(2, 3).
    std::vector<int> h_As = random_vector(4 * 2, 0, 10);
    std::vector<int> h_Bs = random_vector(2 * 3, 0, 10);
    std::vector<int> h_Cs(12); // result is 4 * 3 = 12

    // big matrices. A in M(8000, 6000) , B in M(6000, 7000).
    std::cout << "generating big matrices..." << std::endl;
    std::vector<int> h_Ab = random_vector(8000 * 6000, 0, 10);
    std::vector<int> h_Bb = random_vector(6000 * 7000, 0, 10);
    std::vector<int> h_Cb(8000 * 7000);
    std::cout << "done" << std::endl;

    // we are going to have some small matrices to just check our results , and
    // big matrices to measure performance.

    // device buffers
    int *d_As;
    int *d_Bs;
    int *d_Cs;
    int *d_Ab;
    int *d_Bb;
    int *d_Cb;

    // allocate device buffers
    cudaMalloc(&d_As, 4 * 2 * sizeof(int));
    cudaMalloc(&d_Bs, 2 * 3 * sizeof(int));
    cudaMalloc(&d_Cs, 4 * 3 * sizeof(int));
    cudaMalloc(&d_Ab, 8000 * 6000 * sizeof(int));
    cudaMalloc(&d_Bb, 6000 * 7000 * sizeof(int));
    cudaMalloc(&d_Cb, 8000 * 7000 * sizeof(int));

    // copy data to device buffers
    cudaMemcpy(d_As, h_As.data(), 4 * 2 * sizeof(int), cudaMemcpyHostToDevice);
    cudaMemcpy(d_Bs, h_Bs.data(), 2 * 3 * sizeof(int), cudaMemcpyHostToDevice);
    cudaMemcpy(d_Ab, h_Ab.data(), 8000 * 6000 * sizeof(int),
               cudaMemcpyHostToDevice);
    cudaMemcpy(d_Bb, h_Bb.data(), 6000 * 7000 * sizeof(int),
               cudaMemcpyHostToDevice);

    // now let's run our first naive gemm: gemm1. this gemm will have only one
    // block of dimensions 1 x sizeof(C).

    // small test
    gemm_1<<<1, h_Cs.size()>>>(d_As, d_Bs, d_Cs, 4, 2, 3);
    cudaMemcpy(h_Cs.data(), d_Cs, 4 * 3 * sizeof(int), cudaMemcpyDeviceToHost);

    // take a look at our small matrices
    std::cout << "A = " << print_matrix(h_As, 4, 2) << std::endl;
    std::cout << "B = " << print_matrix(h_Bs, 2, 3) << std::endl;
    std::cout << "A * B = " << print_matrix(h_Cs, 4, 3) << std::endl;

    // free device memory
    cudaFree(d_As);
    cudaFree(d_Bs);
    cudaFree(d_Cs);
    cudaFree(d_Ab);
    cudaFree(d_Bb);
    cudaFree(d_Cb);

    return 0;
}
