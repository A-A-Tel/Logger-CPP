//
// Created by anthony on 26-08-2025.
//

#include <iostream>
#include <format>
#include <string>
#include <unistd.h>

#include "Logger.hpp"
#include "date.h"

void Logger::date_time_test() {

    while (iterations < 1000) {

        const chrono::time_point<chrono::system_clock> datetime = chrono::system_clock::now();

        const int hms = get_clock(datetime);

        if (is_prime(hms)) {

            using namespace date;
            string formatted_date = format("%Y-%m-%dT%H:%M:%S", datetime);

            cout << "A prime number has bee found! - " << hms << " (" << formatted_date << ")" << endl;
        }

        iterations++;
        sleep(1);
    }
}

Logger &Logger::get_instance() {
    return instance;
}

Logger Logger::instance = Logger();

Logger::Logger() {
    iterations = 0;
}

bool Logger::is_prime(const int num) {

    if (num < 0) return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }

    return true;
}

int Logger::get_clock(const chrono::time_point<chrono::system_clock> datetime) {

    const chrono::time_point<chrono::system_clock, chrono::duration<int, ratio<86400> > > date =
            chrono::time_point_cast<chrono::duration<int, ratio<86400> > >(datetime);

    chrono::duration<long, ratio<1, 1000000000>>
            time = datetime - date;

    const chrono::duration<long, ratio<3600> > h = chrono::duration_cast<chrono::hours>(time);
    time -= h;
    const chrono::duration<long, ratio<60> > m = chrono::duration_cast<chrono::minutes>(time);
    time -= m;
    const chrono::duration<long> s = chrono::duration_cast<chrono::seconds>(time);

    const int hms = h.count() * 10000 + m.count() * 100 + s.count();

    return hms;
}

Logger::~Logger() {
    cout << __PRETTY_FUNCTION__ << endl;
}
