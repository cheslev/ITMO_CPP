#include <iostream>
#include <math.h>
#include <string>
#include <windows.h>

using namespace std;

class Triangle
{
public:
    Triangle(double a, double b, double c)
    {
        if (c >= a + b or a >= b + c or b >= a + c)
            throw Triangle::ExTriangle("Triangle.");
    }

    double TriangleArea(double a, double b, double c)
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - c));
    }
    class ExTriangle
    {
    public:
        string name;
        ExTriangle(string names) :name(names)
        {

        };
    private:
        double a;
        double b;
        double c;
    };
};
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "Контрольные задания.\n";
    cout << "Задание 1. 1. Безопасная реализация класса Triangle\n";
    
    double a, b, c;
    cin >> a >> b >> c;
    try
    {
        Triangle tr(a, b, c);
        cout << "Площадь треугольника : " << tr.TriangleArea(a, b, c) << endl;
    }
    catch (Triangle::ExTriangle& ex)
    {
        cout << "Ошибка!!!" << ex.name;
    }
}