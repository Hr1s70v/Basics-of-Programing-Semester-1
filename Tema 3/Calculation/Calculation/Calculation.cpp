#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    double m, n, p, q, r, s, t, x, v1;

    cout << "�������� �������� �� m: ";
    cin >> m;
    cout << "�������� �������� �� n: ";
    cin >> n;
    cout << "�������� �������� �� p: ";
    cin >> p;
    cout << "�������� �������� �� q: ";
    cin >> q;
    cout << "�������� �������� �� r: ";
    cin >> r;
    cout << "�������� �������� �� s: ";
    cin >> s;
    cout << "�������� �������� �� t: ";
    cin >> t;
    cout << "�������� �������� �� x: ";
    cin >> x;

    // ������� �
    v1 = m + (n / (p + (q / (r + (s / t)))));
    cout << "�������� �� v1 �� ������� �): " << v1 << endl;

    // ������� �)
    v1 = (sin(sin(sin(x))) + cos(cos(cos(s * x)))) / (abs(log(x)) + abs(cos(x)) + exp(x));
    cout << "�������� �� v1 �� ������� �): " << v1 << endl;

    return 0;
}
