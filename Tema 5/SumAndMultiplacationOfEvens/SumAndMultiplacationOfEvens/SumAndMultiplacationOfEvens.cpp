#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	
	int m, n, sum = 0, count = 0;
	int product = 1; // multiplying by 0 will give us 0

	cout << "Enter starting number: ";
	cin >> m;
	cout << "Enter ending number:";
	cin >> n;

	for (size_t i = m; i < n; i++)
	{
		if (i % 2 == 0) {
			sum += i;
			product *= i;
			count++;
		}
	}

	cout << "Sum of even numbers between " << m << " and " << n << " is: " << sum << endl;
	cout << "Product of even numbers between " << m << " and " << n << " is: " << product << endl;
	cout << "Count of even numbers: " << count << endl; // Not required, did it just cuz?
    

}


