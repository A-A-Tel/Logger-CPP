cmake_minimum_required(VERSION 4.0)
project(LoggerTesting_CPP)

include_directories(inc/)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out/bin)

add_executable(main src/main.cpp
        src/logger/Logger.cpp
        src/logger/strats/ConsoleStrategy.cpp
        src/logger/strats/FileStrategy.cpp
        src/logger/strats/ErrorStrategy.cpp
)
add_library(logger
        src/logger/Logger.cpp
        src/logger/strats/ConsoleStrategy.cpp
        src/logger/strats/FileStrategy.cpp
        src/logger/strats/ErrorStrategy.cpp
)

find_package(date REQUIRED)

target_link_libraries(main PRIVATE date-tz)

