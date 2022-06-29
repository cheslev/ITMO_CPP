#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int Sum(int n)
{
    if (n == 1)
        return 5;
    else return (n * 5 + Sum(n - 1));
}
int main()
{
    cout << "Контрольные задания" << endl;
    cout << "Задание 4. Рекурсивная функция суммы ряда" << endl;
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    cout << "Сумма ряда " << Sum(n) << endl;
}