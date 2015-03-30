#include "book.h"
using namespace std;
class Novel: public Book{
	private:
		string genre;
		bool isHardCover;
		public:
	Novel(string nameOfBook,Author authorName, int bookPrice, int bookQuantity,bool bookCover, string genreNovel   );
			string getGenre();
			void setisHardCover(bool bookCover );
			bool getIsHardCover();
			int getTotalprice();
			string coverInfo();
			
			
		
};
