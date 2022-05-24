#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int year, int month, int day) :
    dateYear(year) {
        setMonth(month);
        setDay(day);
}


const void Date::displayDate() {
    cout << getYear() << "/"
        << getMonth() << "/"
        << getDay() << "\n";
}


const int Date::getDay() {
    return dateDay;
}


const int Date::getMonth() {
    return dateMonth;
}


const int Date::getYear() {
    return dateYear;
}


void Date::setDay(int day) {
    dateDay = day;
    if (31 < day || day < 1) {
        cerr << "Invalid day \"" << day << "\". "
            "Day set to 1 instead."
            "\n";
        dateDay = 1;
    }
}


void Date::setMonth(int month) {
    dateMonth = month;
    if (12 < month || month < 1) {
        cerr << "Invalid month \"" << month << "\". "
            "Month set to 1 instead."
            "\n";
        dateMonth = 1;
    }
}


void Date::setYear(int year) {
    dateYear = year;
}



