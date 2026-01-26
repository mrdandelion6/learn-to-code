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
int nvcc_compiler_flags();
int compiler_optimization_levels();
int compiler_optimizations();
int register_allocation_optimization();
int instruction_scheduling_optimization();
int nvcc_compilation_phases();
int ptx_intermediate_representation();
int cubin_binary_format();
int fatbinary_format();
int separate_compilation();
int device_link_time_optimization();
int relocatable_device_code();
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
    //
    // the guides in setup/ show using the following alias:
    //
    //   alias nv='nvcc -ccbin g++-14 -arch=sm_61 -Wno-deprecated-gpu-targets'
    //
    // edit it with the g++ and arch of your corresponding setup. unless any
    // section in my notes specify otherwise , assume this is the command you
    // should use to run stuff.
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
    // the driver's job is to map the OS' requests to actual hardware
    // operations.
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
    //  kmalloc(). C makes it very obvious when you're doing something that
    //  might not work in kernel space.
    //
    //  we won't actually talk about kernel driver programming though. instead
    //  we now focus on gpu drivers.
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
    // interconnect express)--a high speed serial bus that connect the GPU to
    // the motherboard and CPU.
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

int nvcc_compiler_flags() {
    // there are many different nvcc flags. some used for architecture
    // specification , others used for debug info.

    // ARCHITECTURE AND CODE GENERATION
    // -arch: this flag specifies the architecture for the PTX code to generate.
    //        it expects a "virtual architecture" , like compute_XX. "real
    //        architectures" are of the form sm_XX.
    //
    //        e.g) -arch=compute_61
    //
    //        this generates PTX code for the specified architecture. such PTX
    //        code is forward compatible. so a GPU with architecture 70 could
    //        convert it to its own native machine code with JIT compilation and
    //        run that. note that you can only specify one PTX.
    //
    //        if you pass a real architecture to this flag , that ends up being
    //        short hand for using the -code flag. for example ,
    //
    //        -arch=sm_61 (same as) -arch=compute_61 -code=sm_61
    //
    //        note that -arch will always be used in conjunction with -code ,
    //        whether explicitly or implicitly. if no -code is provided like
    //        above but for a virtual flag , the same kind of short hand is
    //        triggered:
    //
    //        -arch=compute_61 (same as) -arch=compute_61 -code=compute_61
    //
    //        pay close attention to the shorthand conversions. the arch flag is
    //        always converted to being a virtual architecture , and the code
    //        flag is whatever that was passed in the arch flag (whether real or
    //        virtual architecture).
    //
    // -code: the code flag specifies what code to actually embed in the
    //        binary. if the code flag specifes a virtual architecture , the
    //        binary will only include PTX code generated for that architecture.
    //        this means it will not be actual machine code , and JIT
    //        compiliation will be used when running the binary. for example ,
    //
    //        -arch=compute_XX -code=compute_XX
    //
    //        now if a real architecture is specified , then only machine code
    //        for the that architecture will be embedded in the binary. this
    //        means that the PTX code generated by the -arch flag will be
    //        discarded. for example ,
    //
    //        -arch=compute_XX -code=sm_XX
    //
    //        note that it is illegal to call the -code flag without the -arch
    //        flag. moreover , you can specify multiple architectures , both
    //        real and virtual , in this flag. for example ,
    //
    //        -arch=compute_61 -code=compute_61,sm_61
    //
    //        this would embed both the machine code and PTX code inside the
    //        binary. then devices like my 1080ti would use the binary code
    //        directly with no JIT overhead , and newer architectures would just
    //        use JIT for compatibility.
    //
    //        you can also have many different real and architectures in one
    //        -code flag ,
    //
    //        -arch=compute_61 -code=compute_61,sm_61,sm_70
    //
    //        this would embed not only the PTX for 61 , but also the machine
    //        code for 61 and 70 which is JIT compiled from the 61 PTX code.
    //
    //        however , note that you cannot do stuff like this:
    //
    //        nvcc -arch=compute_70 -code=sm_61,sm_70 notes.cu
    //
    //        this is because you cannot JIT compile 61 machine code from 70
    //        PTX code. it is not backward comptabile , only forwards.
    //
    //        likewise , you cannt create embed a PTX in the binary that is not
    //        the same as the PTX which the -arch flag specified to make. so the
    //        following would give an error ,
    //
    //        nvcc -arch=compute_61 -code=compute_70 notes.cu
    //
    //        this makes sense because ... how could you get PTX 70 code when we
    //        only generated PTX 61 code ? you cannot translate PTX code between
    //        each other. you can only JIT compile it with forward compatiblity.
    //
    // -gencode: this flag allows you to specify the -arch and -code flags
    //           for many different architectures convniently. an issue we ran
    //           into before was that we could not embed different PTX code
    //           inside our binary. with gencode we can do that ,
    //
    //           -gencode arch=compute_61,code=compute_61 \
    //           -gencode arch=compute_70,code=compute_70
    //
    //           this generates two different PTX and embeds both of them into
    //           the binary. a common pattern is to generate the machine code
    //           for various architectures , and only include the PTX for the
    //           latest of those.
    /**
                 -gencode arch=compute_75,code=sm_75 \    # Turing (RTX 20xx)
                 -gencode arch=compute_80,code=sm_80 \    # Ampere (RTX 30xx)
                 -gencode arch=compute_89,code=sm_89 \    # Ada Lovelace 40xx
                 -gencode arch=compute_90,code=sm_90 \    # Hopper (H100)
                 -gencode arch=compute_90,code=compute_90 # PTX for future
    */
    //           this pattern lets us generate machine code for multiple GPUs
    //           but we only embed PTX 90 for version architectures.

    return 0;
}

