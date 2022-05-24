// Exe. 2.19    exe02-19.cpp
// Write a program that inputs three integers from the keyboard and prints the
// sum, average, product, smallest, and largest of these numbers. The screen
// dialog should appear as follows:
//      Input three different integers: 13 27 14
//      Sum is 54
//      Average is 18
//      Product is 4914
//      Smallest is 13
//      Largest is 27

#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int x, y, z;
    cout << "Input three different integers: ";
    cin >> x >> y >> z;

    // Addition
    int intsum = x + y + z;
    cout << "Sum is " << intsum << "\n";

    // Average
    cout << "Average is " << intsum / 3 << "\n";

    // Product
    cout << "Product is " << x * y * z << "\n";

    int smallest, largest;
    if (x>y)
    {
        smallest = y;
        largest = x;
    }
    else
    {
        smallest = x;
        largest = y;
    }

    if (smallest>z)
        smallest = z;
    // Smallest
    cout << "Smallest is " << smallest << "\n";

    if (largest<z)
        largest = z;
    // Largest
    cout << "Largest is " << largest << "\n";

    return 0;

}
