// Exe. 2.28    exe02-28.cpp

// Write a program that inputs a five-digit integer, seperates the integer into
// its digits and prints them seperated by three spaces each. [**Hint:** Use
// the integer division and modulus operators.] For example if the user types
// in 42339, the program should print:

// |4   2   3   3   9

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int fullInt;

    cout << "Enter a five-digit integer: ";
    cin >> fullInt;

    cout << fullInt / 10000 << "   ";
    fullInt = fullInt % 10000;

    cout << fullInt / 1000 << "   ";
    fullInt = fullInt % 1000;

    cout << fullInt / 100 << "   ";
    fullInt = fullInt % 100;

    cout << fullInt / 10 << "   ";
    fullInt = fullInt % 10;

    cout << fullInt << "\n";

    return 0;

}
