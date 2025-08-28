//
// Created by anthony on 27-08-2025.
//
#include <date/date.h>
#include <date/tz.h>

#include "Logger.hpp"

#include "strats/ConsoleStrategy.hpp"


audit::Logger *audit::Logger::get_instance() {
    return instance;
}

audit::Logger *audit::Logger::instance = new audit::Logger();

void audit::Logger::log(const std::string message) {
    strategy->log(message);
}

std::string audit::Logger::get_formatted_datetime() {

    using namespace date;

    return date::format("(%F %X %Z)", make_zoned(current_zone(), std::chrono::system_clock::now()));
}

audit::Logger::Logger() {
    strategy = new strats::ConsoleStrategy();
}
