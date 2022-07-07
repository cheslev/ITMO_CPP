#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;
struct Time
{
    int hours, minutes, seconds;

    void InputTime()
    {
        cout << "\n введите время в формате часы, минуты, секунды.: ";
        cin >> hours >> minutes >> seconds;
    }
    void ShowTime()
    {
        cout << hours << minutes << seconds << endl;
    }
    int TimeSec()
    {
        return hours * 3600 + minutes * 60 + seconds;
    }
    void AddTime(Time t)
    {
        int addSec = TimeSec() + t.TimeSec();
        hours = addSec / 3600;
        minutes = (addSec % 3600) / 60;
        seconds = addSec % 60;
    }
    void SubtractTime(Time t)
    {
        int subSec = abs(TimeSec() - t.TimeSec());
        hours = subSec / 3600;
        minutes = (subSec % 3600) / 60;
        seconds = subSec % 60;
    }
};
void Test()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Контрольные задания.\n";
    cout << "Задание 1. Структура Time\n";
    Time t1;
    Time t2 = { 1, 6, 25 };
    t1.InputTime();
    t1.ShowTime();
    t2.ShowTime();
    cout << t1.TimeSec() << endl;
    t1.AddTime(t2);
    t1.ShowTime();
    t1.SubtractTime(t2);
    t1.ShowTime();

}

int main()
{
    Test();
    return 0;
}