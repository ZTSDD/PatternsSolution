#pragma once
#include <string>
class SecuritySettings
{
public:
	bool cookieHttpOnly;
	std::string stlVersion;

	SecuritySettings(bool, std::string);
};