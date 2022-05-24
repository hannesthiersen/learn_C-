// Exe. 5.19:    exe05-19.cpp

// Calculate the value of pi from the infinite series
//
// pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
//
// Print a table that shows the approximate value of pi after each of the first
// 1000 terms of this series

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // header
    cout << "Term\tPi\n" << fixed << setprecision(10);

    double pi = 0;

    for (int n=0; n<1000; n++) {
        pi += 4./(2*n+1) * pow(-1, n);
        cout << n+1 << "\t" << pi << "\n";
    }

}
