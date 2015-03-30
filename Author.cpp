
#include "author.h"

using namespace std;
Author::Author(){
}

Author::Author(string N, string E, string G )
			{
				name=N;
				setEmail(E);
				gender=G;
				
			}
string Author::getName()
			{
			return name;	
			}
string Author::getGender()
			{
				return gender;
			}
void Author::setEmail(string authorEmail)
			
			{
			email=authorEmail;
			}
string Author:: getEmail()
			{
			return email;	
			}
string Author:: tostring(){
				return getName() + " at " + getEmail();
			}
			




