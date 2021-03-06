// Exe. 3.12: exe03-12.cpp

// Create an `Account` class that a bank might use to represent customers' bank
// accounts. Include a data member of type `int` to represent the account
// balance. Provide a constructor that receives an initial balance and uses it
// to initialize the data member. The constructor should validate the initial
// balance to ensure that it's greater than or equal to 0. If not, set the
// balance to 0 and display an error message indicating that the initial
// balance was invalid. Provide three member functions. Member function
// `credit` should add an amount to the current balance. Member function debit
// should withdraw money from the `Account` and ensure that the debit amount
// does not exceed the `Account`'s balance. If it does the balance should be
// left unchanged and teh function should print a message indicating "Debit
// amount exceeded account balance." Memeber function `getBalance` should
// return the current balance. Create a program that creates two `Account`
// objects and tests the member functions of class `Account`.

#include <iostream>
#include "Account.h"

using namespace std;

int main() {

    // test initialization
    Account savings(200);
    Account current(-100);

    // test getBalance method
    cout << "Savings balance := " << savings.getBalance() << "\n";
    cout << "Current balance := " << current.getBalance() << "\n";

    // test credit method
    savings.credit(-100);
    current.credit(400);

    // test getBalance method
    cout << "Savings balance := " << savings.getBalance() << "\n";
    cout << "Current balance := " << current.getBalance() << "\n";

    // test debit method
    savings.debit(150);
    current.debit(-300);

    // test getBalance method
    cout << "Savings balance := " << savings.getBalance() << "\n";
    cout << "Current balance := " << current.getBalance() << "\n";

}

