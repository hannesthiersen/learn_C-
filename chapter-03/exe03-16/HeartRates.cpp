#include <iostream>
#include <string>
#include "HeartRates.h"
#include "Date.h"

using namespace std;


HeartRates::HeartRates(
        std::string first,
        std::string last,
        int byear,
        int bmonth,
        int bday) :
    firstName(first),
    lastName(last) {
        setBirthDay(bday);
        setBirthMonth(bmonth);
        setBirthYear(byear);
}


const std::string HeartRates::getFirstName() {
    return firstName;
}


const std::string HeartRates::getLastName() {
    return lastName;
}


const int HeartRates::getAge() {
    // insert current date
    int day, month, year;
    cout << "Insert current date (YYYY MM DD): ";
    cin >> year >>  month >> day;

    // use date object to make crude validations
    Date currentDate(year, month, day);

    // calculate difference in years between current and birth date
    int diffYear = currentDate.getYear() - getBirthYear();
    int diffMonth = currentDate.getMonth() - getBirthMonth();
    if (diffMonth > 0)
        return diffYear;

    if (diffMonth < 0)
        return diffYear -1;

    int diffDay = currentDate.getDay() - getBirthDay();

    if (diffDay < 0)
        return diffYear -1;

    return diffYear;
}


const int HeartRates::getBirthDay() {
    return birthDay;
}


const int HeartRates::getBirthMonth() {
    return birthMonth;
}


const int HeartRates::getBirthYear() {
    return birthYear;
}


const int HeartRates::getMaximumHeartRate() {
    return 220 - getAge();
}


const int HeartRates::getTargetHeartRate() {
    return getLowerBoundTargetHeartRate();
}


void HeartRates::setFirstName(std::string first) {
    firstName = first;
}


void HeartRates::setLastName(std::string last) {
    lastName = last;
}


void HeartRates::setBirthDay(int day) {
    birthDay = day;
    if (day < 1 || day > 31) {
        cerr << "Invalid birth day \"" << day << "\". "
            "Set value to 1 instead.\n";
        birthDay = 1;
    }
}


void HeartRates::setBirthMonth(int month) {
    birthMonth = month;
    if (month < 1 || month > 31) {
        cerr << "Invalid birth month \"" << month << "\". "
            "Set value to 1 instead.\n";
        birthMonth = month;
    }
}


void HeartRates::setBirthYear(int year) {
    birthYear = year;
}


const int HeartRates::getLowerBoundTargetHeartRate() {
    return getMaximumHeartRate() * 50 / 100;
}


const int HeartRates::getUpperBoundTargetHeartRate() {
    return getMaximumHeartRate() * 85 / 100;
}


