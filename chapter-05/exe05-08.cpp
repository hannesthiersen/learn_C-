// Exe. 5.8:    exe05-08.cpp

// Write a program that uses a for statement to find the smallest of several
// integers. Assume that the first value read specifies the number of values
// remaining.

#include <iostream>

using namespace std;

int main() {

    int numberOfInts = 0;
    int readInteger = 0;
    int smallest;
    bool first = true;

    cout << "Enter number of integers followed by the integers (e.g. 3 100 200 300):";
    cin >> numberOfInts;

    for (int i=0; i<numberOfInts; i++) {
        cin >> readInteger;
        if (first == true) {
            smallest = readInteger;
            first = false;
        }
        else if (readInteger < smallest) {
            smallest = readInteger;
        }
    }
    cout << "Smallest integer: " << smallest << "\n";
}
