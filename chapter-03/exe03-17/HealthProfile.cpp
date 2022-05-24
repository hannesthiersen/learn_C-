#include <iostream>
#include <string>
#include "HealthProfile.h"

using namespace std;


HealthProfile::HealthProfile(
        std::string first,
        std::string last,
        char gender,
        int yearOfBirth,
        int monthOfBirth,
        int dayOfBirth,
        int height,
        int weight) :
    firstName(first),
    lastName(last) {
        setGender(gender);
        setDayOfBirth(dayOfBirth);
        setMonthOfBirth(monthOfBirth);
        setYearOfBirth(yearOfBirth);
        setHeight(height);
        setWeight(weight);
}


const int HealthProfile::getAge() {
    // get current date
    int day, month, year, age, diffMonth;
    cout << "Insert current date (YYYY MM DD): ";
    cin >> year >> month >> day;

    // calculate difference
    age = year - yearOfBirth;
    diffMonth = month - monthOfBirth;

    if (diffMonth > 0)
        return age;

    if (diffMonth < 0)
        return age -1;

    int diffDay = day - dayOfBirth;
    if (diffDay < 0)
        return age -1;

    return age;
}


const int HealthProfile::getBodyMassIndex() {
    return weightField * 100 * 100 / heightField / heightField;
}


const int HealthProfile::getMaximumHeartRate() {
    return 220 - getAge();
}


const int HealthProfile::getTargetHeartRate() {
    return getLowerBoundTargetHeartRate();
}


const int HealthProfile::getDayOfBirth() {
    return dayOfBirth;
}


const std::string HealthProfile::getFirstName() {
    return firstName;
}


const char HealthProfile::getGender() {
    return genderField;
}


const int HealthProfile::getHeight() {
    return heightField;
}


const std::string HealthProfile::getLastName() {
    return lastName;
}


const int HealthProfile::getMonthOfBirth() {
    return monthOfBirth;
}


const int HealthProfile::getWeight() {
    return weightField;
}


const int HealthProfile::getYearOfBirth() {
    return yearOfBirth;
}


void HealthProfile::setDayOfBirth(int day) {
    dayOfBirth = day;
    if (day < 1 || day > 31) {
        cerr << "Invalid day of birth \"" << day << "\". "
            "Value set to 1 instead.\n";
        dayOfBirth = 1;
    }
}


void HealthProfile::setFirstName(std::string first) {
    firstName = first;
}


void HealthProfile::setGender(char gender) {
    genderField = '-';
    if (gender == 'm' || gender == 'M' )
        genderField = 'M';

    else if (gender == 'f' || gender == 'F' )
        genderField = 'F';

    else
        cerr << "Invalid gender \'" << gender << "\'. "
            "Gender set to \'\'." "\n";

}


void HealthProfile::setHeight(int height) {
    heightField = height;
    if (height < 0) {
        cerr << "Invalid height value \"" << height << "\" cm. "
            "Height set to 0 cm instead." "\n";
        heightField = 0;
    }
}


void HealthProfile::setLastName(std::string last) {
    lastName = last;
}


void HealthProfile::setMonthOfBirth(int month) {
    monthOfBirth = month;
    if (month < 1 || month > 31) {
        cerr << "Invalid month of birth \"" << month << "\". "
            "Value set to 1 instead.\n";
        monthOfBirth = 1;
    }
}


void HealthProfile::setWeight(int weight) {
    weightField = weight;
    if (weight < 0) {
        cerr << "Invalid weight value \"" << weight << "\" kg. "
            "Value set to 0 kg instead." "\n";
        weightField = 0;
    }
}


void HealthProfile::setYearOfBirth(int year) {
    yearOfBirth = year;
}


const int HealthProfile::getLowerBoundTargetHeartRate() {
    return getMaximumHeartRate() * 50 / 100;
}


const int HealthProfile::getUpperBoundTargetHeartRate() {
    return getMaximumHeartRate() * 85 / 100;
}



