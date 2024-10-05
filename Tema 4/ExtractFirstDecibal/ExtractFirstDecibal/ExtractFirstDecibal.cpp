#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");


    double b;

    cout << "Въведете стойност за b : ";
    cin >> b;

    if (b > 0)
    {
        int firstnum = static_cast <int>(b); // Запазваме само първата цялата част от числото
        cout << firstnum << endl;
    }
    else
        cout << "Отрицателно число";

    return 0;
}
