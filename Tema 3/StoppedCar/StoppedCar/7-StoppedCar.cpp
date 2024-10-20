#include <iostream>

using namespace std;

int main()
{

	double a, v, t, d;

	cout << "Car acceleration: ";
	cin >> a;
	cout << "Truck speed: ";
	cin >> v;

	t = (2 * v) / a;
	d = 0.5 * a * t * t;

	cout << "The car will catch up to the truck in " << t << "s." << endl;
	cout << "The distance after the traffic light at which the car will catch up: " << d << "m" << endl;

}
