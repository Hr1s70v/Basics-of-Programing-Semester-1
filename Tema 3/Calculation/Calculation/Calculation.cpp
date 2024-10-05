#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double m, n, p, q, r, s, t, x, v1;

    cout << "Въведете стойност за m: ";
    cin >> m;
    cout << "Въведете стойност за n: ";
    cin >> n;
    cout << "Въведете стойност за p: ";
    cin >> p;
    cout << "Въведете стойност за q: ";
    cin >> q;
    cout << "Въведете стойност за r: ";
    cin >> r;
    cout << "Въведете стойност за s: ";
    cin >> s;
    cout << "Въведете стойност за t: ";
    cin >> t;
    cout << "Въведете стойност за x: ";
    cin >> x;

    // Формула А
    v1 = m + (n / (p + (q / (r + (s / t)))));
    cout << "Стойност на v1 по формула а): " << v1 << endl;

    // Формула Б)
    v1 = (sin(sin(sin(x))) + cos(cos(cos(s * x)))) / (abs(log(x)) + abs(cos(x)) + exp(x));
    cout << "Стойност на v1 по формула б): " << v1 << endl;

    return 0;
}
