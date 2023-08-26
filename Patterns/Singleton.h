#pragma once
#include <string>

using namespace std;



class Singleton
{
public:

	virtual ~Singleton();

	static Singleton* GetObj();

	string classFieldStr;
	int classFieldNum;

private:
	Singleton();

};

