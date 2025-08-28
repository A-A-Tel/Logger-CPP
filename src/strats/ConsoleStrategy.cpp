//
// Created by anthony on 28-08-2025.
//

#include "ConsoleStrategy.hpp"
#include "../Logger.hpp"


void audit::strats::ConsoleStrategy::log(const std::string message) {
    std::cout << Logger::get_formatted_datetime() << " - " << message << std::endl;
}
