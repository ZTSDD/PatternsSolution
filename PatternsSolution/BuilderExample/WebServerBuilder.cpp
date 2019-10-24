#include "WebServerBuilder.h"
#include "SecuritySettings.h"
#include "DomainController.h"
#include <iostream>
#include <string>

WebServerBuilder::WebServerBuilder()
{
	this->webServer = new WebServer();
}

WebServer& WebServerBuilder::Build()
{
	return *this->webServer;
}

WebServerBuilder& WebServerBuilder::SetAdminPort(int port)
{
	this->webServer->adminPort = port;
	return *this;
}

WebServerBuilder& WebServerBuilder::SetMainPort(int port)
{
	this->webServer->mainPort = port;
	return *this;
}

WebServerBuilder& WebServerBuilder::SetStlPort(
	int port)
{
	this->webServer->stlPort = port;
	return *this;
}

WebServerBuilder& WebServerBuilder::SetHostName(
	const std::string& hostName)
{
	this->webServer->hostName = hostName;
	return *this;
}

WebServerBuilder& WebServerBuilder::SetDomainController(
	DomainController& controller)
{
	this->webServer->domainController = &controller;
	return *this;
}

WebServerBuilder& WebServerBuilder::SetSecuritySettings(
	SecuritySettings& securitySettings)
{
	this->webServer->securitySettings = &securitySettings;
	return *this;
}