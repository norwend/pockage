#include <cstring>
#include <fmt/core.h>
#include <fmt/color.h>
#include <vector>
#include <string>

#include <commands.hpp>
#include <file.hpp>


void args_parse(const std::vector<std::string>& args) {
    if (args.size() == 1) {
	commands::invoke_help(); return;
    }
    if (args[1] == "create") {
	commands::project_create(args);
	return;
    }
    fmt::print("Incorrect command!\n");
}


int main(int argc, const char* argv[]) {
    std::vector<std::string> args;
    for (int i = 0; i < argc; ++i) {args.push_back(argv[i]);}
    args_parse(args);
    return 0;
}
