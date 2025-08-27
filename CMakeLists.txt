cmake_minimum_required(VERSION 4.0)
project(LoggerTesting_CPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(LoggerTesting_CPP src/main.cpp
        src/Logger.cpp
        src/Logger.hpp
        src/logging_strategies/ConsoleStrategy.cpp
        src/logging_strategies/ConsoleStrategy.hpp
        src/logging_strategies/LoggingStrategy.hpp
        src/logging_strategies/LoggingStrategy.cpp
        src/libs/date.h
)
