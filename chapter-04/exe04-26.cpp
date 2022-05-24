// Exercise 4.26: exe04-26.cpp

// A palindrome is a number or a text phrase that reads the same backward as
// forward. For example, each of the following five-digit integers is a
// palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a
// five-digit integer and determines whether it's a palindrome. [Hint: Use the
// division and modulus operators to separate the number into its individual
// digits.]

#include <iostream>

using namespace std;

int main() {

    int digits = 00000;

    cout << "Enter a five-digit number: ";
    cin >> digits;

    while (digits > 1e5 || digits < 1e4 - 1) {
        cout << "error: Invalid number of digits. Ensure that the digit has 5 numbers: ";
        cin >> digits;
    }

    bool palindrome = true;
    palindrome = palindrome && digits % 10 == digits / 10000;
    palindrome = palindrome && digits / 10 % 10 == digits / 1000 % 10;

    if (palindrome)
        cout << digits << " is a palindrome.\n";
    else
        cout << digits << " is NOT a palindrome.\n";

}
