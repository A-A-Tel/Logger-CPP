cmake_minimum_required(VERSION 4.0)
project(LoggerTesting_CPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(LoggerTesting_CPP src/main.cpp
        src/Logger.cpp
        src/Logger.hpp
        src/strats/LogStrategy.hpp
        src/strats/ConsoleStrategy.cpp
        src/strats/ConsoleStrategy.hpp
        src/strats/FileStrategy.cpp
        src/strats/FileStrategy.hpp
)
