//
// Created by anthony on 26-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP
#include <chrono>


using namespace std;

class Logger {

public:
    virtual ~Logger();

    void log(string message);

    static Logger *get_instance();

private:
    Logger();

    int iterations;

    static Logger *instance;
};



#endif //LOGGERTESTING_CPP_LOGGER_HPP
