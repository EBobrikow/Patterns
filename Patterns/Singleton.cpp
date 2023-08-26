#include "Singleton.h"

static Singleton* obj;

Singleton::~Singleton()
{
	if (obj != nullptr)
	{
		delete obj;
	}
}

Singleton* Singleton::GetObj()
{
	if (obj == nullptr)
	{
		obj = new Singleton();
	}
	return obj;
}

Singleton::Singleton()
	: classFieldStr("Hi from singleton construct")
	, classFieldNum(124)
{
}



