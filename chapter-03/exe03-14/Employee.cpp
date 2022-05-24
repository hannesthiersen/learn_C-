#include <iostream>
#include "Employee.h"

using namespace std;


Employee::Employee(std::string first, std::string last, int salary) :
    firstName(first),
    lastName(last) {
        setMonthlySalary(salary);
}


const std::string Employee::getFirstName() {
    return firstName;
}


const std::string Employee::getLastName() {
    return lastName;
}


const int Employee::getMonthlySalary() {
    return monthlySalary;
}


void Employee::setFirstName(std::string first) {
    firstName = first;
}


void Employee::setLastName(std::string last) {
    lastName = last;
}


void Employee::setMonthlySalary(int newSalary) {
    monthlySalary = newSalary;
    if (monthlySalary <= 0) {
        cerr << "Invalid monthly salary \"" << newSalary
            << "\". Set to 1 instead" "\n";

        monthlySalary = 1;
    }
}



