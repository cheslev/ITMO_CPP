#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Упражнение 1. Реализация операторов выбора\n";
    cout << "Задание 2. Использование оператора switch при реализации выбора\n\n";

    char op;
    cout << "Сделай свой выбор, собери авто свой мечты: ";
    cin >> op;

    /*switch (op)
    {
        case 'S':
            cout << "Радио играть должно\n";
            cout << "Колеса круглые\n";
            cout << "Мощный двигатель\n";
            break;
        case 'V':
            cout << "Кондиционер хочу\n";
            cout << "Радио играть должно\n";
            cout << "Колеса круглые\n";
            cout << "Мощный двигатель\n";
            break;
        default:
            cout << "Колеса круглые\n";
            cout << "Мощный двигатель\n";
    }*/

    switch (op)
    {
    case 'V':
        cout << "Кондиционер хочу\n";

    case 'S':
        cout << "Радио играть должно\n";
    default:
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
    }

}
