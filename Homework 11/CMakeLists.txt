cmake_minimum_required(VERSION 3.10)
project(cplusplus11)

set(CMAKE_CXX_STANDARD 11)

add_executable(cplusplus11 main.cpp BadFromString.cpp BadFromString.h fromString.hpp)