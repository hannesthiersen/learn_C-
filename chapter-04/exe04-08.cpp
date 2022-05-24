// Exercise 4.8:    exe04-08.cpp

// Write a C++ program that uses the statements in Exercise 4.7 to calculate
// `x` raised to the `y` power. The program should have a `while` repetition
// statement.

#include <iostream>

using namespace std;

int main() {

    unsigned int x,y;
    unsigned int i = 0;
    unsigned int power = 1;

    cout << "Insert values for x^y.\nx = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    while (i < y) {

        power *= x;
        i++;

    }

    cout << x << "^" << y << " = " << power << "\n";

}
