cmake_minimum_required(VERSION 3.14.1)

project(lib_b C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib_shared)

add_library(lib_b src/lib_b.cc)
target_link_libraries(lib_b lib_shared)

target_include_directories(lib_b PUBLIC ${PROJECT_SOURCE_DIR}/src)
