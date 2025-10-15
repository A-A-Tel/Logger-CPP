//
// Created by anthony on 28-08-2025.
//

#include <logger/strats/FileStrategy.hpp>

#include <logger/Logger.hpp>

namespace logger::strats {
    FileStrategy::FileStrategy() {
        log_file = std::ofstream(Logger::get_formatted_datetime("%F") + ".log", std::ios::app);
    }

    void FileStrategy::log(const std::string message) {
        log_file << Logger::get_formatted_datetime() << " - " << message << std::endl;
    }
} // logger::strats
