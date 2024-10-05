#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y; 
};

double distance(Point A, Point B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
}

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");

    Point A = { 0, 0 };
    Point B = { 25, 0 };
    Point C = { 0, 50 };

    double a = distance(B, C);
    double b = distance(A, C);
    double c = distance(A, B);

    // 1e-9 - used for calculations with a floating ,
 
    if (fabs(a * a + b * b - c * c) < 1e-9 ||
        fabs(b * b + c * c - a * a) < 1e-9 || 
        fabs(a * a + c * c - b * b) < 1e-9) {
        cout << "Триъгълникът е правоъгълен." << endl;
    }
    else if (a * a + b * b > c * c && b * b + c * c > a * a && a * a + c * c > b * b) {
        cout << "Триъгълникът е остроъгълен." << endl;
    }
    else {
        cout << "Триъгълникът е тъпоъгълен." << endl;
    }

    return 0;
}