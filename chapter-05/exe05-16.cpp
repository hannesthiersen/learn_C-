// Exe. 5.16:    exe05-16.cpp

// Modify Fig. 5.6 so it uses only integers to calculate the compound interest.
// [Hint: Treat all monetary amounts as numbers of pennies. Then "break" the
// result into its dollar and cents portions by using division and modulus
// operations. Insert a period.]

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int principal = 100000; // initial amount before interest
    int amount = principal; // amount on deposit at end of each year
    int rate = 5; // annual interest rate

    int dollars, cents;

    // display headers
    cout << "Year" << setw(21) << "Amount on deposit" << endl;
    cout << setw(4) << "0" << "\t" << amount/100 << "." << amount%100 << endl;

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; year++) {

        // calculate new amount for specified year
        amount = amount * (100 + rate) / 100;

        dollars = amount / 100;
        cents = amount % 100;

        // display the year and the amount
        cout << setw(4) << year << "\t" << dollars << "." << cents << "\n";

    }

}
