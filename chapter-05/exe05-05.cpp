// Exe. 5.5:    exe05-05.cpp

// Write a program that uses a for statement to sum a sequence of integers.
// Assume that the first integer read specifies the number of values remaining
// to be entered. Your program should read only one value per input statement.
// A typical input sequence might be
//
// |> 5 100 200 300 400 500
//
// where the 5 indicates that the subsequent 5 values are to be summed.

#include <iostream>

using namespace std;

int main() {

    int numberOfValues = 0;
    int totalSum = 0;
    int valueRead = 0;

    cout << "Enter number of values and then each value (e.g. 2 100 300):\n";
    cin >> numberOfValues;

    for (int i=0; i<numberOfValues; i++) {
        cin >> valueRead;
        totalSum += valueRead;
    }

    cout << "Sum of values: " << totalSum << "\n";

}
