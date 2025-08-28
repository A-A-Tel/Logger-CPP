//
// Created by anthony on 27-08-2025.
//
#include <date/date.h>
#include <date/tz.h>

#include "Logger.hpp"

#include "strats/ConsoleStrategy.hpp"
#include "strats/FileStrategy.hpp"


void audit::Logger::log(const std::string message) {
    strategy->log(message);
}

void audit::Logger::set_strategy(audit::strats::LogStrategy *strategy) {
    this->strategy = strategy;
}

audit::Logger *audit::Logger::get_instance() {
    return instance;
}

std::string audit::Logger::get_formatted_datetime() {
    return get_formatted_datetime("(%F %X %Z)");
}

std::string audit::Logger::get_formatted_datetime(std::string format) {

    using namespace date;

    return date::format(format, make_zoned(current_zone(), std::chrono::system_clock::now()));
}

audit::Logger::Logger() {
    strategy = new strats::FileStrategy();
}

audit::Logger *audit::Logger::instance = new audit::Logger();
