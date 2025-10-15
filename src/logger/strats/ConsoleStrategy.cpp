//
// Created by anthony on 28-08-2025.
//

#include <logger/strats/ConsoleStrategy.hpp>
#include <logger/Logger.hpp>


void logger::strats::ConsoleStrategy::log(const std::string message) {
    std::cout << Logger::get_formatted_datetime() << " - " << message << std::endl;
}
