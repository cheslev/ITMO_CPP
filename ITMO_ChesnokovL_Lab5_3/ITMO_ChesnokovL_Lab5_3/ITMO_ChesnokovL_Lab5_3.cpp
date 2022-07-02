﻿#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

void show_array(const int, const int);
bool from_min(const int, const int);
bool from_max(const int, const int);
void bubble_sort(int, const int, bool (*compare)(int, int));

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int N = 10;
	int my_choose = 0;


	bool (*from_f[2])(int, int) = { from_min,from_max };
	int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
	cout << "1. Сортировать по возрастанию\n";
	cout << "2. Сортировать по убыванию\n";
	cin >> my_choose;
	cout << "Исходные данные: ";
	return 0;
	show_array(A, N);

	bubble_sort(A, N, (from_f[my_choose - 1]));

	show_array(A, N);
}

void show_array(const int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}

bool from_min(const int a, const int b)
{
	return a > b;
}
bool from_max(const int a, const int b)
{
	return a < b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
		}
	}
}