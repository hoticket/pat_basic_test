cmake_minimum_required(VERSION 3.5)

project(pat_basic_test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pat_basic_test 1001.cpp)

install(TARGETS pat_basic_test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
