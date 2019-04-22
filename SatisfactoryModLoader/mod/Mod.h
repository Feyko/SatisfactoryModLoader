#pragma once

#include "../Lib.h"
#include <string>
#include <vector>

#define MOD_API extern "C" __declspec(dllexport)

class Mod {
private:
	bool post_setup_called;

public:
	struct Info {
		std::string loaderVersion;
		std::string name;
		std::string version;
		std::string description;
		std::string authors;
		std::vector<std::string> dependencies;
	};

	SML_API Mod(const Info& info);

	virtual void SML_API setup();
	virtual void SML_API post_setup();
	virtual SML_API ~Mod();

	// called by mod loader
	void call_post_setup() {
		if(post_setup_called)
			return;

		post_setup_called = true;
		post_setup();
	}

	Info info;
};