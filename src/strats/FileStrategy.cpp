//
// Created by anthony on 28-08-2025.
//

#include <strats/FileStrategy.hpp>

#include <Logger.hpp>

namespace audit::strats {
    FileStrategy::FileStrategy() {
        log_file = std::ofstream(Logger::get_formatted_datetime("%F") + ".log", std::ios::app);
    }

    void FileStrategy::log(const std::string message) {
        log_file << Logger::get_formatted_datetime() << " - " << message << std::endl;
    }
} // audit::strats
