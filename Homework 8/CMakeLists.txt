cmake_minimum_required(VERSION 3.10)
project(cplusplus8)

set(CMAKE_CXX_STANDARD 11)

add_executable(cplusplus8 main.cpp Unit.h Unit.cpp TemplatedCompare.hpp isSameObject.hpp Man.h Man.cpp Pig.cpp Pig.h Bear.cpp Bear.h ManBearPig.cpp ManBearPig.h Animal.cpp Animal.h)