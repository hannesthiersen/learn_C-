// Exe. 3.14: exe03-14.cpp

// Create a class called `Employee` that includes three pieces of information
// as data members -- a first name (type `string`) and a monthly salary (type
// `int`). Your class should have a constructor that initializes the three data
// members. Provide *set* and *get* function for each data member. If the
// monthly salary is not positive, set it to 0. Write a test program that
// demonstrates class `Employee`'s capabilities. Create two `Employee` objects
// and display each object's yearly salary. Then give each `Employee` a 10
// percent raise and display each `Employee`'s yearly salary again.

#include <iostream>
#include "Employee.h"


using namespace std;


void newline() {
    cout << "\n";
}


void displayEmployeeDetails(Employee emp0) {
    cout << "Name: " << emp0.getFirstName() << " " << emp0.getLastName()
        << "\n"
        << "Yearly Salary: " << emp0.getMonthlySalary() * 12 << "\n";
}


int main() {

    Employee emp1("Hannes", "Thiersen", 0);
    Employee emp2("Cornel", "Nel", 80000);

    displayEmployeeDetails(emp1);
    displayEmployeeDetails(emp2);
    newline();

    emp1.setMonthlySalary(emp1.getMonthlySalary() * 110 / 100);
    emp2.setMonthlySalary(emp2.getMonthlySalary() * 110 / 100);

    displayEmployeeDetails(emp1);
    displayEmployeeDetails(emp2);
    newline();

}
