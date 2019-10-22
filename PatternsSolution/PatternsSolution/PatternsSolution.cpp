#include <iostream>
#include "WebServerBuilder.h"
#include "WebServer.h"

int main()
{
	WebServerBuilder builder = WebServerBuilder();
	DomainController domainController("192.168.2.2");
	SecuritySettings securitySettings(true, "1.3");
	WebServer webServer = builder.SetAdminPort(13769)
		.SetDomainController(domainController)
		.SetHostName("TestHost")
		.SetMainPort(8080)
		.SetSecuritySettings(securitySettings)
		.Build();
	webServer.Start();
}