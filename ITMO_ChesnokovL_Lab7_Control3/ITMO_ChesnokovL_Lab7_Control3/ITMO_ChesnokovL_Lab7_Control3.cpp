#include <iostream>
#include <cmath>
#include <string>
#include <tuple>
#include <windows.h>

using namespace std;

using Tuple = tuple <double, double, int>;

Tuple Myroot(double x, double y, double z)
{
    double a1 = 0, a2 = 0;
    int flag = -1;
    double Y = y * y - 4 * x * z;
    if (Y > 0)
    {
        a1 = ((-y) + sqrt(Y)) / (2 * x);
        a2 = ((-y) - sqrt(Y)) / (2 * x);
        flag = 1;
    }
    if (Y == 0)
    {
        a1 = (-y) / (2 * x);
        a2 = a1;
        flag = 0;
    }
    return make_tuple(a1, a2, flag);
}

void Test()
{
    Tuple s1 = Myroot(5, 9, 1);
    cout << "a1 = " << get<0>(s1) << " a2 = " << get<1>(s1) << get<2>(s1) << endl;
    Tuple s2 = Myroot(7, 1, 9);
    cout << "a1 = " << get<0>(s2) << " a2 = " << get<1>(s2) << get<2>(s2) << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Контрольные задания.\n";
    cout << "Задание 3. \n";

    Test();
    return 0;
}
