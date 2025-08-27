//
// Created by anthony on 26-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP
#include <chrono>

using namespace std;

class Logger {

public:

    void date_time_test();
    virtual ~Logger();

    static Logger& get_instance();

private:
    Logger();

    int iterations;
    static Logger instance;

    bool is_prime(int num);
    int get_clock(std::chrono::time_point<chrono::system_clock> datetime);
};



#endif //LOGGERTESTING_CPP_LOGGER_HPP