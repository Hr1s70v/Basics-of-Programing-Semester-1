#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    
    cout << "Enter a value for rows (n): ";
    cin >> n;
    cout << "Enter a value for columns (m): ";
    cin >> m;

    int** a = new int* [n]; 
    for (int i = 0; i < n; i++) {
        a[i] = new int[m]; 
    }

    int** b = new int* [n]; 
    for (int i = 0; i < n; i++) {
        b[i] = new int[m];
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            cout << "Element [" << i << "]" << "[" << j << "]:";
            cin >> a[i][j];
        }
    }
    int inc;
    cout << "Enter the number to add to each element: ";
    cin >> inc;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i][j] = a[i][j] + inc;
        }
    }

    cout << "New matrix after incrementing each element: " << endl;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";

        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i]; 
        delete[] b[i]; 
    }
    delete[] a; 
    delete[] b;

    return 0;
}

