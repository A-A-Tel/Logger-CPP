#include "Logger.hpp"
#include "strats/ConsoleStrategy.hpp"

void log(audit::Logger *logger) {
    for (int i = 0; i < 10; i++) {
        logger->log(std::to_string(i));
    }
}

int main() {
    return 0;
}
