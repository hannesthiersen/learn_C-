// Fig. 3.16: fig03-16.GradeBook.cpp
// Implementations of the GradeBook member-function definitions. The
// setCourseName function performs validation.

#include <iostream>
#include "fig03-15.GradeBook.h"

using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name){
    setCourseName(name);
}


// function that sets course name;
// ensures that the course name has at most 25 characters
void GradeBook::setCourseName(string name) {
    if (name.size() <= 25) // if name has 25 or fewer characters
        courseName = name; // store the course name in the object

    if (name.size() > 25) { // if name has more than 25 characters
        // set courseName to first 25 character of parameter name
        courseName = name.substr(0, 25); // start at 0, length of 25

        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    }
}


// function to get course name
const string GradeBook::getCourseName() {
    return courseName;
}


// display a welcome message to the GradeBook user
const void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
}


