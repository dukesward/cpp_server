#include "common.h"

std::string &TrimStrRight(std::string &s)
{
	std::string::iterator it = s.begin();
	std::cout << "print begin iterator: " << *it << std::endl;

	return s;
}