// Exe. 5.20:    exe05-20.cpp

// A right triangle can have sides that are all integers. A set of three
// integer values for the sides of a right triangle is called a Pythagorean
// triple. These three sides must satisfy the relationship that the sum of the
// squares of two of the sides is equal to the square of the hypotenuse. Find
// all Pythagorean triples for side1, side2 and hypotenuse all no larger than
// 500. Use a triple-nested for loop that tries all possibilities. This is an
// example of brute force computing. You'll learn in more advanced computer
// science courses that there are many interesting problems for which there's
// no known algorithmic approach other than sheer brute force.

#include <iostream>

using namespace std;

int main() {
    int side1, side2, hyp;
    int limit = 500;

    cout << "Side 1\tSide 2\tHypotenuse\n";

    for (side1=1; side1<=limit; side1++)
        for (side2=side1; side2<=limit; side2++)
            for (hyp=side1; hyp<=limit; hyp++) {
                // break when beyond triangle equality
                if (hyp > side1 + side2)
                    break;

                // break when Pythogorean triple is found.
                // They are unique w.r.t. side1 and side2 combinations.
                if (hyp*hyp == side1*side1 + side2*side2) {
                    cout << side1 << "\t" <<
                        side2 << "\t" << hyp <<  "\n";
                    break;
                }
            }

}
