#include <windows.h>
#include <iostream>
#include <unordered_set>

using namespace std;


bool hasDuplicates(int a) {
    
    unordered_set<int> digits;

    while (a > 0) {
        int currentDigit = a % 10;
        if (digits.find(currentDigit) != digits.end())
            return true; // Ако числото се намира в {unordered_set} значи има дубликат
        digits.insert(currentDigit);
        a /= 10; // Премахва последното число
    }
    return false;
}

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");

    
    int a;

    cout << "Въведете четирицифрено число:";
    cin >> a;

    if (hasDuplicates(a))
        cout << "0";
    else
        cout << "1";

    return 0;


}

