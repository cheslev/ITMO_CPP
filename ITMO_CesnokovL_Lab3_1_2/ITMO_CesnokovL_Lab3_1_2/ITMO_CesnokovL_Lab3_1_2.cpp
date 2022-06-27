#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

string hello(string name) //Строковая функция с приветственной фразой
{
    string str = name + ", " + "привет!!!\n";
    return str;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 3. Использование функций" << endl;
    cout << "Упражнение 1. Использование функции при организации программы" << endl;
    cout << "Задание 2. Реализация возвращения значения функции" << endl;

    string name;
    cout << "Введите своё имя: " << endl;
    cin >> name;
    string nameOut = hello(name);
    cout << nameOut;
    return 0;
}
