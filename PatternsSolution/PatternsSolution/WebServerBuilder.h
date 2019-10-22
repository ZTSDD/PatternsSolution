#pragma once
#include "WebServer.h"
#include <string>

class WebServerBuilder
{
private:
	WebServer* webServer;
public:
	WebServerBuilder();
	WebServerBuilder& SetMainPort(int);
	WebServerBuilder& SetAdminPort(int);
	WebServerBuilder& SetHostName(const std::string&);
	WebServerBuilder& SetSecuritySettings(SecuritySettings&);
	WebServerBuilder& SetStlPort(int);
	WebServerBuilder& SetDomainController(DomainController&);
	WebServer& Build();
};