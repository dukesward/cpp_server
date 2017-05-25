#ifndef UTILS_CONFIG_H
#define UTILS_CONFIG_H

#include "define.h"

#	ifndef UTILS_COMMON_H
#	include "common.h"
#	endif

class Config
{
	public:

		Config(const char *source);
		~Config();

	private:

		char *source;

};

#endif // !UTILS_CONFIG_H
