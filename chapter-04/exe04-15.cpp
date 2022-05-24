// Exercise 4.15: exe04-15.cpp

// A large company pays its salespeople on comission basis. The salespeople
// each receive $200 per week plus 9% of their gross sales for that week.
// For example, a salesperson who sells $5000 worth of chemicals in a week
// receives $200 plus 9% of $5000, or a total $650. Develop a C++ program
// that uses a `while` statement to input each salesperson's gross sales for
// last week and calculates and displays that salesperson's earnings.
// Process one salesperson's figures at a time.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double baseSalary = 200;
    double percentComission = 9.0;

    double grossSales, totalSalary;
    cout << "Enter sales in dollars (-1 to end): "
        << fixed << setprecision(2);
    cin >> grossSales;

    while(grossSales != -1.) {
        totalSalary = baseSalary + grossSales * percentComission / 100.;
        cout << "Salary: $" << totalSalary << "\n";

        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> grossSales;
    }

}

