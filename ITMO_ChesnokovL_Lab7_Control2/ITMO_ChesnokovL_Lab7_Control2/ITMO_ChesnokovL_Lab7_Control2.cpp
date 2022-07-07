#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

struct MyStruct
{
    double a1 = 0, a2 = 0;
};

MyStruct Myroot(double x, double y, double z)
{
    MyStruct roots;
    double Y = y * y - 4 * x * z;
    if (Y > 0)
    {
        roots.a1 = ((-y) + sqrt(Y)) / (2 * x);
        roots.a2 = ((-y) - sqrt(Y)) / (2 * x);
    }
    if (Y == 0)
    {
        roots.a1 = (-y) / (2 * x);
        roots.a2 = roots.a1;
    }
    return roots;
}

void Test()
{
    MyStruct s1 = Myroot(5, 9, 1);
    cout << "a1 = " << s1.a1 << " a2 = " << s1.a2 << endl;
    MyStruct s2 = Myroot(7, 1, 9);
    cout << "a1 = " << s2.a1 << " a2 = " << s2.a2 << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания.\n";
    cout << "Задание 2. Решение квадратного уравнения\n";
    Test();
    return 0;
}

