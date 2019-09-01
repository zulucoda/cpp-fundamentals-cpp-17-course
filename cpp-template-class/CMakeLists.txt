cmake_minimum_required(VERSION 3.14)
project(cpp_template_class)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_template_class main.cpp header-files/Person.h Person.cpp header-files/Accum.h)