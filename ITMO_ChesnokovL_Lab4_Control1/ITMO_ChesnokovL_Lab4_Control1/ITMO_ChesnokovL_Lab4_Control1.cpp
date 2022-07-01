#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int Myroot(double a, double b, double c, double& x1, double& x2) {
	double D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		return 1;
	}
	if (D == 0) {
		x1 = (-b) / (2 * a);
		x2 = x1;
		return 0;
	}
	return -1;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Контрольные задания.\n";
	cout << "Задание 1. Вычисление корней квадратного уравнения\n";

	double a, b, c, x1 = 0, x2 = 0;
	std::cout << "введите значения a, b, c:\n";
	std::cin >> a >> b >> c;
	switch (Myroot(a, b, c, x1, x2))
	{
	case(1):
		cout << "x1 = " << x1 << std::endl;
		cout << "x1 = " << x2 << std::endl;
		break;
	case(0):
		cout << "Оба корня совпадают";
		cout << "x1 = x2 =  " << x1 << std::endl;
		break;
	case(-1):
		cout << "корней не существует";
		break;
	default:
		break;
	}
}