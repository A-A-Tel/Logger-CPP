//
// Created by anthony on 27-08-2025.
//

#include "LogStrategy.hpp"

std::string log_strats::LogStrategy::format_datetime(date::zoned_time<std::chrono::duration<long, std::ratio<1, 1000000000>>> zoned_time) {
    return date::format("%y-%m-%dT%H:%M:%S", zoned_time);
}
