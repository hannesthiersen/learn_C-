// Exe. 5.9:    exe05-09.cpp

// Write a program that uses a for statement to calculate and print the product
// of the odd integers from 1 to 15.

#include <iostream>

using namespace std;

int main() {

    int oddProduct = 1;

    for (int i=0; i<8; i++) {
        oddProduct *= 2*i + 1;
    }

    cout << "Odd Product for integers 1-15: "
        << oddProduct << "\n";

}
