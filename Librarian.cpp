#include<iostream>

#include"Librarian.h"
#include"Database.h"
#include"Reader.h"
#include"Book.h"

using namespace std;

void Librarian::CheckOut(){
	char r_name[20], b_name[40];
	Database<Reader> ReaderDB;
	Database<Book> BookDB;
	try{
		cout<< "Please input Reader's name:" <<endl;
		cin>> r_name;
		Reader *reader = ReaderDB.Query(r_name);

		cout<< "Please input Book's name:" <<end;
		cin.ignore(1);
		cin.get(b_name,40,'\n');
		Book * book = BookDB.Query(b_name);
		book->CheckOut();
		reader->BorrowBook(book->GetIndex());
	}
	catch(string s){
		cerr<< s;
	}
}

void Librarian::BookData(){

	char choice = 'I';
	char b_name[40];
	Database<Book> BookDB;
	Book * book;
	while(!(choice=='E' || choice =='e'))
	{
		cout<< "Maintain Book Database" <<endl;
		cout<< "(I)nsert new data,(U)pdate data,(D)elete data,";
		cout<< "(Q)uery data,(S)how all data,(E)xit:" <<endl;
		cin<< choice;
		try{
			switch(choice)
			{
				case 'i':
				case 'I':
					cout<< "Please input a Book's name:" <<endl;
					cin.ignore(1);
					cin.get(b_name,40,'\n');
					book = new Book(b_name);
					BookDB.Insert(*book);
					break;
				case 'U':
				case 'u':
					cout<< "Please input a Book's name:" <<endl;
					cin.ignore(1);
					cin.get(b_name,40,'\n');

					book = BookDB.Query(b_name);

					cout<< "Please input Book's new name:" <<endl;
						cin.ignore(1);
					cin.get(b_name,40,'\n');
					book->SetName(b_name);
					break;
				case 'd':
				case 'D':
					cout<< "Please input a Book's name:" <<endl;
					cin.ignore(1);
					cin.get(b_name,40,'\n');
					break;
				case 'Q':
				case 'q':
					cout<< "xxxxxxxxxxxxxxxxxx" <<endl;
					break;
				case 's':
				case 'S':
					BookDB.ShowAllData();
					break;
				case 'e':
				case 'E':
					break;
				default:
					cout<< "Don't provide this function!" <<endl;
			}
		}
		catch(string s){
			cerr<< s;
		}
	}
}

void Librarian::CheckOut(){
	char r_name[20], b_name[40];
	Database<Reader> ReaderDB;
	Database<Book> BookDB;
	try{
		cout<< "Please input Reader's name:" <<endl;
		cin>> r_name;
		Reader *reader = ReaderDB.Query(r_name);

		cout<< "Please input Book's name:" <<end;
		cin.ignore(1);
		cin.get(b_name,40,'\n');
		Book * book = BookDB.Query(b_name);
		book->CheckOut();
		reader->BorrowBook(book->GetIndex());
	}
	catch(string s){
		cerr<< s;
	}
}

void Librarian::ReaderData(){

	char choice = 'I',r_name[40];
	Database<Book> BookDB;
	Reader * reader;
	while(!(choice=='E' || choice =='e'))
	{
		cout<< "Maintain Reader Database" <<endl;
		cout<< "(I)nsert new data,(U)pdate data,(D)elete data,";
		cout<< "(Q)uery data,(S)how all data,(E)xit:" <<endl;
		cin<< choice;
		try{
			switch(choice)
			{
				case 'i':
				case 'I':
					cout<< "Please input a Reader's name:" <<endl;
					cin>> r_name;
					cin.ignore(1);
					
					reader = new Reader(r_name);
					ReaderDB.Insert(*reader);
					break;
				case 'U':
				case 'u':
					cout<< "Please input a Reader's name:" <<endl;
					cin>> r_name;

					reader = ReaderDB.Query(r_name);

					cout<< "Please input Reader's new name:" <<endl;
					reader->SetName(r_name);
					break;
				case 'd':
				case 'D':
					cout<< "Please input a Reader's name:" <<endl;
					cin>> r_name;

					ReaderDB.Delete(r_name);
					break;
				case 'Q':
				case 'q':
					cout<< "xxxxxxxxxxxxxxxxxx" <<endl;
					break;
				case 's':
				case 'S':
					ReaderDB.ShowAllData();
					break;
				case 'e':
				case 'E':
					break;
				default:
					cout<< "Don't provide this function!" <<endl;
			}
		}
		catch(string s){
			cerr<< s;
		}
	}
}



