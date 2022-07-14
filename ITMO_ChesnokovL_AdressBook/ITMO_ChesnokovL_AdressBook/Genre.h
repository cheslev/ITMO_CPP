#pragma once
#include <string>
#include <sstream>

using namespace std;
class Genre {
public:
	Genre(string nameGenre ) :
		nameGenre(nameGenre) {}
	string getInfoGenre() const
	{
		std::ostringstream fullInfo;
		fullInfo << this->nameGenre << " ";
		return fullInfo.str();
	}
private:
	string nameGenre;
};