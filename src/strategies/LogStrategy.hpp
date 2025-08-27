//
// Created by anthony on 27-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGSTRATEGY_HPP
#define LOGGERTESTING_CPP_LOGSTRATEGY_HPP
#include <chrono>
#include <string>
#include <date/date.h>
#include <date/tz.h>

namespace log_strats {

    class LogStrategy {

    public:
        virtual ~LogStrategy() = default;

        virtual void log(std::string message, std::chrono::time_point<std::chrono::system_clock> time) = 0;

    protected:
        std::string format_datetime(date::zoned_time<std::chrono::duration<long, std::ratio<1, 1000000000>>>) const;
    };
}

#endif //LOGGERTESTING_CPP_LOGSTRATEGY_HPP