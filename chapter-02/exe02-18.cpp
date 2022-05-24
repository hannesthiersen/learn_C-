// Exe. 2.18    exe02-18.cpp
// Write a program that asks the user to enter two integers, obtains the
// numbers from the user, then prints the larger number followed by the words
// "is larger." If the numbers are equal, print the message "These numbers are
// equal."

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int x = 0;
    int y = 0;

    cout << "Enter two(2) integers[seperated by spaces]: ";
    cin >> x >> y;

    if (x > y)
        cout << x << " is larger.\n";

    if (x < y)
        cout << y << " is larger.\n";

    else
        cout << "These numbers are equal.\n";


    return 0;

}
