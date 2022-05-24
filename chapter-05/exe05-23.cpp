// Exe. 5.23:    exe05-023.cpp

// Write a program that prints the following diamond shape. You may use output
// statements that print a single asterisk (*), a single blank or a single
// newline. Maximize your use of repitition (with nested for statements) and
// minimize the number of output statements.

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int size = -1;
    int space, asterisks;

    for (int i=0; i<size; i++) {

        space = abs(size/2 - i);
        for (int j=0; j<space; j++) {
            cout << " ";
        }

        asterisks = 2*(size/2-space) + 1;
        for (int k=0; k<asterisks; k++) {
        cout << "*";
        }

        cout << "\n";
    }

}
