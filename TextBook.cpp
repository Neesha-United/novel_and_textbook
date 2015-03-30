 #include <iostream>
 #include "TextBook.h"
using namespace std;


	TextBook::	TextBook( string nameOfBook,Author authorName, int bookPrice,int bookQuantity, string subjectName, string whichLevel, string subjectTeacher):Book( nameOfBook,  authorName,  bookPrice)
		{
			setSubject(subjectName);
			setLevel(whichLevel);
			teacher=subjectTeacher;
		}
		void TextBook:: setSubject(string subjectName)
		{
			subject=subjectName;
		}
		string TextBook::getSubject()
		{
			return subject;
		}
		void  TextBook::setLevel( string whichLevel){
		level=whichLevel;
		}
		string TextBook:: getLevel()
		{
			return level;
		}
		void TextBook:: setTeacher(string subjectTeacher)
		{
			teacher=subjectTeacher;
		}
		string TextBook::getTeacher()
		{
			return teacher;
		}
			int TextBook:: getTotalprice()
			{
			
				return (price*quantity);
			} 

		string TextBook:: tostring(){
			return "Subject: "+ getSubject()+"\n" + "Level: " + getLevel() +"\n"+ "Teacher: "+ getTeacher();
	}
