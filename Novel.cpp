#include "Novel.h"
using namespace std;

		Novel::	Novel(string nameOfBook,Author authorName, int bookPrice, int bookQuantity,bool bookCover, string genreNovel):Book( nameOfBook,  authorName, bookPrice){
				genre=genreNovel;
				isHardCover=bookCover;
			}
			string Novel:: getGenre()
			{
				return genre;
			}
			void Novel::setisHardCover(bool bookCover)
			{
				isHardCover=bookCover;
				
			}
			bool Novel:: getIsHardCover()
			{
				return isHardCover;
			}
		
			string Novel::coverInfo()
			{
				string cover;
				if(getIsHardCover()==1)
				{
					cover="Yes";
					
				}
			 if(getIsHardCover()==0)
			 {
			 	cover="No";
			 	
			 }
			 	return "Genre: "+ getGenre()+"\n" +"Cover: " + cover;
			 }
			
			
			
		

