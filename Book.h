#include"LibraryObject.h"

class Book:public LibraryObject{
private:
	char name[40];
	bool OnSelf;
	static char Filename[40];
public:
	Book(const char * i_name):OnSelf(true){
		strcpy(Book::name,i_name);
	}
	Book(){}
	void CheckOut();
	const char * GetName(){
		return name;
	}
	void SetName(const char * i_name){
		strcpy(name,i_name);
	}
	static char * GetFileName(){
		return FileName;
	}
};