//
// Created by anthony on 27-08-2025.
//
#include <date/date.h>

#include "Logger.hpp"

using namespace audit;

Logger *Logger::get_instance() {
    return instance;
}

Logger *Logger::instance = new Logger();

string Logger::get_formatted_datetime(const time_point<system_clock> tp) {

    using namespace date;
    return date::format("%F %T %Z", tp);
}
