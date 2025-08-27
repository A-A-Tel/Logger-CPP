//
// Created by anthony on 26-08-2025.
//

#include <iostream>
#include <format>
#include <string>

#include "Logger.hpp"
#include "strategies/ConsoleStrategy.hpp"


Logger *Logger::get_instance() {
    return instance;
}

Logger *Logger::instance = new Logger();

Logger::Logger() {
    strategy = new log_strats::ConsoleStrategy();
}

date::zoned_time<std::chrono::duration<long, std::ratio<1, 1000000000>>> Logger::get_time() const {

    return date::make_zoned(date::current_zone(), std::chrono::system_clock::now());
}

Logger::~Logger() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Logger::log(std::string message) {
    std::cout << message << std::endl;
}
