#include <iostream>

using namespace std;

int main()
{
    double mass = 1.5;
    double initialV = 3.0;
    double finalV = 9.0;
    double time = 2.0;

    double deltaV = finalV - initialV;
    double acceleration = deltaV / time;

    double distance = (finalV * finalV - initialV * initialV) / (2 * acceleration);
    double force = mass * distance;
    double work = force * distance;
    double power = work / time;

    cout << "Work (A): " << work << endl;
    cout << "Power (P): " << power << endl;
    
}
