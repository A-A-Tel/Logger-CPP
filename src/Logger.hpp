//
// Created by anthony on 26-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP

#include <string>

class Logger {

public:
    void date_time_test();


    static void init() {
        if (initialized) return;
        instance = Logger();
        initialized = true;
    }

    static Logger get_instance() {
        return instance;
    }

private:
    Logger();

    // int iterations = 0; // When this is uncommented, the whole thing breaks??
    static Logger instance;

    inline static bool initialized = false;
};



#endif //LOGGERTESTING_CPP_LOGGER_HPP