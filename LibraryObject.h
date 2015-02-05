#ifndef _LIBRARYOBJECT_
#define _LIBRARYOBJECT_

#include<iostream>
using namespace std;

class object{};

class LibraryObject:public object
{
protected:
	int index;
	char name[20];
public:
	LibraryObject(int index,const char* name);
	LibraryObject(const char* i_name);
	LibraryObject();
	const char* GetName();
	int GetIndex();
	virtual void ShowData();
	void SetIndex(int i_index);
	void SetName(const char* i_name);
};
#endif