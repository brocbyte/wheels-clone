#pragma once

#include "logging/logging.hpp"

#define TEST_LOG_PRIVATE(level, expr)                                          \
  do {                                                                  \
    if (::wheels::test::LevelAccepted(level)) {                                 \
      ::wheels::test::LogMessage(WHEELS_HERE, wheels::StringBuilder() << expr); \
    }                                                                   \
  } while (false)

#define TEST_LOG(expr) TEST_LOG_PRIVATE(::wheels::test::LogLevel::Debug, expr)
