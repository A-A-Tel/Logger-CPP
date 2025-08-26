cmake_minimum_required(VERSION 4.0)
project(LoggerTesting_CPP)

set(CMAKE_CXX_STANDARD 26)

add_executable(LoggerTesting_CPP src/main.cpp
        src/Logger.cpp
        src/Logger.hpp)

add_custom_target(Makefile all)
