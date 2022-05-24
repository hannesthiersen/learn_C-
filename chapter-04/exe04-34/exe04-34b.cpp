// Exercise 4.34: exe34-34b.cpp

// The factorail of a nonnegative integer _n_ is written _n!_ (pronouned ``_n_
// factorial'') and is defined as follows:
//      n! = n*(n-1)*(n-2)*...*2*1 (for value of n greater than 1)
// and
//      n! = 1 (for n=0 or n=1)

// For example, 5! = 5*4*3*2*1 = 120. Use `while` statements in each of the
// following:
//  a) Write a program that reads a nonnegative integer and computes and print
//     its factorial
//  b) Write a program that estimates the value of the mathematical constant e
//     by using the formula:
//          e = 1 + 1/1! + 1/2! + 1/3! + ...
//     Prompt the user for the desired accuracy of _e_ (i.e. the number of
//     terms in the summation).
//  c) Write a program that computes the vlaue of e^x by using the formula:
//          e = 1 + x/1! + x/2! + x/3! + ...
//     Prompt the user for the desired accuracy of _e_ (i.e. the number of
//     terms in the summation).

#include <iostream>
#include <iomanip>

using namespace std;

double factorial(int n) {
    int ntrack = n;
    double nfact = 1;

    while (ntrack > 0) {
        nfact *= ntrack;
        ntrack--;
    }

    return nfact;
}

int main() {

    cout << setprecision(12) << fixed;

    int terms;
    double natexp = 1;

    cout << "Enter desired accuracy (number of terms used): ";
    cin >> terms;

    for (int j=0; j<terms; j++) {
        natexp += 1/factorial(j+1);
    }

    cout << "e = " << natexp << "\n";

}
