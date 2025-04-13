#pragma once

#include "logging/logging.hpp"

#define LOG_PRIVATE(level, expr)                                          \
  do {                                                                  \
    if (wheels::LevelAccepted(level)) {                                 \
      wheels::LogMessage(WHEELS_HERE, wheels::StringBuilder() << expr); \
    }                                                                   \
  } while (false)

#define TEST_LOG(expr) LOG_PRIVATE(wheels::LogLevel::Debug, expr)
