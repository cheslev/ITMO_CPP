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
    cout << "Задание 4. Стрельба по мишени\n";

    int x, y;
    int k = 0;
    int a = 10, b = 5, c = 1, d = 0;

    do
    {
        cout << "Сместите прицел по оси X: ";
        cin >> x;
        cout << "Сместите прицел по оси Y: ";
        cin >> y;

        if (x * x + y * y < 4)
        {
            k = k + a;
        }
        else if (x * x + y * y > 4 && x * x + y * y < 9)
        {
            k = k + b;
        }
        else if (x * x + y * y > 9 && x * x + y * y < 20)
        {
            k = k + c;
        }
        else
        {
            k = k + d;
        }

        cout << "Очки, набранные по итогу стрельбы: " << k << endl;

    } while (k < 20);
}