int intra_warp_communication() {
    // intra-warp communication is about threads communicating within the same
    // warp. intra means "within" itself.
    return 0;
}

// block(m * n) , grid(1)
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

// block(m, n) , grid(1)
__global__ void gemm_2(int *A, int *B, int *C, size_t q) {
    size_t n = blockDim.x;

    // we no longer need division or modulo , the indices can be inferred from
    // the thread index we are on.
    size_t j = threadIdx.x;
    size_t i = threadIdx.y;
    int idx = i * n + j;

    C[idx] = 0;
    for (int k = 0; k < q; ++k) {
        C[idx] += A[i * q + k] * B[k * n + j];
    }
}

// block(n) , grid(m)
__global__ void gemm_3(int *A, int *B, int *C, size_t q) {
    size_t n = blockDim.x;

    size_t j = threadIdx.x;
    size_t i = blockIdx.y;
    int idx = i * n + j;

    C[idx] = 0;
    for (int k = 0; k < q; ++k) {
        C[idx] += A[i * q + k] * B[k * n + j];
    }
}

// block(n) , grid(m)
__global__ void gemm_3_2(int *A, int *B, int *C, size_t q) {
    size_t n = blockDim.x;
    size_t j = threadIdx.x;

    // the blocks are along the x axis of the grid now , everything else is the
    // exact same
    size_t i = blockIdx.x;
    int idx = i * n + j;

    C[idx] = 0;
    for (int k = 0; k < q; ++k) {
        C[idx] += A[i * q + k] * B[k * n + j];
    }
}

// block(1024) , grid(m)
__global__ void gemm_4(int *A, int *B, int *C, size_t n, size_t q) {
    size_t i = blockIdx.x;

    // calculate the dot product for many indices. stride through the row. this
    // time , threads don't correspond to only one column's entry.
    for (size_t j = threadIdx.x; j < n; j += blockDim.x) {
        C[i * n + j] = 0;
        // compute the dot product
        for (int k = 0; k < q; ++k) {
            C[i * n + j] += A[i * q + k] * B[k * n + j];
        }
    }
}

