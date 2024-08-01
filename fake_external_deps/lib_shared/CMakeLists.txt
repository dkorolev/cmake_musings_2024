cmake_minimum_required(VERSION 3.14.1)

project(lib_shared C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(NOT TARGET lib_shared)
  add_library(lib_shared src/lib_shared.cc)
  target_include_directories(lib_shared PUBLIC ${PROJECT_SOURCE_DIR}/src)
endif()
