// Exe. 5.29:    exe05-29.cpp

// Legend has it that, in 1626 Peter Minuit purchased Manhattan Island for
// $24.00 in barter. Did he make a good investment? To answer this question,
// modify the compound interest program of Fig. 5.6 to begin with a principal
// of $24.00 and to calculate the amount of interest on deposit if that money
// had been kept on deposit until this year (e.g. 387 years through 2013).
// Place the for loop that performs the compound interest calculation in an
// outer for loop that varies the interest rate from 5% to 10% to observe the
// wonders of compound interest.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << fixed << setprecision(2);

    double principal = 24.00;
    int startYear = 1626;
    int endYear = 2022;
    int term = endYear - startYear;

    cout << "Year | 5% | 6% | 7% | 8% | 9% | 10% |\n";

    for (int yearCount=0; yearCount<=term; yearCount++) {

        cout << startYear + yearCount << " | ";

        for (int rate=5; rate<=10; rate++) {
            cout << principal * pow((100.+rate)/100., yearCount) << " | ";
        }

        cout << "\n";

    }

}
