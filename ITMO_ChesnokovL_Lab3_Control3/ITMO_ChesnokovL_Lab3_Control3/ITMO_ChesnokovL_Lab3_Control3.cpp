#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double areaOne(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
double areaOne(double a)
{
    double s = (a * a * sqrt(3)) / 4;
    return s;
}

void triangleSel()
{
    setlocale(LC_ALL, "Russian");
    string selection;
    cout << "Площадь какого треугольника хотите рассчитать (A/B)? " << endl;
    cin >> selection;

    if (selection == "A")
    {
        double a;
        cout << "Введите стороны: " << endl;
        cin >> a;
        cout << "Площадь треугольника равностороннего:  " << areaOne(a) << endl;
    }
    else if (selection == "B")
    {
        double a, b, c;
        cout << "Введите стороны: " << endl;
        cin >> a >> b >> c;
        cout << "Площадь треугольника разностороннего:  " << areaOne(a, b, c) << endl;
    }
    else
        cout << "Ошибка" << endl;
}

int main()
{
    cout << "Контрольные задания" << endl;
    cout << "Задание 3. Работа с различными треугольниками" << endl;
    triangleSel();
}