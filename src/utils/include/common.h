#ifndef UTILS_COMMON_H
#define UTILS_COMMON_H

//std libs go in here
#include <cstdio>
#include <cstdlib>

//basic stuff go in here
#include <string.h>
#include <string>

//io related go in here
#include <fstream>
#include <iostream>
#include <sstream>

std::string &TrimStrRight(std::string &s);
std::string &TrimStrLeft(std::string &s);
std::string &TrimStr(std::string &s);

#endif
