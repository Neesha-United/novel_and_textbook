#include<iostream>
#include "book.h"

using namespace std;

		Book::	Book(string nameOfBook, Author authorName, int bookPrice)
			{
				name_of_book=nameOfBook;
				authr=authorName;
				setPrice( bookPrice);
				
			}
			Book::Book(string nameOfBook, Author authorName, int bookPrice,int bookQuantity )
			{
				name_of_book=nameOfBook;
				authr=authorName;
				setPrice( bookPrice);
			setQuantity( bookQuantity);
				
			}
			string Book:: getName()
			{
				return name_of_book;
			}
			Author Book:: getAuthr()
			{
				return authr; 
			}
			void Book:: setPrice(int bookPrice)
			{
				price=bookPrice;
			}
			int Book:: getPrice()
			{
				return price;
			}
			void Book:: setQuantity(int bookQuantity)
			{
				quantity=bookQuantity;
				
			}
			int Book:: getQuantity()
			{
				return quantity;
			}
			string Book::tostring()
			{
				return getName()+ " by "+ authr.tostring();
			}
			

