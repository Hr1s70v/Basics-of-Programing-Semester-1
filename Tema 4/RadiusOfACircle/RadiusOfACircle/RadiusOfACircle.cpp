#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y; //��������� �� �������
};

double distance(Point A, Point B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)); //�������� ������������ ����� ��� �����
}

double heron(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    SetConsoleOutputCP(1251);

    // �������� ���������
    Point A = { -2, 2.5 };
    Point B = { 5, 2.5 };
    Point C = { 1, -1.5 };
    // ����������� ��������
    double a = distance(B, C);
    double b = distance(A, C);
    double c = distance(A, B);

    double S = heron(a, b, c); // ���� �� ����������
    double p = (a + b + c) / 2; // �������������

    double R = (a * b * c) / (4 * S); // ������ �� ��������� ���������
    double r = S / p; // ������ �� ��������� ���������

    cout << "������ �� ��������� ���������:" << R << endl;
    cout << "������ �� ��������� ���������:" << r << endl;

    return 0;

}

