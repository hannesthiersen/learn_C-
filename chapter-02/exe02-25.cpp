// Exe. 2.25    exe02-25.cpp

// Write a program that reads in two integers and determines and prints if the
// first is a multiple of the second. [**Hint:** Use modulus operator]

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int x, y;

    cout << "Enter two integers [seperated by spaces]: ";
    cin >> x >> y;

    if (y % x == 0)
        cout << x << " is a multiple of " << y << ".\n";
    else
        cout << x << " is NOT a multiple of " << y << ".\n";


    return 0;
}
