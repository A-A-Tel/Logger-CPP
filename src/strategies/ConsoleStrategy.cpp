//
// Created by anthony on 27-08-2025.
//

#include <iostream>

#include "ConsoleStrategy.hpp"

namespace log_strats {
    void ConsoleStrategy::log(std::string message, std::chrono::time_point<std::chrono::system_clock> time) {
        std::cout << format_datetime(time) <<  " - " << message;
    }
} // log_strats