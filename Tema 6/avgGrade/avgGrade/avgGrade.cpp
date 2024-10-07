#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	int n;
	double grade[5] = {2,3,4,5,6};

	cout << "Number of students: ";
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cout << "Enter average grade of student " << i + 1 << ": ";
		cin >> grade[i];
	}
	
	bool badGrade = false;

	for (size_t i = 0; i < n; i++)
	{
		if (grade[i]<3.00)
		{
			badGrade = true;
			break;
		}
	}

	if (badGrade)
	{
		cout << "There are students with a bad grade";
	}
	else
		cout << "All students pass.";
}
