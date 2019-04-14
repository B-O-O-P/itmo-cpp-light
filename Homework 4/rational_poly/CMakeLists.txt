project(rational_poly)

set(LIB_NAME "lib_rational")
set(SOURCE "rational_poly.cpp")

add_executable(${PROJECT_NAME} ${SOURCE})

include_directories(../${LIB_NAME})

target_link_libraries(${PROJECT_NAME} ${LIB_NAME})

install(
        TARGETS ${PROJECT_NAME}
        COMPONENT developer
        RUNTIME
        DESTINATION bin)

install(
        DIRECTORY .
            DESTINATION share
        COMPONENT developer
        FILES_MATCHING
            PATTERN "*.cmake")

