cmake_minimum_required(VERSION 3.6)
project(algorithm_study)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES library.cpp library.h aIV/question001.cpp)
add_library(algorithm_study ${SOURCE_FILES} algorithms/LevelOrderTraversal.cpp BogoToBogo/BinaryTree.cpp)
add_executable(library ${SOURCE_FILES})