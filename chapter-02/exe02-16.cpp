// Exe. 2.16     exe02-16.cpp
// Write a program that asks the user to enter two numbers, obtains the two
// numbers from the user and prints the sum, product, difference, and quotient
// of the two numbers.

#include <iostream>

using std::cin; // program uses cin
using std::cout; // program uses cout
using std::endl; // program uses endl

int main()
{
    int x = 0;
    int y = 0;

    cout << "Enter two(2) integers [seperated by spaces]: ";
    cin >> x >> y;

    // Addition
    cout << "The sum is " << x + y << "\n.";

    // Subtraction
    cout << "The difference is " << x - y << "\n.";


    // Multiplication
    cout << "The product is " << x * y << "\n.";


    // Division (integer)
    cout << "The quotient is " << x / y << "\n.";


    return 0;
}

