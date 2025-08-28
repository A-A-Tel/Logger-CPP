//
// Created by anthony on 28-08-2025.
//

#ifndef LOGGERTESTING_CPP_CONSOLESTRATEGY_HPP
#define LOGGERTESTING_CPP_CONSOLESTRATEGY_HPP
#include "LogStrategy.hpp"

namespace audit::strats {
    class ConsoleStrategy : public LogStrategy {
    public:
        void log(std::string message) override;
    };
} // audit::strats

#endif //LOGGERTESTING_CPP_CONSOLESTRATEGY_HPP
