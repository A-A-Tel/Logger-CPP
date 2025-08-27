//
// Created by anthony on 26-08-2025.
//

#include <iostream>
#include <format>
#include <string>
#include <unistd.h>

#include "Logger.hpp"
#include "libs/date.h"


Logger *Logger::get_instance() {
    return instance;
}

Logger *Logger::instance = new Logger();

Logger::Logger() {
    iterations = 0;
}

Logger::~Logger() {
    cout << __PRETTY_FUNCTION__ << endl;
}

void Logger::log(string message) {
    cout << message << endl;
}
