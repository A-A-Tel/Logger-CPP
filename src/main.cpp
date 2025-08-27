#include "Logger.hpp"

int main() {
    Logger *logger = Logger::get_instance();

    logger->log("Something has happened!");

    return 0;
}