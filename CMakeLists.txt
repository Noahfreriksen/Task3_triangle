cmake_minimum_required(VERSION 3.12)
project(triangle)

set(CMAKE_CXX_STANDARD 14)

add_executable(triangle main.cpp lib/Triangle.cpp lib/Triangle.h)

add_subdirectory(./lib/googletest)
add_executable(tests ./tests/main_tests.cpp tests/triangle_tests.cpp)

target_include_directories(tests PUBLIC ./lib/googletest/include)
target_link_libraries(tests gtest gtest_main)