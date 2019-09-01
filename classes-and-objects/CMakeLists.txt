cmake_minimum_required(VERSION 3.14)
project(classes_and_objects)

set(CMAKE_CXX_STANDARD 17)

add_executable(classes_and_objects main.cpp header-files/Person.h Person.cpp header-files/Tweeter.h Tweeter.cpp header-files/status.h header-files/BankAccount.h BankAccount.cpp)