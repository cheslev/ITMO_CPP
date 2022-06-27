#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int addNumbers(int n)
{
    if (n == 1)
    {
        return 1; //Выход из рекурсии
    }
    else
    {
        return (n + addNumbers(n - 1));
    }
}

int addNumbers(int n, int k)
{
    if (n == k)
    {
        return k;
    }
    else
    {
        return (k + addNumbers(n, k - 1));
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 3. Использование функций" << endl;
    cout << "Упражнение 4. Применение рекурсивной функции" << endl;
    cout << "Задание 1. Сумма чисел" << endl;

    int n;
    int k;
    cout << "Введите базовое число: ";
    cin >> n;
    int addNumCall1 = addNumbers(n);
    cout << addNumCall1 << endl;

    cout << "Введите верхнюю границу диапазона: ";
    cin >> k;
    int addNumCall2 = addNumbers(n, k);
    cout << addNumCall2 << endl;

    return 0;
}