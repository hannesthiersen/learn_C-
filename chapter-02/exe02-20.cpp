// Exe. 2.20    exe02-20.cpp
// Write a program that reads the radius of a circle as an integer and prints
// the circle's diameter, circumference and area. Use the constatn value
// 3.14159 for $\pi$. Do all calculations in output statements. [**Note:** In
// this chapter, we've discussed only integer constants and variables. In
// Chapter 4 we discuss floating point numbers i.e., values that can have
// decimal points.]

#include <iostream>
#define PI 3.14159

using std::cin;
using std::cout;

int main()
{
    int PIe5 = 314159;
    int radius;

    cout << "Enter circle integer radius: ";
    cin >> radius;

    cout << "Diameter is " << 2 * radius << "\n";
    cout << "Circumference is " << 2 *  radius * PI << "\n";
    cout << "Area is " <<  radius * radius * PI << "\n";

    return 0;
}
