#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");


    double b;

    cout << "�������� �������� �� b : ";
    cin >> b;

    if (b > 0)
    {
        int firstnum = static_cast <int>(b); // ��������� ���� ������� ������ ���� �� �������
        cout << firstnum << endl;
    }
    else
        cout << "����������� �����";

    return 0;
}
