cmake_minimum_required(VERSION 3.10)

project(cplusplus4)

set(CMAKE_CXX_STANDARD 11)

set(BINARY_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${BINARY_DIR}/lib")

enable_testing()

add_subdirectory(lib_rational)
add_subdirectory(rational_poly)
add_subdirectory(test)