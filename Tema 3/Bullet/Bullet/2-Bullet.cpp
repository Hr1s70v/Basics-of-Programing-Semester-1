
#include <windows.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");


    const double v = 400.0;
    const double s = 0.8;
    const double m = 5.0;

    double a = (v * v) / (2 * s);
    double F = m * a;

    cout << "The force acting on the bullet is: " << F << " N" << endl;
    
    return 0;
}
