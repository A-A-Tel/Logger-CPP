//
// Created by anthony on 28-08-2025.
//

#include "ErrorStrategy.hpp"

namespace audit::strats {
    void ErrorStrategy::log(std::string message) {
        ConsoleStrategy::log(message);
        exit(1);
    }
} // audit::strats
