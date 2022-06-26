#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания.\n";
    cout << "Задание 3. Размен монет\n";

    int a = 1, b = 2, c = 5, d = 10; //Номиналы монет
    int sum; //Переменная в которую заносится вводимая сумма
    int rez = 0; //результат деления суммы на 10 без остатка
    int leftover = 0; //остаток от деления вводимой суммы на 10
    int altrez = 0; //отображениt кол-ва монет с окончанием, отличным от нуля

    string header = "Требуемые для размена номиналы монет и их количество: ";

    cout << "Введите сумму для размена: ";
    cin >> sum;

    rez = sum / d;

    if (sum % d == 0)
    {
        cout << header << endl;
        cout << "Номинал монеты: " << d << " копеек." << " Кол-во монет, требуемых для размена: " << rez << " шт." << endl;
    }
    else if (sum % d != 0)
    {
        cout << header << endl;
        cout << "Номинал монеты: " << d << " копеек." << " Кол-во монет, требуемых для размена: " << rez << " шт." << endl;
        leftover = sum % d;
        if (leftover == 1)
        {
            altrez = leftover / leftover;
            cout << "Номинал монеты: " << a << " копейка." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
        }
        else if (leftover == 2 || leftover == 4 || leftover == 6)
        {
            altrez = leftover / 2;
            cout << "Номинал монеты: " << b << " копейки." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
        }
        else if (leftover == 3)
        {
            altrez = leftover - 2;
            cout << "Номинал монеты: " << b << " копейки." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
            altrez = leftover - 2;
            cout << "Номинал монеты: " << a << " копейка." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
        }
        else if (leftover == 5)
        {
            altrez = leftover / leftover;
            cout << "Номинал монеты: " << c << " копеек." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
        }
        else if (leftover == 7)
        {
            altrez = leftover - 6;
            cout << "Номинал монеты: " << c << " копеек." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
            altrez = leftover - 6;
            cout << "Номинал монеты: " << b << " копейки." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
        }
        else if (leftover == 8)
        {
            altrez = leftover / leftover;
            cout << "Номинал монеты: " << c << " копеек." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
            altrez = leftover - 7;
            cout << "Номинал монеты: " << b << " копейки." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
            altrez = leftover - 7;
            cout << "Номинал монеты: " << a << " копейка." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
        }
        else if (leftover == 9)
        {
            altrez = leftover - 8;
            cout << "Номинал монеты: " << c << " копеек." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
            altrez = leftover / 3 - 1;
            cout << "Номинал монеты: " << b << " копейки." << " Кол-во монет, требуемых для размена: " << altrez << " шт." << endl;
        }
    }
}
