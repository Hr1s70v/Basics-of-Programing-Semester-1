#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");


    double b;

    cout << "Enter a value for b: ";
    cin >> b;

    if (b > 0)
    {
        int firstnum = static_cast<int>(floor(b));
        cout << firstnum << endl;
    }
    else
        cout << "Number cannot be negative";

    return 0;
}