// block(1024) , grid(m)
__global__ void gemm_5(int *A, int *B, int *C, size_t n, size_t q) {
    size_t i = blockIdx.x;

    for (size_t j = threadIdx.x; j < n; j += blockDim.x) {
        // keep a rolling sum
        int sum = 0;

        for (int k = 0; k < q; ++k) {
            sum += A[i * q + k] * B[k * n + j];
        }

        // just write to global memory once
        C[i * n + j] = sum;
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

    // take a look at our small matrices
    std::cout << "small matrices generated:\n";
    std::cout << "A = " << print_matrix(h_As, 4, 2) << std::endl;
    std::cout << "B = " << print_matrix(h_Bs, 2, 3) << "\n" << std::endl;

    // big matrices. A in M(8000, 6000) , B in M(6000, 7000).
    std::cout << "generating big matrices..." << std::endl;
    std::vector<int> h_Ab = random_vector(8000 * 6000, 0, 10);
    std::vector<int> h_Bb = random_vector(6000 * 7000, 0, 10);
    std::vector<int> h_Cb(8000 * 7000);
    std::cout << "done\n" << std::endl;

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
    cudaMemcpy(d_As, h_As.data(), h_As.size() * sizeof(int),
               cudaMemcpyHostToDevice);
    cudaMemcpy(d_Bs, h_Bs.data(), h_Bs.size() * sizeof(int),
               cudaMemcpyHostToDevice);
    cudaMemcpy(d_Ab, h_Ab.data(), h_Ab.size() * sizeof(int),
               cudaMemcpyHostToDevice);
    cudaMemcpy(d_Bb, h_Bb.data(), h_Bb.size() * sizeof(int),
               cudaMemcpyHostToDevice);

    // ================================= GEMM1 =================================
    // now let's run our first naive gemm: gemm1. this gemm will have only one
    // block of dimensions 1 x sizeof(C).
    //
    // so each thread index (x) corresponds directly to a flattenend index
    // inside the output matrix C.

    // small test
    gemm_1<<<1, h_Cs.size()>>>(d_As, d_Bs, d_Cs, 4, 2, 3);
    cudaMemcpy(h_Cs.data(), d_Cs, h_Cs.size() * sizeof(int),
               cudaMemcpyDeviceToHost);

    // check if we got any errors
    cudaError_t err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("Kernel launch failed: %s\n", cudaGetErrorString(err));
    }
    // we should not get any errors !

    // take a look at our small matrices
    std::cout << "gemm1 results for small matrices: " << std::endl;
    std::cout << "A * B = " << print_matrix(h_Cs, 4, 3) << "\n" << std::endl;

    // as you can see above , this works fine but this implementation has many
    // issues.
    //
    // 1. first of all , a block can only have a limited amount of threads
    //    (usually 1024 but depends on architecture). so we can only compute the
    //    first 1024 elements of our matrix C.
    //
    // 2. second of all , since the only information about the index we have is
    //    the flattenend index , we need to perform division and modulo to get
    //    i and j. we need i and j in order to properly calculated the dot prod
    //    between the i'th row and j'th column for each entry C_ij. this is an
    //    INFORMATION RECOVERY PROBLEM.. we want to go from 1D to 2D. the issue
    //    with this is that division and modulo are very slow operations and
    //    kill GPU performance.

    // let's see what happens when we launch our kernel with the larger matrices
    gemm_1<<<1, h_Cb.size()>>>(d_Ab, d_Bb, d_Cb, 8000, 6000, 7000);

    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm1 kernel launch failed for big matrices: %s\n\n",
               cudaGetErrorString(err));
    }
    // we should get an "invalid configuration argument" because h_Cb.size() is
    // 7000 * 8000 which far exceeds the max threads a block can have.

    // ================================= GEMM2 =================================
    // in the this approach , instead of having only 1 block with a flattenend
    // list of threads , we will have 1 block of (m x n) threads. this will
    // allow us to avoid division and modulo.

    // we test on the small matrices again. let's zero out d_Cs to start clean.
    cudaMemset(d_Cs, 0, h_Cs.size() * sizeof(int));

    // this time we need a dim3 object because we are no longer making a 1D
    // block
    dim3 block_2s(3, 4);
    // our block shape will correspond exactly to our outupt matrix shape. this
    // time , we do not need to pass in m = 4 and n = 3 becuase that info is
    // already captured inside the block shape.
    //
    // blockDim.x should correspond to the number of columns of C , so 4. and
    // blockDim.y should correspond to the number of rows of C , so 3.
    gemm_2<<<1, block_2s>>>(d_As, d_Bs, d_Cs, 2);
    cudaMemcpy(h_Cs.data(), d_Cs, h_Cs.size() * sizeof(int),
               cudaMemcpyDeviceToHost);

    // check for any errors (we shouldn't get any)
    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm2 kernel launch failed for small matrices: %s\n\n",
               cudaGetErrorString(err));
    }

    // check the results
    std::cout << "gemm2 results for small matrices: " << std::endl;
    std::cout << "A * B = " << print_matrix(h_Cs, 4, 3) << "\n" << std::endl;

    // but we are still only using one block! this limits the matrix size we can
    // handle. again , we get an error when trying larger blocks.
    dim3 block_2b(7000, 8000);
    gemm_2<<<1, block_2b>>>(d_Ab, d_Bb, d_Cb, 2);

    // should get an error
    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm2 kernel launch failed for big matrices: %s\n\n",
               cudaGetErrorString(err));
    }

    // reset the device buffers for the next gemms
    cudaMemset(d_Cs, 0, h_Cs.size() * sizeof(int));
    cudaMemset(d_Cb, 0, h_Cb.size() * sizeof(int));

    // ================================= GEMM3 =================================
    // in this gemm , we will move away from just using one block for the entire
    // matrix. what if we used one block for every row of the output matrix ?
    // this would give us much more flexibility with size constraints.

    // our block should be one dimensional , corresponding to the number of cols
    // (n) that we have. similarly our grid is one dimensional.. we would just
    // have a column vector of blocks. the number of blocks we have is just the
    // number of rows (m) of the output matrix.
    dim3 grid_3s(1, 4);
    gemm_3<<<grid_3s, 3>>>(d_As, d_Bs, d_Cs, 2);
    cudaMemcpy(h_Cs.data(), d_Cs, h_Cs.size() * sizeof(int),
               cudaMemcpyDeviceToHost);

    // shouldn't get any errors , but we always check !
    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm3 kernel launch failed for small matrices: %s\n\n",
               cudaGetErrorString(err));
    }

    // check the results
    std::cout << "gemm3 results for small matrices: " << std::endl;
    std::cout << "A * B = " << print_matrix(h_Cs, 4, 3) << "\n" << std::endl;

    // or if we wanted to make it even simpler , we can avoid using a dim3 for
    // the grid. since it's a 1 by 4 , we can just instead have it be a 4 by 1
    // which is just a single dimension. that means we can just use the int 4
    // in the kernel chevrons. instead of having the grid as a column vector of
    // blocks , we can have it as a row vector and everything else would be the
    // same.

    cudaMemset(d_Cs, 0, h_Cs.size() * sizeof(int));

    // pass 4 instead of dim3(1, 4) object
    gemm_3_2<<<4, 3>>>(d_As, d_Bs, d_Cs, 2);
    cudaMemcpy(h_Cs.data(), d_Cs, h_Cs.size() * sizeof(int),
               cudaMemcpyDeviceToHost);

    // of course this has no affect on the actual effiency of the algorithm. it
    // is just a demonstration of different designs we can do.

    // should get no errors
    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm3_2 kernel launch failed for small matrices: %s\n\n",
               cudaGetErrorString(err));
    }

    // check the results
    std::cout << "gemm3_2 results for small matrices: " << std::endl;
    std::cout << "A * B = " << print_matrix(h_Cs, 4, 3) << "\n" << std::endl;

    // reset the device buffers for the next gemms
    cudaMemset(d_Cs, 0, h_Cs.size() * sizeof(int));
    cudaMemset(d_Cb, 0, h_Cb.size() * sizeof(int));

    // ================================= GEMM4 =================================
    // notice that our gemm3 kernels still has the issue of martrix row size
    // being limited by max number of threads in a block
    //
    // we will now deal with the this issue in gemm4. so far we have been
    // assigning threads to elements in a 1 to 1 fashion. but of course this
    // means when the number of elements overtakes the number of max threads
    // allowed in a block , we cannot compute that. to get around this , we
    // assign more work to each of the threads.
    //
    // each thread strides through the row it is on and computes many dot
    // products now. this naive gemm now lets us compute matrix multiplication
    // of any size. note that this means blockDim.x no longer corresponds to the
    // numbers of columns we have. hence we must pass in this information as an
    // additional parameter.

    // let's just take a look at the small matrices first to see if our logic
    // seems to still be correct.
    gemm_4<<<4, 3>>>(d_As, d_Bs, d_Cs, 3, 2);
    cudaMemcpy(h_Cs.data(), d_Cs, h_Cs.size() * sizeof(int),
               cudaMemcpyDeviceToHost);

    // shouldn't get any errors , but we always check !
    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm4 kernel launch failed for small matrices: %s\n\n",
               cudaGetErrorString(err));
    }

    // check the results
    std::cout << "gemm4 results for small matrices: " << std::endl;
    std::cout << "A * B = " << print_matrix(h_Cs, 4, 3) << "\n" << std::endl;

    // now we do a computation for our big matrices. we will use cuda events
    // from now on to time the execution speed of our kernels for big matrices.
    cudaEvent_t start, stop;
    cudaEventCreate(&start);
    cudaEventCreate(&stop);

    cudaEventRecord(start);
    gemm_4<<<8000, 1024>>>(d_Ab, d_Bb, d_Cb, 7000, 6000);
    cudaEventRecord(stop);

    cudaMemcpy(h_Cb.data(), d_Cb, h_Cb.size() * sizeof(int),
               cudaMemcpyDeviceToHost);
    // the max number of threads we can have on a block is usually 1024. that is
    // what it is for my 1080ti anyway. this will spawn 8000 blocks with 1024
    // threads each. then each thread will do about 7000 / 1024 dot products.

    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm4 kernel launch failed for big matrices: %s\n\n",
               cudaGetErrorString(err));
    } // shouldn't get any errors

    // get the time
    float time_ms;
    cudaEventElapsedTime(&time_ms, start, stop);

    // we can check to see that every element of h_Cb was calculated. let's peak
    // at the last element to make sure it's nonzero.
    std::cout << "gemm4 calculation for big matrices finished in " << time_ms
              << " ms" << std::endl;
    std::cout << "h_Cb[" << h_Cb.size() - 1 << "] is: " << h_Cb[h_Cb.size() - 1]
              << "\n"
              << std::endl;

    // reset the device buffers for the next gemms
    cudaMemset(d_Cs, 0, h_Cs.size() * sizeof(int));
    cudaMemset(d_Cb, 0, h_Cb.size() * sizeof(int));

    // ================================= GEMM5 =================================
    // note that our matrices d_Ab , d_Bb , and d_Cb all live in the gpu global
    // memory. so each time we do C[i * n + j] += A[i * q + k] * B[k * n + j] ,
    // we are accessing global memory , and writing to it which is slow. we can
    // instead keep a rolling sum of our dot product that we accumulate by
    // accessing only A[] and B[] , then do one final write. we implement this
    // in gemm5.

    cudaEventRecord(start);
    gemm_5<<<8000, 1024>>>(d_Ab, d_Bb, d_Cb, 7000, 6000);
    cudaEventRecord(stop);

    cudaMemcpy(h_Cb.data(), d_Cb, h_Cb.size() * sizeof(int),
               cudaMemcpyDeviceToHost);
    err = cudaGetLastError();
    if (err != cudaSuccess) {
        printf("gemm5 kernel launch failed for big matrices: %s\n\n",
               cudaGetErrorString(err));
    } // shouldn't get any errors

    cudaEventElapsedTime(&time_ms, start, stop);
    std::cout << "gemm5 calculation for big matrices finished in " << time_ms
              << " ms" << std::endl;
    std::cout << "h_Cb[" << h_Cb.size() - 1 << "] is: " << h_Cb[h_Cb.size() - 1]
              << "\n"
              << std::endl;

    // but what you end up seeing is that the time is pretty much the same ! the
    // reason for this is because of compiler optimizations. in fact our entire
    // code is heavily optimizes by the compiler. to see the affect of gemm5 you
    // can disable compiler optimizations by adding the flags: -O0 -G.
    //
    // note that the calculations will take much longer to run now. for
    // reference , here were my results:
    /**
    gemm4 calculation for big matrices finished in 158563 ms
    h_Cb[55999999] is: 144648

    gemm5 calculation for big matrices finished in 106600 ms
    h_Cb[55999999] is: 144648
    */
    // before adding the -O0 flag , i was getting around 5000 ms on my 1080ti.
    // now gemm4 is 158 seconds , and gemm4 is 106 seconds. but that's still a
    // massive speedup from gemm4 to gemm5 !
    //
    // that being said , compiler optimizations are the practical assumptions ,
    // even for bench marking. so we will not ever really be compiling and
    // testing code with them disabled.

    // free device memory
    cudaFree(d_As);
    cudaFree(d_Bs);
    cudaFree(d_Cs);
    cudaFree(d_Ab);
    cudaFree(d_Bb);
    cudaFree(d_Cb);

    return 0;
}
