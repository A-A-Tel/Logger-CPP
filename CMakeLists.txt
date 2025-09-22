cmake_minimum_required(VERSION 4.0)
project(LoggerTesting_CPP)

include_directories(
        includes/
)
set(CMAKE_CXX_STANDARD 20)

add_executable(main src/main.cpp
        src/Logger.cpp
        includes/Logger.hpp
        includes/strats/LogStrategy.hpp
        src/strats/ConsoleStrategy.cpp
        includes/strats/ConsoleStrategy.hpp
        src/strats/FileStrategy.cpp
        includes/strats/FileStrategy.hpp
        src/strats/ErrorStrategy.cpp
        includes/strats/ErrorStrategy.hpp
)


