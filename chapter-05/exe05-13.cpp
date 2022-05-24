// Exe. 5.13:    exe05-13.cpp

// One interesting application of computers is drawing graphs and bar charts.
// Write a program that reads five numbers (each between 1 and 30). Assume that
// the user enters oly valid values. For each number that is read, your program
// should print a line containing that number of adjacent asterisks. For
// example, if your program reads the number 7, it should print *******.

#include <iostream>

using namespace std;

int main() {

    int readInteger;

    cout << "Enter five itegers between 1-30: ";

    for (int i=0; i<5; i++) {
        cin >> readInteger;
        cout << readInteger << " ";

        for (int j=0; j<readInteger; j++)
            cout << "*";

        cout << "\n";
    }

}
