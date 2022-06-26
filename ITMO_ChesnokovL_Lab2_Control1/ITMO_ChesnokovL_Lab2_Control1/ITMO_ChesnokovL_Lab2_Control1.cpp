#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания.\n";
    cout << "Задание 1. Определение високосного года\n";

    int year;

    cout << "Введите год: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << year << " - Високосный год.";
    }
    else
    {
        cout << year << " - Не високосный год.";
    }
}