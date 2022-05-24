// Exercise 4.19: exe04-19.cpp

// Using an approach similar to that in Exercise 4.17, find the two largest
// values among 10 number. [Note: You must input each number only once.]

#include <iostream>

using namespace std;

int main() {

    int counter = 0;
    double number, largest, largest2nd;

    // first number is always the largest among itself
    cout << "Enter number: ";
    cin >> largest;
    counter++;

    while (counter < 10) {

        cout << "Enter number: ";
        cin >> number;

        if (counter == 1 && largest > number)
            largest2nd = number;

        if (number > largest) {
            largest2nd = largest;
            largest = number;
        }

        counter++;

    }

    cout << "Largest number: " << largest << "\n";
    cout << "2nd largest number: " << largest2nd << "\n";

}
