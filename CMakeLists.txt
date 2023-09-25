cmake_minimum_required(VERSION 3.25)
project(Task1_c_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Task1_c_
        Simplecalc.cpp
        Simplecalc.h main.cpp)
