//
// Created by anthony on 27-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP

#include <string>

#include "strats/LogStrategy.hpp"

namespace audit {

    class Logger {
    public:
        ~Logger() = default;

        void log(std::string message);

        static Logger *get_instance();

        static std::string get_formatted_datetime();

    private:
        Logger();

        strats::LogStrategy *strategy;

        static Logger *instance;
    };

} // audit


#endif //LOGGERTESTING_CPP_LOGGER_HPP
