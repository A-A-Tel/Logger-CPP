//
// Created by anthony on 26-08-2025.
//

#include <iostream>
#include <unistd.h>
#include <chrono>

#include "Logger.hpp"

using namespace std;

void Logger::date_time_test() {

    while (iterations < 1000) {

        const chrono::system_clock::time_point datetime = chrono::system_clock::now();

        const chrono::time_point<chrono::system_clock, chrono::duration<int, ratio<86400> > > date =
                chrono::time_point_cast<chrono::duration<int, ratio<86400> > >(datetime);

        chrono::duration<long, ratio<1, 1000000000>>
                time = datetime - date;

        const chrono::duration<long, ratio<3600> > h = chrono::duration_cast<chrono::hours>(time);
        time -= h;
        const chrono::duration<long, ratio<60> > m = chrono::duration_cast<chrono::minutes>(time);
        time -= m;
        const chrono::duration<long> s = chrono::duration_cast<chrono::seconds>(time);

        int hms = h.count() * 10000 + m.count() * 100 + s.count();

        cout << hms << endl;

        iterations++;
        sleep(1);
    }
}

Logger Logger::instance = Logger();

Logger::Logger() = default;
