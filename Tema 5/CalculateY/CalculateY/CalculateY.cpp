#include <windows.h>
#include <iostream>

using namespace std;


double calculateY(double x, double b, double a) {
    double y;
    if (x <= 0) {
        y = (x * x * b) / (2 - x);
    }
    else {
        y = (a * x * x) / (2 + x);
    }
    return y;
}


int main() {
    double x, a, b;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    double y = calculateY(x, a, b);
    cout << "The value of y is: " << y << endl;
    return 0;
}