#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

bool input(int& a, int& b) {
	int ina, inb;
	if (!(cin >> ina) or !(cin >> inb) or (ina <= 0) or (inb <= 0))
		return false;
	a = ina;
	b = inb;
	return true;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Контрольные задания.\n";
	cout << "Задание 2. Реализация ввода данных\n";
	int a1, b1;
	if (input(a1, b1) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a1 + b1;
	return 0;
}