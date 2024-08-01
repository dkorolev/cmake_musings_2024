cmake_minimum_required(VERSION 3.14.1)

project(lib_a C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib_shared)

add_library(lib_a src/lib_a.cc)
target_link_libraries(lib_a lib_shared)

target_include_directories(lib_a PUBLIC ${PROJECT_SOURCE_DIR}/src)
