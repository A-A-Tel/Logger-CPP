#include "Logger.hpp"


int main() {
    audit::Logger *logger = audit::Logger::get_instance();

    logger->log("Hello World!");
    logger->log("Hello World!1");
    logger->log("Hello World!2");
    logger->log("Hello World!3");
    logger->log("Hello World!4");

    return 0;
}
