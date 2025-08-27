//
// Created by anthony on 27-08-2025.
//

#include "Logger.hpp"

using namespace log;

Logger *Logger::get_instance() {
    return instance;
}

Logger *Logger::instance = new Logger();