#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int index[8];
	double numbers[8];
	size_t count = 0;

	for (size_t i = 0; i < 8; i++)
	{
		cout << "Enter a number: " << i + 1 << ": ";
		cin >> numbers[i];
	}
	double sum = 0.0;
	for (size_t i = 0; i < 8; i++)
	{
		sum += numbers[i];
	}

	double avg = sum / 8;
	for (size_t i = 0; i < 8; i++)
	{
		if (numbers[i] > avg)
		{
			index[count] = i;
			count++;
		}
	}

	cout << "Indices of elements greater than the average: " << avg;
	for (size_t i = 0; i < count; i++)
	{
		cout << index[i] << " ";
	}

	cout << endl;

	return 0;

}
