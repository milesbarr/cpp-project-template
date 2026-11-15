file(GLOB_RECURSE SRCS CONFIGURE_DEPENDS *.h *.cpp)
add_executable(${CMAKE_PROJECT_NAME}_benchmark ${SRCS})
target_compile_features(${CMAKE_PROJECT_NAME}_benchmark PRIVATE cxx_std_20)
target_compile_options(${CMAKE_PROJECT_NAME}_benchmark PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>
)
target_link_libraries(${CMAKE_PROJECT_NAME}_benchmark PRIVATE
  benchmark::benchmark benchmark::benchmark_main
)
