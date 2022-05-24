// Exercise 4.14:   exe04-14.cpp

// Develop a C++ program that will determine whether a department-store
// customer has exceeded the credit limit on a charge account. For each
// customer, the following facts are available:

//  a) Account number (an integer)
//  b) Balance at the beginning of the month
//  c) Total of all items charged by this customer this month
//  d) Total of all credits applied to this customer's account this month
//  e) Allowed credit limit

// The program should use a `while` statement to input each of these facts,
// calculates the new balance (= beginning balance + charges - credits) and
// determine whether the new balance exceeds the customer's credit limit. For
// those customers whose credit limit is exceeded, the program should display
// the customer's account number, credit limit, new balance and the message
// "Credit Limit Exceeded!"

// +---------------------------------------------------------------------------
// | Enter account number (or -1 to quit): 100
// | Enter beginning balance: 5395.78
// | Enter total charges: 1000.00
// | Enter total credits: 500.00
// | Enter credit limit: 5500.00
// | New balance is 5894.78
// | Account:         100
// | Credit limit:    5500.00
// | Balance:         5894.78
// | Credit Limit Exceeded
// |
// | Enter Account Number (or -1 to quit): 200
// | Enter beginning balance: 1000.00
// | Enter total charges: 123.45
// | Enter total credits: 321.00
// | Enter credit limit: 1500.00
// | New balance is 802.45
// |
// | Enter Account Number (or -1 to quit): -1
// +---------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int accountNumber;
    double initBalance, totalCharges, totalCredits,
           creditLimit, newBalance;

    cout << "Enter account number (or -1 to quit): "
        << fixed << setprecision(2);
    cin >> accountNumber;

    while (accountNumber != -1) {

        double initBalance;
        cout << "Enter initial balance: ";
        cin >> initBalance;

        double totalCharges;
        cout << "Enter total charges: ";
        cin >> totalCharges;

        double totalCredits;
        cout << "Enter total credits: ";
        cin >> totalCredits;

        double creditLimit;
        cout << "Enter credit limit: ";
        cin >> creditLimit;

        // calculate balance
        double newBalance = initBalance + totalCharges - totalCredits;

        // Output
        if (creditLimit < newBalance) {
            cout << "Account:\t" << accountNumber << "\n";
            cout << "Credit limit:\t" << creditLimit << "\n";
            cout << "Balance:\t" << newBalance << "\n";
            cout << "Credit Limit Exceeded!\n";
        }

        else
            cout << "New balance: " << newBalance << "\n";


        cout << "\nEnter account number (or -1 to quit): ";
        cin >> accountNumber;

    }

}






























