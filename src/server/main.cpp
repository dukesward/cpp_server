
#include <iostream>

#include "common.h"
#include "config.h"
#include "daemon.h"

extern int main(int argc, char *argv)
{
	std::cout << "Hello" << std::endl;

	std::string cfg_root = CONFIG_ROOT;
	std::string cfg_file = _MANGOS_R_CONF;
	std::string cfg_full = cfg_root + cfg_file;

	Config cfg(&cfg_full);
	cfg.GetConf();
}