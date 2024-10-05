#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y; //Point structure
};

double distance(Point A, Point B) {
    return sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)); //Finds the distance between 2 Points
}

double heron(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");


    // Sets coordinates for the points
    Point A = { -2, 2.5 };
    Point B = { 5, 2.5 };
    Point C = { 1, -1.5 };
    // Calculates the sides
    double a = distance(B, C);
    double b = distance(A, C);
    double c = distance(A, B);

    double S = heron(a, b, c); // Triangle Area
    double p = (a + b + c) / 2; // Half perimeter

    double R = (a * b * c) / (4 * S); // Radius of the circumscribed circle
    double r = S / p; // Radius of the inscribed circle

    cout << "Radius of the circumscribed circle:" << R << endl;
    cout << "Radius of the inscribed circle:" << r << endl;

    return 0;

}

