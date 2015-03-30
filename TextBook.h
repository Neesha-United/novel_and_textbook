#include "book.h"
using namespace std;
#ifndef TEXTBOOK_H
#define TEXTBOOK_H

class TextBook: public Book
{
	private: 
	string subject;
	string level;
	string teacher;
	public:
	TextBook( string nameOfBook,Author authorName, int bookPrice,int bookQuantity, string subjectName, string whichLevel, string subjectTeacher );
		
		void setSubject(string subjectName);
	
		string getSubject();
	
		void setLevel( string whichLevel);
	
		string getLevel();
		
		void setTeacher(string subjectTeacher);
		
		string getTeacher();
		string  tostring();
		int  getTotalprice();
};
#endif // TEXTBOOK_H

