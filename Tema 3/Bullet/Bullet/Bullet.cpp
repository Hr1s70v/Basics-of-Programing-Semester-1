
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

    cout << "Силата, действаща върху куршума, е: " << F << " N" << endl;
    
    return 0;
}
