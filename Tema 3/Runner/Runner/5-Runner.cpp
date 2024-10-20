#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    int f = 250;
    int t = 20;
    int d = 200;

    double W = f * d;
    double p = W / t;

    cout << "Power: " << p<<endl;
    cout << "Work: " << W << endl;
}