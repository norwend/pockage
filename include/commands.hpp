#pragma once

#include <fmt/core.h>
#include <fmt/color.h>
#include <vector>
#include <string>
#include "git.hpp"

namespace commands {

    void invoke_help();
    void project_create(const std::vector<std::string>&);

}
