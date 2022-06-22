#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Упражнение 1. Реализация операторов выбора\n";
    cout << "Задание 1. Определение принадлежности точки заданной фигуре\n\n";

    float x, y;

    cout << "Введите положение точки по оси Х: ";
    cin >> x;
    cout << "Введите положение точки по оси Y: ";
    cin >> y;

    if (x * x + y * y < 9 && y > 0)
    {
        cout << "внутри фигуры";
    }
    else if (x * x + y * y > 9 || y < 0)
    {
        cout << "вне фигуры";
    }
    else
    {
        cout << "на границе фигуры";
    };
}