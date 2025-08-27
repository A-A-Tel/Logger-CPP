cmake_minimum_required(VERSION 4.0)
project(LoggerTesting_CPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(LoggerTesting_CPP src/main.cpp
        src/Logger.cpp
        src/Logger.hpp
        src/strategies/LogStrategy.cpp
        src/strategies/LogStrategy.hpp
        src/strategies/ConsoleStrategy.cpp
        src/strategies/ConsoleStrategy.hpp
)
