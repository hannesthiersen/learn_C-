
// Exe. 5.11:    exe05-11.cpp

// Modify the compound interest program of Section 5.4 to repeat its steps for
// the interest rates 5-10%. Use a for statement to vary the interest rate.

#include <iostream>
#include <iomanip>
#include <cmath> // standard math library

using namespace std;

int main() {

    double interestBaseRate = 5.0; // % (percentile)
    double interestRate;

    double amount; // amount on deposit at end of each year
    double principal = 1000.0; // initial amount before interest

    // set floating-point number format
    cout << fixed << setprecision(2);

    for (int increment=0; increment<=5; increment++) {
        interestRate = interestBaseRate + increment;
        cout << "Interest rate: " << interestRate << "\n";
        cout << "Year" << setw(21) << "Amount on deposit" << endl;
        double rate = interestRate / 100;

        for (int year = 0; year<=10; year++) {

            amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << setw(21) << amount << endl;
        }
        cout << "\n";
    }

}
