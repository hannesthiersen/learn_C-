// Exercise 4.32: exe24-32.cpp

// Write a program that reads three nonzero `double` values and  determines and
// prints whether they could represent the sides of a triangle.

#include <iostream>

using namespace std;

int main() {

    // side lengths
    double a, b, c;

    cout << "Enter 3 side lengths: ";
    cin >> a >> b >> c;

    bool isTriangle = true;

    // if !(a < b + c)
    if (a > b + c)
        isTriangle =  false;

    // if !(b < a + c)
    if (b > a + c)
        isTriangle =  false;

    // if !(c < a + b)
    if (c > a + b)
        isTriangle =  false;


    if (isTriangle)
        cout << "Side lengths could represent a triangle.\n";
    else
        cout << "Side lenghts cannot represent a triangle.\n";

}
