﻿#include <iostream>
#include <string>
using namespace std;
int main()
{
	system("chcp 1251");
	string name;
	cout << "Введите свое имя";
	double x;
	double a, b;
	cout << "\nВведите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	x = a / b;
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";
	return 0;
}