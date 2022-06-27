#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    return gcd(n, m % n);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Практическое занятие 3. Использование функций" << endl;
    cout << "Упражнение 4. Применение рекурсивной функции" << endl;
    cout << "Задание 2. Алгоритм Евклида (определение НОД)" << endl;

    int m;
    int n;

    cout << "Введите первое число: ";
    cin >> m;
    cout << "Введите второе число: ";
    cin >> n;

    int calc = gcd(m, n);

    cout << calc;
}