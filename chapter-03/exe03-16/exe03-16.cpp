// Exe. 3.16: exe03-16.cpp

// While exercising, you can use a heart-rate monitor to see that your heart
// rate stays within a safe range suggested by your trainers and doctors.
// According to the Ammerican Heart Association (AHA), the formula for
// calculating your *maximum heart rate* in beats per minute is 220 minus your
// age in years. Your *target heart rate* is a range that is 50-85% of your
// maximum heart rate. Create a class called `HeartRates`. The class attributes
// should include the person's first name, last name and date of birth
// (consisting of separate attributes for the month, day and year of birth).
// Your class should have a constructor that receives this data as parameters.
// For each attribute provide *set* and *get* functions. The class also should
// include a function `getAge` that calculates and returns the person's age (in
// years), a function `getMaximumHeartRate` that calculates and returns the
// person's maximum heart rate and function `getTargetHeartRate` that
// calculates and returns the person's target heart rate. Since you do not yet
// know how to obtain the current date from the computer, function `getAge`
// should prompt the user to enter the current month, day and year before
// calculating the person's age. Write an application that prompts for the
// person's infromation, instantiates an object of class `HeartRates` and
// prints the information from that object -- including the person's first
// name, last name and date of birth -- then calculates and prints the person's
// age (in years), maximum heart rate and target-heart-rate range.

#include <iostream>
#include <string>
#include "HeartRates.h"

using namespace std;


int main() {

    string firstName, lastName;
    int bday, bmonth, byear;

    cout << "Insert first name: ";
    cin >> firstName;

    cout << "Insert last name: ";
    cin >> lastName;

    cout << "Insert date of birth (YYYY MM DD): ";
    cin >> byear >> bmonth >> bday;

    HeartRates patientProfile(firstName, lastName, byear, bmonth, bday);

    cout << "Name;" "  "
        << "Date of birth;" "  "
        << "Maximum heart rate;" "  "
        << "Target heart rate;" "\n";

    cout << patientProfile.getFirstName() << " " << patientProfile.getLastName() << "  "
        << patientProfile.getBirthYear() << "/"
        << patientProfile.getBirthMonth() << "/"
        << patientProfile.getBirthDay() << "  "
        << patientProfile.getMaximumHeartRate() << "  "
        << patientProfile.getTargetHeartRate() << "\n";

}
