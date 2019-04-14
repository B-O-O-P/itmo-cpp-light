cmake_minimum_required(VERSION 3.10)
project(cplusplus7)

set(CMAKE_CXX_STANDARD 11)

add_executable(cplusplus7 main.cpp Array.hpp Array.h BadClass.cpp BadClass.h)