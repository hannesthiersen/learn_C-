// Fig. 3.16: fig03-16.GradeBook.cpp
// Implementations of the GradeBook member-function definitions. The
// setCourseName function performs validation.

#include <iostream>
#include "GradeBook.h"

using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string courseName, string instructorName){
    setCourseName(courseName);
    setCourseInstructor(instructorName);
}


// function that sets course name;
void GradeBook::setCourseName(string name) {
    // if name has 25 or fewer characters
    if (name.size() <= 25)
        courseName = name;

    else {
        // set courseName to first 25 character of parameter name
        courseName = name.substr(0, 25);

        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    }
}


// function to get course name
const string GradeBook::getCourseName() {
    return courseName;
}


// function that sets instructor's name;
void GradeBook::setCourseInstructor(string name) {
    courseInstructor = name;
}


// function to get course name
const string GradeBook::getCourseInstructor() {
    return courseInstructor;
}


// display a welcome message to the GradeBook user
const void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for: " << getCourseName()
        << "\n"  "This course is presented by: " << getCourseInstructor()
        << "\n";
}


