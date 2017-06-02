#include "config.h"

Config::Config(std::string *src)
{
	source = src;
}

Config::~Config()
{
	
}

bool Config::GetConf()
{
	if (source != NULL) {
		std::cout << "get config file from source: " << source << std::endl;
		//stream(std::string *str)
		std::ifstream stream(*source);

		if (!stream.is_open()) {
			return false;
		}
		else {
			std::string line;

			while (std::getline(stream, line)) {
				TrimStrRight(line);
				std::cout << line << std::endl;
			}
		}

	}
}