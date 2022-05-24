// Exe. 2.5     exe02-05.cpp
// Using the statements you wrote in Exercise 2.4, write a complete program
// that calculates and displays the product of three integers. Add comments to
// the code where appropriate. [**Note**: You'll need to write the necessary
// `using` declarations or directive.]
//
// Exercise 2.4:
// Write a statement (or comment) to accomplish each of the following (assume
// that `using` declarations have been used for `cin`, `cout` and `endl`):
//  a)  State that a program calculates the product of three integers.
//  b)  Declare the variables `x`, `y`, `z` and `result` to be of type `int`
//      (in seperate statements) and initialize each to 0.
//  c)  Prompt the user to enter three integers.
//  d)  Read three integers from the keyboard and store them in the variables
//      `x`, `y` and `z`.
//  e)  Compute the product of the three integers contained in variables `x`,
//      `y` and `z`.
//  f)  Print "The product is " followed by the value of the variable `result`.
//  g)  Return a value from `main` indicating that the program terminated
//      successfully.

// Reads three integers, computes their product and prints it to output

#include <iostream>

using std::cin; // program uses cin
using std::cout; // program uses cout
using std::endl; // program uses endl

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int result = 0;

    cout << "Enter three(3) integers: ";
    cin >> x >> y >> z;

    result = x * y * z;

    cout << "The product is " << result << ".\n";

    return 0;

}

