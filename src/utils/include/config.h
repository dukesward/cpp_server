#ifndef UTILS_CONFIG_H
#define UTILS_CONFIG_H

#include "const_define.h"

#	ifndef UTILS_COMMON_H
#	include "common.h"
#	endif

class Config
{
	public:

		Config(std::string *source);
		~Config();

		bool GetConf();

	private:

		std::string *source;
		std::string *conf;

};

#endif // !UTILS_CONFIG_H
