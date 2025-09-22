#include <Logger.hpp>
#include <strats/ConsoleStrategy.hpp>
#include "strats/ErrorStrategy.hpp"

void log(audit::Logger *logger) {
    for (int i = 0; i < 10; i++) {
        logger->log(std::to_string(i));
    }
}

int main() {

    audit::Logger *logger = audit::Logger::get_instance();

    log(logger);
    logger->set_strategy(new audit::strats::ConsoleStrategy());
    log(logger);
    logger->set_strategy(new audit::strats::ErrorStrategy());
    logger->log("sad times this is.");


    return 0;
}
