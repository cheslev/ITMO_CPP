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
    cout << "Задание 2. Определение наибольшего из трех чисел\n";

    int a, b, c;
    cout << "Введите числа для сравнения.\n";
    cout << "Введите 1-е число: ";
    cin >> a;
    cout << "Введите 2-е число: ";
    cin >> b;
    cout << "Введите 3-е число: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "Наибольшее число: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "Наибольшее число: " << b << endl;
    }
    else if (c > a && c > b)
    {
        cout << "Наибольшее число: " << c << endl;
    }
    else
    {
        cout << "Числа равны." << endl;
    }
}