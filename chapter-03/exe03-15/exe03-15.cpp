// Exe. 3.15: exe03-15.cpp

// Create a class called `Date` that includes three pieces of information as
// data members -- a month (type `int`), a day (type `int`) and a year (type
// `int`). Your class should have a constructor with three parameters that uses
// the parameters to initialize the three data members. For the pupose of this
// exercise, assume that the values provided for the year and day are correct,
// but ensure that the month value is in the range 1-12; if it isn't, set the
// month to 1. Provide a *set* and a *get* function for each data member.
// Provide a member function `displayDate` that displays the month, day and
// year separated by forward slashes (/). Write a test program that
// demonstrates class `Date`'s capabilities.

#include "Date.h"

int main() {

    Date birthday(1992, 6, 19);
    Date falseDate1(2004, -1, -4);
    Date falseDate2(3002, 30, 200);

    birthday.displayDate();
    falseDate1.displayDate();
    falseDate2.displayDate();

}
