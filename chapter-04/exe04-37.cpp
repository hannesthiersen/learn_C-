// Exercise 4.37: exe34-37.cpp

// World population has grown considerably over the centuries. continued growth
// could eventually challenge the limits of breathable air, drinkable water,
// arable cropland and other precious resources. There is evidence that growth
// has been slowing in recent years and that world popuulation could peak some
// time this century, then satrt to decline.

// For this exercise, research world population growth issues online. Be sure
// to investigate various viewpoints. Get estimates for the current world
// population and its growth rate (the percentage growth each year for the next
// 75 years, using the simplifying assumption that the current growth rate will
// stay constant. Print the results in a table. The first column should display
// the year from year 1 to year 75. The second column should display the
// anticipated world population at the end of that year. The third column
// should display the numerical increase in the world population that would
// occur that year. Using your resutls, determine the year in which the
// population would be double what it is today, if this year's growth rate were
// to persist.

#include <iostream>

using namespace std;

int main() {

    double currentPop = 7.795e9;
    double growthRate = 1.05; // percent
    double futurePop = currentPop;
    double growthPop;
    bool doubled = false;
    int doublingTime = 0;

    cout << "Year\tPopulation\tGrowth\n";

    for (int i=1; i<76; i++) {
        growthPop = futurePop / 100 * growthRate;
        futurePop += growthPop;
        cout << i << "\t" << futurePop << "\t" << growthPop;
        if (futurePop > 2*currentPop && !doubled) {
            cout << " DOUBLED!";
            doubled = true;
            doublingTime = i;
        }
        cout << "\n";
    }

    cout << "Population doubles in " << doublingTime
        << " years for " << growthRate << "\% growth per year\n";

}
