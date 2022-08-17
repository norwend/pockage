#pragma once

#include <fmt/core.h>
#include <fmt/color.h>
#include <filesystem>
#include "git2.h"


class Git {
private:
    
public:
    Git() {
	git_libgit2_init();
    }

    void init() {
	git_repository* repo = NULL;
	auto repo_path = std::filesystem::current_path();
	int error = git_repository_init(&repo, repo_path.c_str(), false);
	if (error < 0) {
	    const git_error* e = git_error_last();
	    fmt::print("Error {}/{}: {}\n", error, e->klass, e->message);
	    exit(error);
	    return;
	}
	fmt::print(fmt::fg(fmt::color::light_green), "Empty Git repository initialized!\n");
    }

    void clone(const std::string& url, const std::string& path) {
	git_repository* repo = NULL;
	int error = git_clone(&repo, url.c_str(), path.c_str(), NULL);
	if (error < 0) {
	    const git_error* e = git_error_last();
	    fmt::print(stderr, "Error {}/{}: {}\n", error, e->klass, e->message);
	    exit(error);
	}
    }
    
    ~Git() {
	git_libgit2_shutdown();
    }
};
