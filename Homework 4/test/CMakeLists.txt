include_directories( ../lib_rational)

add_executable(simple_test justTest.cpp)

add_test(NAME justTest
        COMMAND simple_test)

target_link_libraries(simple_test lib_rational)
