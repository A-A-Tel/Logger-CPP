//
// Created by anthony on 27-08-2025.
//

#ifndef LOGGERTESTING_CPP_LOGGER_HPP
#define LOGGERTESTING_CPP_LOGGER_HPP

#include "chrono"

using namespace std;
using namespace chrono;


namespace audit {

    class Logger final {
    public:
        ~Logger() = default;


        static Logger *get_instance();

        static string get_formatted_datetime(time_point<system_clock> tp);

    private:
        Logger() = default;


        static Logger *instance;
    };

}


#endif //LOGGERTESTING_CPP_LOGGER_HPP
