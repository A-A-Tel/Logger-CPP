//
// Created by anthony on 26-08-2025.
//

#include <iostream>
#include <ctime>
#include <unistd.h>

#include "Logger.hpp"


using namespace std;

void Logger::date_time_test() {

    while (iterations < 10) {
        time_t now = time(nullptr);
        cout << ctime(&now);
        iterations++;
        sleep(1);
    }
}

Logger Logger::instance = Logger();

Logger::Logger() = default;
