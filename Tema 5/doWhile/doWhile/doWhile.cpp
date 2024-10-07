#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	unsigned int number;
	int count = 0;

	cout << "Enter a number: ";
	cin >> number;
	
	if (number == 0)
	{
		count = 1;
	}
	else
	{
		do
		{
			number /= 10;
			count++;
		} while (number > 0);
	}
	cout << "Count: " << count << endl;
}

