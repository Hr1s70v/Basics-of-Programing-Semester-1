#include <math.h>
#include <windows.h>
#include <iostream>

using namespace std;

double x;

void expression1() {
	cout << "Give a value to x: ";
	cin >> x;

	const double y = x - 5;
	
	cout << "y = " << y << endl;
}
void expression2() {
	cout << "Give a value to x: ";
	cin >> x;

	const double y = sin(x);

	cout << " y = " << y << endl;
}
void expression3() {
	cout << "Give a value to x: ";
	cin >> x;

	const double y = cos(x);

	cout << " y = " << y << endl;
}
void expression4() {
	cout << "Give a value to x: ";
	cin >> x;

	const double y = exp(x);
	cout << " y = " << y << endl;
}

int main()
{
	SetConsoleOutputCP(1251);

	int input;

	cout << "Which expression do you want to solve? (1-4): ";
	cin >> input;

	switch (input) {
	case 1:
		expression1();
		break;
	case 2:
		expression2();
		break;
	case 3:
		expression3();
		break;
	case 4:
		expression4();
		break;
	default:
		std::cout << "Invalid input. Please enter a number between 1 and 4." << std::endl;
		break;
	}

}

