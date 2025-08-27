#include <iostream>

#include "Logger.hpp"

int main() {
    Logger::init();

    Logger logger = Logger::get_instance();

    logger.date_time_test();

    return 0;
}