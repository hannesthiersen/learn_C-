// Exercise 4.33: exe34-33.cpp

// Write a program that reads three nonzero integers and determines and prints
// whether they're the sides of a right triangle.

#include <iostream>

using namespace std;

int main() {

    // side lengths
    int a, b, c;

    cout << "Enter 3 side lengths (integers required): ";
    cin >> a >> b >> c;

    bool isTriangle = false;

    if (a*a == b*b + c*c)
        isTriangle =  true;

    else if (b*b == a*a + c*c)
        isTriangle =  true;

    else if (c*c == a*a + b*b)
        isTriangle =  true;


    if (isTriangle)
        cout << "Side lengths represent a right triangle.\n";
    else
        cout << "Side lenghts don't represent a right triangle.\n";

}
