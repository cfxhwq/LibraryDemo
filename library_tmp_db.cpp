#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<map>
#include<fstream>

#include"LibraryObject.h"
#include"Reader.h"
#include"Book.h"
#include"Database.h"
#include"Librarian.h"

using namespace std;


int main(void){
	
	char choice = 'I';
	Librarian librarian;

	while(!(choice=='E' || choice =='e'))
	{
		cout<< "check (O)ut,check (I)n,(B)ook's data,";
		cout<< "(R)eader's data,(E)xit:" <<endl;
		cin<< choice;
		
		switch(choice)
		{
			case 'o':
			case 'O':
				librarian.CheckOut();
				break;
			case 'i':
			case 'I':
				cout<< "Let you pracxxxxxxxxxxxx" <<endl;
				break;
			case 'B':
			case 'b':
				librarian.BookData();
				break;
			case 'e':
			case 'E':
				break;
			default:
				cout<< "Don't provide this function!" <<endl;
		}
	}
} 