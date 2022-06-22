#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    cout << "Упражнение 3. Применение цикла с параметром (for) для итерации\n";

    int a, b, c; 
    int k = 0, n = 10; 
    for (int i = 1; i <= n; i++)
    {
        // инициализация операндов случайными числами от 1 до 10
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        cout << a << " * " << b << " = ";
        cin >> c;

        if (a * b != c)
        {
            k++; //операция «инкремент», аналогично: k = k + 1
            cout << "Ошибка!";
            cout << a << " * " << b << " = " << a * b << endl;
        }
        else
        {
            cout << "Все верно!" << endl;
        }
    }
    cout << "Всего ошибок: " << k << endl;
    return 0;
}