file(GLOB SRCS *.h *.cpp)
add_executable(${CMAKE_PROJECT_NAME}_test ${SRCS})
target_compile_features(${CMAKE_PROJECT_NAME}_test PRIVATE cxx_std_20)
target_compile_options(${CMAKE_PROJECT_NAME}_test PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>
)
target_link_libraries(${CMAKE_PROJECT_NAME}_test PRIVATE gtest_main ${CMAKE_PROJECT_NAME}_lib gtest gmock)
include(GoogleTest)
gtest_discover_tests(${CMAKE_PROJECT_NAME}_test)
