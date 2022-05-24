// Exe. 5.21:    exe05-21.cpp

// A company pays its employees as managers (who receive a fixed weekly
// salary), hourly workers (who receive a fixed hourly wage for up to the first
// 40 hours they work and "time-and-a-half" -- 1.5 times their hourly wage --
// for overtime hours worked), comission workers (who receive $250 plus 5.7
// percent of their gross weekly sales), or pieceworkers (who receive a fixed
// amount of money per item for each of the items they produce -- each
// pieceworker in this company works on only one type of item). Write a program
// to compute the weekly pay for each employee. You do not know the number of
// employees in advance. Each type of employee has its own pay code: Managers
// have code 1, hourly workers have code 2, comission workers have code 3 and
// pieceworkers have code 4. Use a switch to compute each employee's pay
// according to that employee's paycode. Within the switch, prompt the user
// (i.e. the payroll clerk) to enter the appropriate facts your program needs
// to calculate each employee's pay according to that employee's paycode.

#include <iostream>
#include <iomanip>

using namespace std;

void weeklyPayOut(double pay) {
    cout << fixed << setprecision(2)
       << "Weekly Pay: $" << pay << "\n\n";
}

void managerPay() {
    cout << "Manager's Pay:\n";
    cout << "Fixed weekly salary." "\n";
    double pay = 800.00;
    weeklyPayOut(pay);
}

void hourlyPay() {
    cout << "Hourly Worker's Pay:\n";
    int fullHours = 40;
    double hourlyWage;
    cout << "Enter hourly wage (use 10.00): ";
    cin >> hourlyWage;

    int hoursWorked;
    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    double pay = hoursWorked * hourlyWage;
    // adding overtime bonus
    pay += (hoursWorked%fullHours) * hourlyWage * 0.5;

    weeklyPayOut(pay);
}

void comissionPay() {
    cout << "Comission Pay:\n";
    double pay = 250.; // base $250.00 pay
    double grossSales;
    double comissionPercentile = 5.7;

    cout << "Enter gross sales: ";
    cin >> grossSales;

    pay += grossSales * comissionPercentile/100;
    weeklyPayOut(pay);
}

void productionPay() {
    cout << "Production Pay:";
    double payPerItem = 150.00;
    double itemsProduced;

    cout << "Enter number of items produced: ";
    cin >> itemsProduced;

    double pay = payPerItem * itemsProduced;
    weeklyPayOut(pay);

}

void employmentCodePrompt() {
    cout << "Enter employment code('-1' to exit): ";
}

void employmentInputInstructions() {
    cout << "Employment Pay Codes:\n"
        "1" "\t" "Managers" "\n"
        "2" "\t" "Hourly Workers" "\n"
        "3" "\t" "Comission Workers" "\n"
        "4" "\t" "Production Workers" "\n"
        "\n";
}

void errorMessage() {
    cout << "ERROR: Code not understood." "\n";
}

int main() {

    int employmentCode = 0;

    employmentInputInstructions();
    employmentCodePrompt();
    cin >> employmentCode;

    while (employmentCode>=0) {

        switch (employmentCode) {

            case 1:
                managerPay();
                break;

            case 2:
                hourlyPay();
                break;

            case 3:
                comissionPay();
                break;

            case 4:
                productionPay();
                break;

            default:
                errorMessage();
                employmentInputInstructions();
        }

        employmentCodePrompt();
        cin >> employmentCode;

    }

}
