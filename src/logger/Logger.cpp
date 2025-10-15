//
// Created by anthony on 27-08-2025.
//
#include <date/date.h>
#include <date/tz.h>

#include <logger/Logger.hpp>

#include <logger/strats/FileStrategy.hpp>


void logger::Logger::log(const std::string message) {
    strategy->log(message);
}

void logger::Logger::set_strategy(logger::strats::LogStrategy *strategy) {
    this->strategy = strategy;
}

logger::Logger *logger::Logger::get_instance() {
    return logger::Logger::instance;
}

std::string logger::Logger::get_formatted_datetime() {
    return get_formatted_datetime("(%F %X %Z)");
}

std::string logger::Logger::get_formatted_datetime(std::string format) {

    using namespace date;

    return date::format(format, make_zoned(current_zone(), std::chrono::system_clock::now()));
}

logger::Logger::Logger() {
    strategy = new strats::FileStrategy();
}

logger::Logger *logger::Logger::instance = new Logger();
