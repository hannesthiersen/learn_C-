// Fig. 3.12: Account.cpp

#include <iostream>
#include "Account.h"

Account::Account(int initBalance) {
    setBalance(initBalance);
}


void Account::credit(int creditAmount) {
    if (creditAmount > 0)
        balance += creditAmount;
    else
        std::cerr << "Invalid credit amount. Nothing done.\n";
}


void Account::debit(int debitAmount) {
    if (debitAmount > 0)
        if (balance - debitAmount)
            balance -= debitAmount;
        else
            std::cerr << "Debit amount exceeds balance.\n";
    else
        std::cerr << "Invalid debit amount. Nothing done.\n";
}


const int Account::getBalance() {
    return balance;
}


void Account::setBalance(int newBalance) {
    if (newBalance > 0)
        balance = newBalance;
    else {
        balance = 0;
        std::cerr << "Invalid initial balance. Balance set to 0.\n";
    }
}

