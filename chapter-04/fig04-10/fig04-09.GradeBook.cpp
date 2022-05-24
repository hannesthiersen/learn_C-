// Fig. 4.9: fig04-09.GradeBook.cpp
// Member-function definitions for class GradeBook that solves the class
// average program with coutner-controlled repetition.

#include <iostream>
#include "fig04-08.GradeBook.h"

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
    unsigned int gradeCounter = 1;

    while (gradeCounter <= 10) {
        cout << "Enter grade: ";
        int grade = 0;
        cin >> grade;
        total = total + grade;
        gradeCounter += 1;
    }

    int average = total / 10;

    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;

}


