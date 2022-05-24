// Exercise 4.35: exe34-35.cpp

// Write statements that use C++11 list initialization to perform each of the following tasks:
//  a) Initialize the `unsigned int` variable `studentCounter` to 0.
//  b) Initialize the `double` variable `initialBalance` to 1000.0.
//  c) Initialize an object of class `Account` which provides a constructor
//     that receives an `unsigned int`, two `strings` and and a `double` to
//     initialize the object's `accountNumber`, `firstName`, `lastName` and
//     `balance` data members.

#include <iostream>
#include <string>

using namespace std;

class Account {
    private:
        string accountNumber;
        string firstName;
        string lastName;
        double balance;
    public:
        Account(
                string accNum,
                string fName,
                string lName,
                double deposit):
            accountNumber(accNum),
            firstName(fName),
            lastName(lName),
            balance(deposit) {}
};

int main() {

    unsigned int studentCounter{0};
    double initialBalance{1000.0};
    Account customer{"0000", "John", "Smith", initialBalance};

    cout << "If you see this message, initializations were successful.\n";

}
