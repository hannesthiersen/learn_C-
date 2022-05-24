// Exercise 4.5:    exe04-05.cpp

// Combine the statements that you wrote in Exercise 4.4 into a program that
// calculates and prints the sum of the intergers from 1 to 10. Use teh `while`
// statement to loop through the calcualtion and increment statemnts. The loop
// should terminate when the value of `x` becomes 11.

#include <iostream>

using namespace std;

int main() {

    unsigned int count = 0;
    unsigned int sumCount = 0;

    while (count < 11) {

        sumCount += count;
        cout << count << " - " << sumCount << "\n";
        count++;
    }

}
