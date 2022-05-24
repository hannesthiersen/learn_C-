// Fig. 3.12: fig03-12.GradeBook.cpp
// GradeBook member-function definitions. This file contains implementations
// of the member functions prototyped in GradeBook.h.

#include <iostream>
#include "fig03-11.GradeBook.h"

using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
    : courseName(name) // member initializer to initialize courseName
{
    // empty body
}


// function to set the course name
void GradeBook::setCourseName(string name)
{
    courseName = name; // store the course name in the object
}


// function to get the course name
const string GradeBook::getCourseName()
{
    return courseName; // return object's courseName
}


// display a welcome message to the GradeBook's user
const void GradeBook::displayMessage()
{
    cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
}

