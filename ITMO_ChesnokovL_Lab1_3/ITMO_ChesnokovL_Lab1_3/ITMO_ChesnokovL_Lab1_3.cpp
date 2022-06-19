
#include <Windows.h> 
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    
    cout.precision(2);

    double a, b, c, p;
    double perimeter;
    double triangle_size;
    cout << "a = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "\nc = ";
    cin >> c;
    perimeter = a + b + c;
    p = perimeter / 2;
    cout << "a + b + c = " << perimeter << endl;
    triangle_size = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Периметр треугольника " << triangle_size;

}