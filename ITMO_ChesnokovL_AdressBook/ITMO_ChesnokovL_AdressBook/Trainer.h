#pragma once
#include <string>
#include "Person.h"
#include "Genre.h"
using namespace std;
class Trainer : public Person {
public:
	Trainer(string lastName, string name, string secondName, Genre* genre) : Person(lastName, name, secondName) {
		this->genre = genre;
	}
	string GetStatus() const {
		return "Тренер";
	}
	virtual string GetInfo() const
	{
		std::ostringstream fullInfo;
		fullInfo << Person::GetInfo() << "\nЖанр: " << genre->getInfoGenre() << "\n-------------";
		return fullInfo.str();
	}
	void Save() const
	{
		Person::Save();
		ofstream fout("person.txt", ios::app);
		fout << "Жанр: " << genre->getInfoGenre() << "\n-------------";
		fout << endl;
		fout.close();
	}
private:
	Genre* genre;
};