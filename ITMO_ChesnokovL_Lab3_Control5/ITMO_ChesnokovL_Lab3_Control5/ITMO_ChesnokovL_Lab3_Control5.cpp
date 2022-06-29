#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void convert(int n)
{
    if (n <= 2)
    {
        cout << n;
        return;
    }
    else
    {
        convert(n / 2);
        cout << n % 2;
        return;
    }
}
int main()
{
    cout << "Контрольные задания" << endl;
    cout << "Задание 5. Применение рекурсии для перевода целого числа в двоичный код" << endl;
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    cout << "Перевод числа: " << endl;
    convert(n);
}