#include <iostream>
#include "WebServerBuilder.h"
#include "WebServer.h"

int main()
{
	auto builder = WebServerBuilder();
	auto domainController = DomainController("192.168.2.2");
	auto securitySettings = SecuritySettings(true, "1.3");
	auto webServer = builder.SetAdminPort(13769)
		.SetDomainController(domainController)
		.SetHostName("TestHost")
		.SetMainPort(8080)
		.SetSecuritySettings(securitySettings)
		.Build();
	webServer.Start();
}