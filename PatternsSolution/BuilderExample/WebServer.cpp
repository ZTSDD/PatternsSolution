#include "WebServer.h"
#include <iostream>

void WebServer::Start()
{
	std::cout << "Admin port: " << this->adminPort << std::endl;
	std::cout << "Main port: " << this->mainPort << std::endl;
	std::cout << "STL port: " << this->stlPort << std::endl;
	std::cout << "Host name: " << this->hostName << std::endl;
	std::cout << "Domain controller ip address: " << this->domainController->ipAddress << std::endl;
	std::cout << "cookieHttpOnly: " << this->securitySettings->cookieHttpOnly << std::endl;
	std::cout << "STL version: " << this->securitySettings->stlVersion << std::endl;
}