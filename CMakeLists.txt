cmake_minimum_required(VERSION 3.14.1)

project(toplevel C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib_a)
add_subdirectory(lib_b)

add_executable(example src/example.cc)
target_link_libraries(example lib_a lib_b)
