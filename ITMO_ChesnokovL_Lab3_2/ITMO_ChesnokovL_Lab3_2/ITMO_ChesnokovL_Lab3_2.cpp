#include <iostream>
#include <windows.h>
#include <string>

using namespace std;


void hello(string name)
{
    cout << name << ", " << "привет!" << endl;
}

void hello(string name, int k)
{
    cout << name << ", " << "привет! " << "Вы ввели: " << k << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 3. Использование функций" << endl;
    cout << "Упражнение 2. Перегрузка функций" << endl;

    string name;
    int k;

    cout << "Введите своё имя: " << endl;
    cin >> name;
    cout << "Введите целое число: " << endl;
    cin >> k;

    hello(name);
    hello(name, k);
    return 0;
}