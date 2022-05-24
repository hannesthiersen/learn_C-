// Exercise 4.27: exe04-27.cpp

// Input an integer containing only 0s and 1s (i.e. a ``binary'' integer) and
// print its decimal equivalent. Use the modulus and division operators to pick
// off the ``binary'' number's digits one at a time from right to left. Much as
// in the decimal number system, where the rightmost digit has a positional
// value of 1, the next digit left has a positional value of 10, then 100, then
// 1000, and so on, in the binary number system the rightmost digit has a
// positional value of 1, the next digit left has a positional value of 2, then
// 4, then 8, and so on. Thus the decimal number 234 can be interpreted as
// 2*100 + 3*10 + 4*1. The decimal equivalent of binary 1101 is 1*1 + 0*2 + 4*1
// + 8*1 = 13.

#include <iostream>

using namespace std;

int main() {

    int digit = 0;
    int number = digit;
    bool valid; // initial value false to enter loop

    cout << "Enter a binary digit (only 0s and 1s): ";
    cin >> digit;

    // validation
    number = digit;
    valid = true;
    while (number>1) {
        valid = valid && (number % 10 == 0 || number % 10 == 1);
        number /= 10;
    }

    while(!valid) {
        cout << "error: " << digit << " is not a binary digit; e.g. '1011'.\n";
        cout << "Enter a binary digit (only 0s and 1s): ";
        cin >> digit;

        number = digit;
        valid = true;
        while (number>1) {
            valid = valid && (number % 10 == 0 || number % 10 == 1);
            number /= 10;
        }

    }

    int decimal = 0;
    int position = 1;
    number = digit;
    while (number >= 1) {
        decimal += position * (number % 10);
        number /= 10;
        position *= 2;
    }

    cout << digit << " <=> " << decimal << "\n";

}
