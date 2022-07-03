#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int MAX = 5000;
    char str[MAX];
    cin.get(str, MAX, '*');
    ofstream out("verse");
    if (!out)
    {
        return 1;
    }
    out << str;
   
}
