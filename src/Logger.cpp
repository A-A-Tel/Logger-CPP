//
// Created by anthony on 26-08-2025.
//

#include <iostream>
#include <chrono>

#include "Logger.hpp"
#include "date.h"

using namespace std;

void Logger::date_time_test() {

    using namespace date;

    cout << chrono::system_clock::now() << '\n';

}
