#include<iostream>

using namespace std;

#include"LibraryObject.h"

class Librarian:public LibraryObject{
public:
	void CheckOut();
	void BookData();
	void ReaderData();
};

