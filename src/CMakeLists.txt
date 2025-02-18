file(GLOB SRCS *.h *.cpp)
add_library(${CMAKE_PROJECT_NAME}_lib ${SRCS})
target_compile_features(${CMAKE_PROJECT_NAME}_lib PRIVATE cxx_std_20)
target_compile_options(${CMAKE_PROJECT_NAME}_lib PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>
)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_compile_features(${CMAKE_PROJECT_NAME} PRIVATE cxx_std_20)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${CMAKE_PROJECT_NAME}_lib)
