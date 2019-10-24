#pragma once
#include <string>
#include "DomainController.h"
#include "SecuritySettings.h"

class WebServer
{
public:
	int stlPort;
	int mainPort;
	int adminPort;
	std::string hostName;
	DomainController* domainController;
	SecuritySettings* securitySettings;
	void Start();
};