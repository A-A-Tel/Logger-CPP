//
// Created by anthony on 26-08-2025.
//

#include <iostream>
#include <chrono>

#include "Logger.hpp"


using namespace std;

void Logger::date_time_test() {

    unsigned long long millis = chrono::system_clock::now().time_since_epoch().count();

    cout << millis << endl;

}
