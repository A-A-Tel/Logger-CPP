//
// Created by anthony on 26-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP
#include <chrono>
#include <date/date.h>
#include <date/tz.h>

#include "strategies/LogStrategy.hpp"


class Logger {

public:
    virtual ~Logger();

    void log(std::string message);

    static Logger *get_instance();

private:
    Logger();

    log_strats::LogStrategy *strategy;

    date::zoned_time<std::chrono::duration<long, std::ratio<1, 1000000000>>> get_time() const;

    static Logger *instance;
};



#endif //LOGGERTESTING_CPP_LOGGER_HPP
