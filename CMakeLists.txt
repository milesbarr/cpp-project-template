cmake_minimum_required(VERSION 3.25.1)
project(example)

# Source
include_directories(src)
add_subdirectory(src)

# Tests
enable_testing()
add_subdirectory(third_party/googletest)
add_subdirectory(test)

# Benchmarks
set(BENCHMARK_ENABLE_GTEST_TESTS OFF CACHE BOOL "" FORCE)
set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "" FORCE)
set(BENCHMARK_ENABLE_INSTALL OFF CACHE BOOL "" FORCE)
add_subdirectory(third_party/benchmark)
add_subdirectory(benchmarks)
