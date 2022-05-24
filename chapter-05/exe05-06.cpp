// Exe. 5.6:    exe05-06.cpp

// Write a program that uses a for statement to calculate the average of
// several integers. Assume the last value read is the sentinel 9999. For
// example, the sequence 10 9 11 7 9 9999 indicates that the program should
// calculate the average of all values preceding 9999.

#include <iostream>

using namespace std;

int main() {

    int numberOfValues = 0;
    int totalSum = 0;
    int valueRead = 0;
    int sentinel = 9999;
    int integerAve;

    cout << "Enter integer values and then 9999 (e.g. 2 100 300 9999):\n";

    for (numberOfValues=0; numberOfValues<numberOfValues+1; numberOfValues++) {
        cin >> valueRead;
        if (valueRead == sentinel)
            break;
        totalSum += valueRead;
    }

    integerAve = totalSum / numberOfValues;

    cout << "Integer average: " << integerAve << "\n";

}
