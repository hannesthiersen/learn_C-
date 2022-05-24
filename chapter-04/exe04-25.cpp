// Exercise 4.25: exe04-25.cpp

// Write a program that reads in the size of a square then prints a hollow
// square of that size out of asterisks and blanks. Your program should work
// for squares of all side sizes between 1 and 20. For example, if your program
// reads a size of 5 it should print

// > *****
// > *   *
// > *   *
// > *   *
// > *****

#include <iostream>

using namespace std;

int main() {

    int size = 0;

    // capture input
    cout << "Insert square size (side length, 1-20): ";
    cin >> size;

    while (size > 20 || size < 1) {
        cout << "ERROR: Invalid size. Input a number from 1-20: ";
        cin >> size;
    }

    // draw sqaure
    // top
    for (int i=0; i<size; i++)
        cout << "*";
    cout << "\n";

    // middle
    if (size > 2) {
        for (int m=0; m<size-2; m++) {
            cout << "*";
            for (int k=0; k<size-2; k++) {
                cout << " ";
            }
            cout << "*\n";
        }
    }

    // bottom
    if (size > 1) {
        for (int j=0; j<size; j++)
            cout << "*";
        cout << "\n";
    }


}
