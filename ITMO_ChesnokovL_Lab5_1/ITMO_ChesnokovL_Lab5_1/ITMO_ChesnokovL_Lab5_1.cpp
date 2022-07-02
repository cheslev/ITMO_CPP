#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int n = 10;
    float average;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    cout << s << endl;

    average = s / n;
    cout << "Среднее:" << average << endl;
    return 0;
}

