#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "Person.h"
#include "Gamer.h"
#include "Trainer.h"

using namespace std;

void AdditionalInfo(Person* person) {
    int age;
    string phone, address, street, houseNumber, apartmentNumber;
    char   choice;
    cout << "Хотите ввести дополнительную информацию?((у / n) ? ";
    cin >> choice;
    if (choice == 'y') {
        cout << "Введите возраст: ";
        cin >> age;
        cout << "Введите телефон: ";
        cin >> phone;
        cout << "Введите название улицы: ";
        cin >> street;
        cout << "Введите номер дома: ";
        cin >> houseNumber;
        cout << "Введите номер квартиры: ";
        cin >> apartmentNumber;
        address = street + ", дом " + houseNumber + ", квартира " + apartmentNumber;
        person->SetAge(age);
        person->SetPhone(phone);
        person->SetAddress(address);
    }
    else {
        cout << "Никакой дополнительной информации нет.\n";
    }
}

void ShowInfo(const Person* person) {
    cout << person->GetInfo() << endl;
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Genre* genre[10];
    genre[0] = new Genre("Шутер");
    genre[1] = new Genre("Стратегия");
    genre[2] = new Genre("Спорт");
    genre[3] = new Genre("Головоломка");
    genre[4] = new Genre("Гонки");
    Person* person[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nПривет, тут вы можете создать базу данных киберспортсмена и их тренеров! Начнем. Подождите пару секунд.";
        Sleep(3500);
        cout << "\nВы хотите ввести информацию про Геймера или Тренера (g / t) ? ";
        cin >> choice;
        if (choice == 'g') {
            string lastName, name, secondName;
            cout << "Введите фамилию геймера: ";
            cin >> lastName;
            cout << "Введите имя геймера: ";
            cin >> name;
            cout << "Есть ли отчество у геймера ((у / n) ?  ";
            cin >> choice;
            if (choice == 'y') {
                cout << "Введите отчество геймера: ";
                cin >> secondName;
            }
            else {
                secondName = "not";
            }
            std::vector<int> scores;
            unsigned int points, numPoints;
            cout << "Пожалуйста, количество сессий игр: ";
            cin >> numPoints;
            cout << "Введите баллы за каждую игру: ";
            for (int i = 0; i < numPoints; i++) {
                cin >> points;
                scores.push_back(points);
            }
            person[n] = new Gamer(lastName, name, secondName, scores);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        else {
            string lastName, name, secondName;
            cout << "Введите фамилию Тренера: ";
            cin >> lastName;
            cout << "Введите имя Тренера: ";
            cin >> name;
            cout << "Есть ли отчество((у / n) ? ";
            cin >> choice;
            if (choice == 'y') {
                cout << "Введите отчество тренера: ";
                cin >> secondName;
            }
            else {
                secondName = "not";
            }

            unsigned int numGenre;
            cout << "Введите номер жанра (1 - Шутер, 2 - Стратегия, 3 - Спорт, 4 - Головоломки, 5 - Гонки): ";
            cin >> numGenre;
            person[n] = new Trainer(lastName, name, secondName, genre[numGenre - 1]);

            AdditionalInfo(person[n]);
            person[n]->Save();
        }
        cout << "Продолжать((у / n) ? ";
        cin >> choice;
        n++;
    } while (choice == 'y');
    for (int j = 0; j < n; j++) 
        ShowInfo(person[j]);
    for (int j = 0; j < n; j++) 
        delete person[j];
    return 0;
}