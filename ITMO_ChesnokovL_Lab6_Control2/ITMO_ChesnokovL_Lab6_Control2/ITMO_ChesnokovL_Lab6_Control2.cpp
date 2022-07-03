#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

void sortArray(int* mas, int n)
{
    int min = 0;
    int buf = 0;

    ofstream outArray("sortArray");
    if (!outArray)
    {
        return;
    }
   
    for (int i = 0; i < n; i++)
    {
        outArray << mas[i] << " ";
    }
    outArray.close();

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

    ofstream outSortArray("sortArray", ios::app);
    if (!outSortArray) {
       
        return;
    }
    outSortArray << "\nСортированный массив:\n";
    for (int i = 0; i < n; i++)
    {
        outSortArray << mas[i] << " ";
    }
    outSortArray.close();
   
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int N = 10;
    int A[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    
    sortArray(A, N);
}