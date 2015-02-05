#include "LibraryObject.h"

LibraryObject::LibraryObject(int index,const char *name):index(index){
	SetName(name);
}

LibraryObject::LibraryObject(const char * i_name){
	strcpy(name,i_name);
}

LibraryObject::LibraryObject(){}

const char *LibraryObject::GetName(){
	return name;
}

int LibraryObject::GetIndex(){
	return index;
}

void LibraryObject::ShowData(){
	cout<< index << " " << name << " " <<endl;
}

void LibraryObject::SetIndex(int i_index){
	index = i_index;
}

void LibraryObject::SetName(const char* i_name){
	strcpy(name,i_name);
}

