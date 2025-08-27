//
// Created by anthony on 26-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP

#include <string>

class Logger {

public:
    static void init() {
        if (initialized) return;
        instance = Logger();
        initialized = true;
    }
    static Logger get_instance() {
        return instance;
    }

    void date_time_test();

private:
    static Logger instance;
    inline static bool initialized = false;


    Logger();
};



#endif //LOGGERTESTING_CPP_LOGGER_HPP