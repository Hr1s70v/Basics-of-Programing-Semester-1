#include <windows.h>
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    
    SetConsoleOutputCP(1251);

    int h = 40;
    int e = 800;
    double g;

    cout << "Enter the acceleration of the earth: ";
    cin >> g;

    double v = sqrt(2 * g * h);
    double m = (2 * e) / (v * v);

    cout << "v= " << v << endl;
    cout << "m= " << m << endl;


}
