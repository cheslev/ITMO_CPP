#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void hello(string);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 3. Использование функций" << endl;
    cout << "Упражнение 1. Использование функции при организации программы" << endl;
    cout << "Задание 1. Реализация процедуры" << endl;

    string name;
    cout << "Введите своё имя: " << endl;
    cin >> name;
    //cout << name << ", " << "приветствую!" << endl;
    hello(name); //Вызов функции c переданным в неё значением переменной name из функции main.
    return 0;
}

void hello(string name) //Функция с приветственной фразой
{
    cout << name << ", " << "приветствую!" << endl;
}