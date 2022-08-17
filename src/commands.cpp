#include <commands.hpp>
#include <fmt/color.h>


namespace commands {
    void invoke_help() {
	fmt::print("Work in progress!\n");
    }
    void project_create(const std::vector<std::string>& args) {
	if (args.size() == 2) {
	    fmt::print(fmt::fg(fmt::color::red), "No project name specified!\n");
	    return;
	}
	const std::string project_name = args[2];
	// system("git init");

	Git git;
	git.init();
	
	fmt::print("Created a project {}!\n", fmt::styled(project_name, fmt::fg(fmt::color::light_green) | fmt::emphasis::bold));
    }
}
