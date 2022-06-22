#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Упражнение 2. Использование циклов при реализации алгоритмов\n";
    cout << "Задание 2. Использование цикла с предусловием\n";

    int a, b, temp;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    /*while (a != b)
    {
        if (a > b)
            a -= b; // аналогично выражению a = a - b
        else
            b -= a;
    }
    cout << "НОД = " << a << endl;*/

    //Реализация задачи с помощью цикла с постусловием в рамках выполнения задания 3
    do
    {
        if (a > b)
            a -= b;
        else
            b -= a;

        cout << "НОД = " << a << endl;
    } while (a != b);
}