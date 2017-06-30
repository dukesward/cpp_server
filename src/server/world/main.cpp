
#include <iostream>
#include "Common.h"
#include "DatabaseEnv.h"
#include "OpenSSLCrypto.h"

extern int main(int argc, char *argv)
{
	std::cout << "Hello" << std::endl;
	signal(SIGABRT);

	OpenSSLCrypto::threadsSetup();
}