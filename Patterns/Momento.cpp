#include "Momento.h"
#include <iostream>

Editor::Editor()
	: Text("")
{
}

Editor::~Editor()
{
	if (backup != nullptr)
	{
		delete backup;
	}
}

void Editor::SetText(string text)
{
	CreateMomento();
	Text = text;
}

string Editor::GetText() const
{
	return Text;
}

void Editor::CreateMomento() 
{
	if (backup != nullptr)
	{
		delete backup;
	}
	backup = new Momento(this, Text);
}

void Editor::Undo()
{
	if (backup != nullptr)
	{
		backup->Restore();
	}
	else
	{
		cout << "No previos line" << endl;
	}
}

Momento::Momento()
	: editor(nullptr)
	, memText("")
{
}

Momento::Momento(Editor* edit, const string& text)
	: editor(edit)
	, memText(text)
{
}

void Momento::Restore() const
{
	editor->SetText(memText);
}
