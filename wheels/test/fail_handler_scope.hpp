#pragma once

#include "runtime.hpp"

namespace wheels::test {

class FailHandlerScope {
 public:
  explicit FailHandlerScope(ITestFailHandler& handler)
      : previous_(InstallFailHandler(handler)) {
  }

  ~FailHandlerScope() {
    InstallFailHandler(previous_);
  }

 private:
  static ITestFailHandler& InstallFailHandler(ITestFailHandler& h) {
    return Runtime::Access().InstallFailHandler(h);
  }

 private:
  ITestFailHandler& previous_;
};

}  // namespace wheels::test
