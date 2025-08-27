#include "Logger.hpp"

int main() {
    Logger logger = Logger::get_instance();

    logger.date_time_test();

    return 0;
}