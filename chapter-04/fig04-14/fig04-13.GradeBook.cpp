// Fig. 4.9: fig04-09.GradeBook.cpp
// Member-function definitions for class GradeBook that solves the class
// average program with coutner-controlled repetition.

#include <iostream>
#include <iomanip>
#include "fig04-12.GradeBook.h"

using namespace std;


GradeBook::GradeBook(string name) {
    setCourseName(name);
}


void GradeBook::setCourseName(string name) {
    if (name.size() <= 25)
        courseName = name;
    else {
        courseName = name.substr(0, 25);
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    }
}


const string GradeBook::getCourseName() {
    return courseName;
}


const void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;
}


const void GradeBook::determineClassAverage() {

    int total = 0;
    unsigned int gradeCounter = 0;

    cout << "Enter grade or -1 to quit: ";
    int grade = 0;
    cin >> grade;

    while (grade != -1) {

        total += grade;
        gradeCounter += 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if (gradeCounter != 0) {

        double average = static_cast< double >(total) / gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is "
            << total << endl;
        cout << setprecision(2) << fixed;
        cout << "Class average is " << average << endl;
    }
    else
        cout << "No grades were entered" << endl;

}




































