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
    cout << "Задание 1. Использование цикла с постусловием\n";

    double x, x1, x2, y;

    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;

    cout << "\tx\tsin(x)\n";

    x = x1;

    /*do
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    }
    while (x <= x2);*/

    //Реализация задачи с помощью цикла с предусловием в рамках выполнения задания 3
    while (x <= x2)
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    }

}
