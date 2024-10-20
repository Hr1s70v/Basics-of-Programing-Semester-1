#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");

    double m, n, p, q, r, s, t, x, v1;

    cout << "Enter a value for m: ";
    cin >> m;
    cout << "Enter a value for n: ";
    cin >> n;
    cout << "Enter a value for p: ";
    cin >> p;
    cout << "Enter a value for q: ";
    cin >> q;
    cout << "Enter a value for r: ";
    cin >> r;
    cout << "Enter a value for s: ";
    cin >> s;
    cout << "Enter a value for t: ";
    cin >> t;
    cout << "Enter a value for x: ";
    cin >> x;

    // Formula A
    v1 = m + (n / (p + (q / (r + (s / t)))));
    cout << "Value of v1 by formula a): " << v1 << endl;

    // Formula B)
    v1 = (sin(sin(sin(x))) + cos(cos(cos(s * x)))) / (abs(log(x)) + abs(cos(x)) + exp(x));
    cout << "Value of v1 by formula b): " << v1 << endl;

    return 0;
}
