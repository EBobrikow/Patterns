#pragma once
#include <string>

using namespace std;

// Emulating a situation when we recieve some json data and need to pass it to legacy library.
// However, old library works only with XML format, so we create an adapter where convert the format and transfer it 

struct XMLString
{
	string Data;
};

struct JSONString
{
	string JData;
};

class IClientInterface
{
public:
	IClientInterface() {};
	virtual ~IClientInterface() {};

	virtual void ProcessJson(const JSONString& data) = 0;
};

// Emulate some 3rd party library interface
class XMLService
{
public:
	XMLService() {};
	virtual ~XMLService() {};

	virtual void ProcessXML(const XMLString& data);
};

class Adapter : public IClientInterface
{
public:
	Adapter();
	Adapter(XMLService* serv);
	virtual ~Adapter() {};

	void SetService(XMLService* serv);

	virtual void ProcessJson(const JSONString& data) override;

private:
	XMLService* service;
};





