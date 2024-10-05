#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	int m, n;
	cout << "Enter starting number: ";
	cin >> m;
	cout << "Enter ending number:";
	cin >> n;

	cout << "Even numbers between " << m << " and " << n << " are: ";
	for (size_t i = m; i < n; i++)
	{
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
    

}