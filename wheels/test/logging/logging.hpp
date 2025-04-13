#pragma once

#include <wheels/core/string_builder.hpp>
#include <wheels/core/source_location.hpp>

// Simple asynchronous logging

namespace wheels {

//////////////////////////////////////////////////////////////////////

enum class LogLevel : int {
  Trace = 1,
  Debug = 2,
  Info = 3,
  Warning = 4,
  Critical = 5
};

//////////////////////////////////////////////////////////////////////

bool LevelAccepted(LogLevel level);

void LogMessage(SourceLocation where, std::string message);

void FlushPendingLogMessages();

void LogMessageSimple(std::string message);

}  // namespace wheels
