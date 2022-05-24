// Exercise 4.30: exe04-30.cpp

// Write a program that reads the radius of a circle (as a `double` value) and
// computes and prints the diameter, the circumference and the area. use the
// value 3.14159 for \pi.

#include <iostream>

using namespace std;

int main() {

    double radius = 0.0;
    double PI = 3.14159;

    cout << "Enter circle radius: ";
    cin >> radius;

    cout << "Diameter = " << radius * 2 << "\n";
    cout << "Circumference = " << radius * radius * PI << "\n";

}
