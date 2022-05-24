// Exe. 2.24    exe02-24.cpp

// Write a program that reads an integer and determines and prints whether it's
// odd or even. [**Hint:** Use the modulus operator. An even number is a
// multiple of two. Any multiple of two leaves a remainder of zero when divided
// by 2.]

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int integer;
    cout << "Enter an integer: ";
    cin >>  integer;

    if (integer % 2 == 0)
        cout << integer << " is even.\n";
    else
        cout << integer << " is odd.\n";

    return 0;
}
