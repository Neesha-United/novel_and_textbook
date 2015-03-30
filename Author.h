#include<iostream>
#include <string>
#ifndef AUTHOR_H
#define AUTHOR_H
using namespace std;

class Author {
	private:
		string name;
		string gender;
		string email;
	
	public:
			
			Author(string N, string E, string G );
			Author();
			string getName();
			
			string getGender();
			
			void setEmail(string authorEmail);
			
			
			string getEmail();
			
			string tostring();
			
};
#endif // AUTHOR_H


