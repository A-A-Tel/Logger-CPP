#include <iostream>

#include "Logger.hpp"


int main() {
    std::cout << audit::Logger::get_formatted_datetime(std::chrono::system_clock().now()) << std::endl;

    return 0;
}
