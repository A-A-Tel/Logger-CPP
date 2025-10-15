#include <../inc/logger/Logger.hpp>
#include <logger/strats/ConsoleStrategy.hpp>
#include <logger/strats/ErrorStrategy.hpp>

void log(logger::Logger *logger) {
    for (int i = 0; i < 10; i++) {
        logger->log(std::to_string(i));
    }
}

int main() {

    logger::Logger *logger = logger::Logger::get_instance();

    log(logger);
    logger->set_strategy(new logger::strats::ConsoleStrategy());
    log(logger);
    logger->set_strategy(new logger::strats::ErrorStrategy());
    logger->log("sad times this is.");


    return 0;
}
