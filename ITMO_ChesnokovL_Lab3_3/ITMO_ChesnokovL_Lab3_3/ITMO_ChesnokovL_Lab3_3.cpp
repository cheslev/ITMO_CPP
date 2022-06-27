#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;

    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 3. Использование функций" << endl;
    cout << "Упражнение 3. Реализация сложных алгоритмов с помощью функций" << endl;

    double a;
    int n;

    cout << "Введите базовое значение: " << endl;
    cin >> a;
    cout << "Введите экспоненту: " << endl;
    cin >> n;

    long double searchOut = firBinSearch(a, n);

    cout << searchOut << endl;
}
