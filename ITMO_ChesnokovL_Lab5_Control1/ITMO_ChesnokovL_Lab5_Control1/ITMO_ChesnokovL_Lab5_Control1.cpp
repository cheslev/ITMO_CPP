#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int Sum(int* mas, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mas[i];
    }
    return sum;
}

double Mean(int* mas, int n)
{
    int s = Sum(mas, n);
    return  (double)s / n;
}

int sumNeg(int* mas, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
            sum += mas[i];
    }
    return sum;
}

int sumPlus(int* mas, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
            sum += mas[i];
    }
    return sum;
}

int sumOne(int* mas, int n)
{
    int sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        sum += mas[i];
    }
    return sum;
}

int sumTwo(int* mas, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        sum += mas[i];
    }
    return sum;
}

int Min(int* mas, int n)
{
    int min = mas[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
            index = i;
        }
    }
    return index;
}

int Max(int* mas, int n)
{
    int max = mas[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            index = i;
        }
    }
    return index;
}
void Multy(int* mas, int n)
{
    int mult = 1;
    int indexMin = Min(mas, n);
    int indexMax = Max(mas, n);
    if (indexMin < indexMax)
    {
        for (int i = indexMin; i <= indexMax; i++)
        {
            mult *= mas[i];
        }
        cout << mult << endl;
    }
    else if (indexMin > indexMax)
    {
        for (int i = indexMax; i <= indexMin; i++)
        {
            mult *= mas[i];
        }
        cout << mult << endl;
    }
    else
        cout << "!!!" << endl;
}

void sortArray(int* mas, int n)
{
    int min = 0;
    int buf = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << '\t';
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    cout << "сумма: " << Sum(mas, n) << endl;
    cout << "среднее: " << Mean(mas, n) << endl;
    cout << "расчет суммы отрицательных элементов: " << sumNeg(mas, n) << endl;
    cout << "расчет суммы положительных элементов: " << sumPlus(mas, n) << endl;
    cout << "расчет суммы элементов с нечетными индексами: " << sumOne(mas, n) << endl;
    cout << "расчет суммы элементов с четными индексами: " << sumTwo(mas, n) << endl;
    cout << "минимальный элементы массива: " << Min(mas, n) << endl;
    cout << "максимальный элементы массива: " << Max(mas, n) << endl;
    Multy(mas, n);
    const int N = 10;
    int A[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    sortArray(A, N);
}
