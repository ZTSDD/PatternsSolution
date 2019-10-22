#include "SecuritySettings.h"
#include <string>

SecuritySettings::SecuritySettings(bool cookieHttpOnly, std::string stlVersion)
{
	this->cookieHttpOnly = cookieHttpOnly;
	this->stlVersion = stlVersion;
}