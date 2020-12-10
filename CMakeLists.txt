cmake_minimum_required(VERSION 3.17)
project(Algo1_Lab)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Elab2)
include_directories(Grader)
include_directories(Learn)
include_directories(mid63)


add_executable(breadth-first-search Learn/breadth-first-search.cpp)