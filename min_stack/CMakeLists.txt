cmake_minimum_required(VERSION 3.14)
project(min_stack)

set(CMAKE_CXX_STANDARD 14)

include_directories(include solution)

add_library(min_stack solution/min_stack.cc)

add_subdirectory(tests)