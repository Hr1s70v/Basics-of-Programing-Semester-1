#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    const double R = 6340.0; 
    const double h = 280.0; 
    const double PI = 3.141592653589793;

    double avgs;
    cout << "Въведете средната скорост на кораба (km/h):";
    cin >> avgs;

    double r = R + h;

    double circumfrance = 2 * PI * r;

    double time = circumfrance / avgs;
    
    time = ceil(time * 100.0) / 100.0;

    cout << "Време за една обиколка:" << time << " часа." << endl;
}
