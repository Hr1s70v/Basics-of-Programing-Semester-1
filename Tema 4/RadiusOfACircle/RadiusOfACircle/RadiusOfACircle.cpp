#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y; //Структура на точките
};

double distance(Point A, Point B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)); //Намираме разстоянието между две точки
}

double heron(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    SetConsoleOutputCP(1251);

    // Задаваме кординати
    Point A = { -2, 2.5 };
    Point B = { 5, 2.5 };
    Point C = { 1, -1.5 };
    // Изчисляваме страните
    double a = distance(B, C);
    double b = distance(A, C);
    double c = distance(A, B);

    double S = heron(a, b, c); // Лице на тригълника
    double p = (a + b + c) / 2; // Полупериметър

    double R = (a * b * c) / (4 * S); // Радиус на описаната окръжност
    double r = S / p; // Радиус на вписаната окръжност

    cout << "Радиус на описаната окръжност:" << R << endl;
    cout << "Радиус на вписаната окръжност:" << r << endl;

    return 0;

}

