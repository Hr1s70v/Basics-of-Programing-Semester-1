#include <windows.h>
#include <iostream>
#include <unordered_set>

using namespace std;


bool hasDuplicates(int a) {
    
    unordered_set<int> digits;

    while (a > 0) {
        int currentDigit = a % 10;
        if (digits.find(currentDigit) != digits.end())
            return true; // ��� ������� �� ������ � {unordered_set} ����� ��� ��������
        digits.insert(currentDigit);
        a /= 10; // �������� ���������� �����
    }
    return false;
}

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");

    
    int a;

    cout << "�������� ������������� �����:";
    cin >> a;

    if (hasDuplicates(a))
        cout << "0";
    else
        cout << "1";

    return 0;


}

