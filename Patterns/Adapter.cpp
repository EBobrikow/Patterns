#include "Adapter.h"
#include <iostream>

using namespace std;

Adapter::Adapter()
	: Adapter(nullptr)
{
}

Adapter::Adapter(XMLService* serv)
	: service(serv)
{
}


void Adapter::SetService(XMLService* serv)
{
	service = serv;
}

void Adapter::ProcessJson(const JSONString& data)
{
	XMLString xmlFormat;
	// Emulating some JSON to XML formating
	xmlFormat.Data = data.JData;
	if (service != nullptr)
	{
		service->ProcessXML(xmlFormat);
	}
}


void XMLService::ProcessXML(const XMLString& data)
{
	cout << "Saving in XML format data" << endl;
	cout << data.Data << endl;
}


