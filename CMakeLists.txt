cmake_minimum_required(VERSION 3.7.1)
project(algorithm_study)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES robe/c01_52.cpp library.h aIV/question001.cpp)
add_library(algorithm_study ${SOURCE_FILES} )
add_executable(Algorithm ${SOURCE_FILES})