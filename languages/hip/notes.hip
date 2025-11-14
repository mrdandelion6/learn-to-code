// INTRO & POSITIONING
int what_is_hip();
int cuda_to_hip_philosophy();
int amd_rocm_ecosystem();
int hip_vs_cuda_vs_opencl();
int portability_goals();
int performance_portability();

// SYNTAX & API DIFFERENCES
int hip_vs_cuda_function_mapping();
int hipMalloc_vs_cudaMalloc();
int hipMemcpy_vs_cudaMemcpy();
int hipLaunchKernel_vs_cuda_launch();
int hip_kernel_launch_syntax();
int hip_error_handling_differences();
int hip_event_api_differences();
int hip_stream_api_differences();

// AMD GPU ARCHITECTURE SPECIFICS
int gcn_architecture();
int rdna_architecture();
int cdna_architecture();
int compute_units_vs_streaming_multiprocessors();
int wavefronts_vs_warps();
int wavefront_size_64_vs_32();
int lds_vs_shared_memory();
int scalar_vs_vector_units();
int amd_memory_hierarchy();
int infinity_cache();
int hbm_on_amd();

// HIP COMPILATION MODEL
int hipcc_compiler();
int hcc_vs_nvcc_backends();
int clang_based_compilation();
int hip_fat_binary();
int gfx_architecture_targeting();
int rocm_device_libs();
int comgr_code_object_manager();
int hip_separate_compilation();

// PORTING TOOLS & STRATEGIES
int hipify_tools();
int hipify_perl_vs_hipify_clang();
int automated_cuda_to_hip();
int manual_porting_strategies();
int performance_portable_code();
int conditional_compilation_macros();
int hip_platform_detection();
int unified_codebase_strategies();

// AMD-SPECIFIC OPTIMIZATIONS
int wavefront_occupancy();
int lds_bank_conflicts_amd();
int gcn_instruction_set();
int amd_memory_coalescing_patterns();
int scalar_memory_operations();
int branch_divergence_on_amd();
int amd_atomic_operations();
int wavefront_intrinsics();
int amd_gemm_optimization_strategies(); 

// ROCM ECOSYSTEM TOOLS
int rocm_smi();
int rocm_debugger();
int rocprof_profiler();
int roctracer();
int roctx_markers();
int rocm_bandwidth_test();
int rocm_validation_suite();
int miopen_vs_cudnn();
int rocblas_vs_cublas();
int rocfft_vs_cufft();
int rocsparse_vs_cusparse();
int rocsolver_vs_cusolver();
int rocrand_vs_curand();
int rocthrust_vs_thrust();

// PERFORMANCE DIFFERENCES
int amd_vs_nvidia_memory_bandwidth();
int compute_throughput_differences();
int register_file_differences();
int cache_behavior_differences();
int branch_prediction_differences();
int double_precision_performance();
int tensor_operations_on_amd();
int mixed_precision_on_amd();

// HIP-SPECIFIC FEATURES
int hip_cooperative_groups_differences();
int hip_dynamic_shared_memory();
int hip_peer_access();
int hip_ipc_memory();
int hip_external_memory();
int hip_external_semaphores();
int hip_graph_capture_amd();
int hip_stream_capture();

// MULTI-GPU ON AMD
int amd_multi_gpu_topologies();
int infinity_fabric();
int xgmi_vs_nvlink();
int rocm_multi_gpu_programming();
int peer_to_peer_on_amd();
int amd_gpu_clustering();

// DEBUGGING DIFFERENCES
int rocgdb_vs_cuda_gdb();
int amd_memory_checker();
int wavefront_debugging();
int lds_debugging();
int amd_profiling_metrics();
int gcn_assembly_debugging();

// DEPLOYMENT DIFFERENCES
int rocm_docker_containers();
int amd_driver_installation();
int rocm_version_compatibility();
int amd_gpu_virtualization();
int rocm_kubernetes_operator();
int amd_cloud_instances();

// NUMERICAL LIBRARIES COMPARISON
int miopen_vs_cudnn_api_differences();
int rocblas_gemm_vs_cublas();
int rocfft_planning_differences();
int amd_blas_extensions();
int rocrand_state_differences();
int precision_differences_amd_nvidia();

// INTEROPERABILITY
int hip_openmp_target();
int hip_opencl_interop();
int hip_opengl_interop();
int hip_vulkan_interop();
int kokkos_hip_backend();
int sycl_hip_interop();
int hip_python_bindings();

// ADVANCED HIP FEATURES
int hip_module_api();
int hip_runtime_compilation();
int hip_fatbin_extraction();
int hip_context_management();
int hip_primary_context();
int hip_device_management();
int hip_limit_configuration();

// PERFORMANCE TUNING SPECIFICS
int amd_occupancy_calculation();
int wavefront_scheduling_differences();
int amd_memory_access_patterns();
int gcn_instruction_latencies();
int amd_cache_tuning();
int lds_usage_optimization();
int amd_register_pressure();

// ECOSYSTEM INTEGRATION
int rocm_cmake_integration();
int hip_pkg_config();
int rocm_package_management();
int spack_rocm_packages();
int easybuild_rocm_support();
int module_system_integration();

// MIGRATION CHALLENGES
int cuda_specific_features_without_hip_equivalent();
int performance_regression_analysis();
int numerical_accuracy_differences();
int memory_usage_pattern_changes();
int kernel_launch_overhead_differences();
int compilation_time_differences();
int library_feature_parity_gaps();

// FUTURE DIRECTIONS
int hip_graph_improvements();
int rocm_roadmap_awareness();
int amd_ai_accelerators();
int hip_standard_compliance();
int oneapi_hip_interop();
int hip_portability_initiatives();

int main() {
  // RUN
  return 0;
}
