#pragma once
#include <string>
using namespace std;


// Momento pattern is used to save object state, that we can restore it lately 
class Editor
{
public:
	Editor();
	virtual ~Editor();

	void SetText(string text);
	string GetText() const;

	void CreateMomento();
	void Undo();

private:
	string Text;
	class Momento* backup;
};

class Momento
{
public:
	Momento();
	Momento(class Editor* edit,const string& text);
	virtual ~Momento() {};

	void Restore() const;

private:
	Editor* editor;
	string memText;
};
