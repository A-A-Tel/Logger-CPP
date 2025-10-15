cmake_minimum_required(VERSION 4.0)
project(LoggerTesting_CPP)

include_directories(includes/)
set(CMAKE_CXX_STANDARD 20)

add_executable(main src/main.cpp
        src/Logger.cpp
        src/strats/ConsoleStrategy.cpp
        src/strats/FileStrategy.cpp
        src/strats/ErrorStrategy.cpp
)


