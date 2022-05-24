// Exercise 4.16: exe04-16.cpp

// Develop a C++ program that uses a `while` statment to determine the gross
// pay for each of several employees. The company pays ``straight time'' for
// the first 40 hours worked by each employee and pays ``time-and-a-half''
// for all hours worked in excess of 40 hours. You are given a list of the
// employees of the company, the number of hours each employee worked last
// week and the hourly rate of each employee. Your program should input this
// information for each employee and hsould determine and display the
// employee's gross pay.

// | Enter hours worked (-1 to end): 39
// | Enter hourly rate of the employee ($00.00): 10.00
// | Salary is $390.00
// |
// | Enter hours worked (-1 to end): 40
// | Enter hourly rate of the employee ($00.00): 10.00
// | Salary is $390.00
// |
// | Enter hours worked (-1 to end): 41
// | Enter hourly rate of the employee ($00.00): 10.00
// | Salary is $390.00
// |
// | Enter hours worked (-1 to end): -1


#include <iostream>
#include <iomanip>

int main() {

    int hoursWorked;
    int straightTime = 40;
    double hourlyRate, salary;

    cout << "Enter hours worked (-1 to end): ";
    cin >> hoursWorked;

    while () {

        cout << "Enter hourly rate of the employee ($0.00): ";
        cin >> hourlyRate;

        salary = hourlyRate * hoursWorked;
        if (hoursWorked > straightTime)
            salary += (hoursWorked - straightTime) * hourlyRate * 1.5;

        cout << "Salary: " << salary;

        // New loop
        cout << "Enter hours worked (-1 to end): ";
        cin >> hoursWorked;
    }

}





















