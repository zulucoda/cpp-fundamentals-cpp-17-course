cmake_minimum_required(VERSION 3.14)
project(cpp_functions)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_functions main.cpp header-files/utility.h utility.cpp)