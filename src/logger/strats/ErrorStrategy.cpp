//
// Created by anthony on 28-08-2025.
//

#include <logger/strats/ErrorStrategy.hpp>

namespace logger::strats {
    void ErrorStrategy::log(std::string message) {
        ConsoleStrategy::log(message);
        exit(1);
    }
} // logger::strats
