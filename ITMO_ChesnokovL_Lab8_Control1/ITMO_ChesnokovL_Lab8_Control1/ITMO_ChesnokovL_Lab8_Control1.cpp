#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;
public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int hours, int minutes, int seconds)
    {
        int h = hours + (minutes + seconds / 60) / 60;
        int m = (minutes + seconds / 60) / 60;
        int s = seconds / 60;
    }
    void ShowTime(int hours, int minutes, int seconds)
    {
        this->hours;
        this->minutes;
        this->seconds;
    }
    string Times() const
    {
        string t;
        t.append(to_string(hours / 10));
        t.append(to_string(hours % 10));
        t.append(":");
        t.append(to_string(minutes / 10));
        t.append(to_string(minutes % 10));
        t.append(":");
        t.append(to_string(seconds / 10));
        t.append(to_string(seconds % 10));
        return t;
    }
    int TimeSec() const
    {
        return hours * 3600 + minutes * 60 + seconds;
    }
    Time AddTime(const Time& t) const
    {
        Time summ;
        int addSec = TimeSec() + t.TimeSec();
        summ.hours = addSec / 3600;
        summ.minutes = (addSec % 3600) / 60;
        summ.seconds = addSec % 60;
        return summ;
    }
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Контрольные задания.\n";
    cout << "Задание 1. Класс Time\n";
    Time t1(5, 70, 77);
    Time t2(2, 20, 10);
    Time add;
    add = t1.AddTime(t2);
    cout << t1.Times() << endl;
    cout << t2.Times() << endl;
    cout << add.Times() << endl;
}
