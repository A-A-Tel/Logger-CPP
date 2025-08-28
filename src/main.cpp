#include <iostream>

#include "Logger.hpp"


int main() {
    audit::Logger *logger = audit::Logger::get_instance();

    logger->log("Hello World!");

    return 0;
}
