//
// Created by chrisn on 7/7/19.
//

#include "Logger.h"
#include "spdlog/include/spdlog/common.h"

Logger Logger::instance;

void Logger::logError(std::string mesg) {
   spdlog::error("Some error message with arg: {}", 1);
}
