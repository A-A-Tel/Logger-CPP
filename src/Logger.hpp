//
// Created by anthony on 26-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP

#include <string>

class Logger {

public:
    void date_time_test();

private:
    std::string format_date_from_millis(unsigned long long millis);
};



#endif //LOGGERTESTING_CPP_LOGGER_HPP