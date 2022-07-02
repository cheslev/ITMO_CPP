#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int* max_vect(int length, int* a, int* b)
{
    int* max = new int[length];
    for (int i = 0; i < length; i++)
    {
        max[i] = (a[i] > b[i]) ? a[i] : b[i];
    }
    return max;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]);         
    int* c;                                
    c = max_vect(kc, a, b);             
    for (int i = 0; i < kc; i++)            
        cout << c[i] << " ";
    cout << endl;
    delete[]c;
   
}