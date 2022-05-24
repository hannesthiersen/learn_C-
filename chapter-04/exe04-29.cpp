// Exercise 4.29: exe04-29.cpp

// Write a program that prints the powers of the integer 2, namely 2, 4, 8, 16,
// 32, 64, etc. Your while loop should not terminate (i.e. you should create an
// infinite loop). To do this, simply use the keyboard `true` as the expression
// for the `while` statment. What happens when you run this program?

#include <iostream>

using namespace std;

int main() {

    int power_2 = 1;


    while (power_2 < 5000) {
        power_2 *= 2;
        cout << power_2 << endl;
    }

    //while (power_2 < 5000) {
    //    power_2 *= 2;
    //    cout << power_2 << endl;
    //}



}
