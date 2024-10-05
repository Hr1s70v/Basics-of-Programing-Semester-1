#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num, sum = 0;
    int count = 0;
    double minNum = numeric_limits<double>::max();
    double maxNum = numeric_limits<double>::lowest();
        
    while (true) {
        cout << "Input a positive number: ";
        cin >> num;

        if (num <0)
        {
            break; // Ends the loop after a negative numbe is read
        }

        if (num < minNum)
        {
            minNum = num; // if the number is lower than current minNum it sets sets it as the new lowest number
        }
        
        if (num > maxNum)
        {
            maxNum = num; // if the number is bigger than the current maxNum it sets it as the new biggest number
        }

        sum += num; // Sums up our numbers so we can use them for average
        count++; // Coutns how many numbers we have inputed

    }
    if (count == 0) { // Checks if there has been any input
        cout << "No input detected"; 
    }
    else {
        double avg = sum / count;

        cout << "MinNum: " << minNum << endl;
        cout << "MaxNum: " << maxNum << endl;
        cout << "Average: " << avg<< endl;
    }


}
