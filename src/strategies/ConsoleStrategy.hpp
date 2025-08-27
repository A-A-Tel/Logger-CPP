//
// Created by anthony on 27-08-2025.
//

#ifndef LOGGERTESTING_CPP_CONSOLESTRATEGY_HPP
#define LOGGERTESTING_CPP_CONSOLESTRATEGY_HPP
#include "LogStrategy.hpp"

namespace log_strats {
    class ConsoleStrategy : public LogStrategy {

        public:
            void log(std::string message, std::chrono::time_point<std::chrono::system_clock>) override;
    };
} // log_strats

#endif //LOGGERTESTING_CPP_CONSOLESTRATEGY_HPP