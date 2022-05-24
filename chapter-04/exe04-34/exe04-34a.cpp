// Exercise 4.34: exe34-34a.cpp

// The factorail of a nonnegative integer _n_ is written _n!_ (pronouned ``_n_
// factorial'') and is defined as follows:
//      n! = n*(n-1)*(n-2)*...*2*1 (for value of n greater than 1)
// and
//      n! = 1 (for n=0 or n=1)

// For example, 5! = 5*4*3*2*1 = 120. Use `while` statements in each of the
// following:
//  a) Write a program that reads a nonnegative integer and computes and print
//     its factorial
//  b) Write a program that estimates the value of the mathematical constant e
//     by using the formula:
//          e = 1 + 1/1! + 1/2! + 1/3! + ...
//     Prompt the user for the desired accuracy of _e_ (i.e. the number of
//     terms in the summation).
//  c) Write a program that computes the vlaue of e^x by using the formula:
//          e = 1 + x/1! + x/2! + x/3! + ...
//     Prompt the user for the desired accuracy of _e_ (i.e. the number of
//     terms in the summation).

#include <iostream>

using namespace std;

int main() {

    int number = -1;
    int integer;
    int factorial = 1;

    cout << "Enter a nonnegative integer: ";
    cin >> number;

    integer = number;

    while (integer > 0) {
        factorial *= integer;
        integer--;
    }

    cout << number << "! = " << factorial << "\n";
}
