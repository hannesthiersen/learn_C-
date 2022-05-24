// Exe. 3.17: exe03-17.cpp

// A health care issue that has been in the news lately is computerization of
// health records. This possibly is being approached cautiously because of
// sensitive privacy and security concerns, among others. Computerizing health
// records could make it easier for patients to share their health profiles and
// histories among their various health care professionals. This could improve
// the quality of health care, help avoid drug conflicts and errorneous drug
// prescriptions, reduce costs and in emergencies, could save lives. In this
// exercise, you'll design a ``starter'' `HealthProfile` class for a person.
// The class attribures should include the person's first name, last name,
// gender, date of birth (consisting of separate attributes for the month, day
// and year of birth), height (in inches) and weight (in pounds). Your class
// should have a constructor that receives this data. for each attribute,
// provide *set* and *get* functions. the class also should include functions
// that calculate and return the user's age in years, maximum heart rate and
// target-heart-rate range, and body mass index. Write an application that
// prompts for the person's information, instantiates an object of class
// `HealthProfile` for that person and prints the information from that object
// -- including the person's first name, last name, gender, date of birth,
// height and weight -- then calculates and prints the person's age in years,
// BMI, maximum heart rate and target-heart-rate range. It should also display
// the ``BMI values'' chart from Exercise 2.30. Use the same technique as
// Exercise 3.16 to calculate the person's age.

#include <iostream>
#include <string>
#include "HealthProfile.h"

using namespace std;


void displayProfile(HealthProfile profile) {
    int age = profile.getAge();
    int maximumHeartRate = profile.getMaximumHeartRate();
    int targetHeartRate = profile.getTargetHeartRate();

    cout << "\n" "Patient Profile" "\n" "---------------" "\n"
        << "Name: "
        << profile.getFirstName() << " " << profile.getLastName() << "\n"
        << "Gender: " << profile.getGender() << "\n"
        << "Date of birth: "
        << profile.getYearOfBirth() << "/" << profile.getMonthOfBirth() << "/"
        << profile.getDayOfBirth() << "\n"
        << "Height: " << profile.getHeight() << " cm" "\n"
        << "Weight: " << profile.getWeight() << " kg" "\n"
        << "Body mass index (BMI): " << profile.getBodyMassIndex() << "\n"
        << "Age: " << age << "\n"
        << "Maximum heart rate (bpm*): "
        << maximumHeartRate << "\n"
        << "Target heart rate (bpm): " << targetHeartRate << "\n"
        << "\n* bpm := beats per minute" "\n";
}


int main() {

    string firstName, lastName;
    cout << "First name: ";
    cin >> firstName;

    cout << "Last name: ";
    cin >> lastName;

    char gender;
    cout << "Gender (M/F): ";
    cin >> gender;

    int year, month, day;
    cout << "Date of birth (YYYY MM DD): ";
    cin >> year >> month >> day;

    int height, weight;
    cout << "Height (in centimeters): ";
    cin >> height;

    cout << "Weight (in kilograms): ";
    cin >> weight;

    HealthProfile patient(firstName, lastName, gender,
            year, month, day, height, weight);

    displayProfile(patient);

}


