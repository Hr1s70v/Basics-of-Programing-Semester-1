#include <windows.h>
#include <iostream>
#include <unordered_set>

using namespace std;


bool hasDuplicates(int a) {
    
    unordered_set<int> digits;

    while (a > 0) {
        int currentDigit = a % 10;
        if (digits.find(currentDigit) != digits.end())
            return true; // If the number is in {unordered_set} then it's a duplicate
        digits.insert(currentDigit);
        a /= 10; // Removes the last number
    }
    return false;
}

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");

    
    int a;

    cout << "Enter a four-digit number:";
    cin >> a;

    if (hasDuplicates(a))
        cout << "0";
    else
        cout << "1";

    return 0;


}

