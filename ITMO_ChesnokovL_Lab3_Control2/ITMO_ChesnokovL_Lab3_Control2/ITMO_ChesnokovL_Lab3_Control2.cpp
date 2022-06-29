#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

double kubkoren(double a) {
    a = pow(a, 1.0 / 3);
    return a;
}
int koren(int a) {
    int x = a;
    int x2;

    for (int i = 1; i < 10; i++)
    {
        while (x = a)
        {
            x = ((a / (i * i) + (2 * i)) / 3);
        }
        return i;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Контрольные задания" << endl;
    cout << "Задание 2. Применение итерации реализации функции" << endl;
    int a1;
    cin >> a1;
    cout << "\Кубический корень: " << kubkoren(a1) << endl;
}