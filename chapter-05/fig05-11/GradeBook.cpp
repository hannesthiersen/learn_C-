// Fig. 5.11:       GradeBook.cpp
// Member-function definitions for class GradeBook that
// uses a switch statement to count A, B, C, D and F grades

#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

// constructor initializes courseName with string supplied as argument;
// initializes counter data members to 0
GradeBook::GradeBook(string name):
        aCount(0), // initialize count fo A grades to 0
        bCount(0), // initialize count fo B grades to 0
        cCount(0), // initialize count fo C grades to 0
        dCount(0), // initialize count fo D grades to 0
        fCount(0) { // initialize count fo F grades to 0
    setCourseName(name);
}


// function to set the course name; limit name to 25 or fewer characters
void GradeBook::setCourseName(string name) {
    if (name.size() <= 25)
        courseName = name;
    else {
        // set courseName to first 25 characters
        courseName = name.substr(0, 25); // select first 25 characters
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
            << "Limiting courseName to first 25 characters. \n" << endl;
    }
}


const string GradeBook::getCourseName() {
    return courseName;
}


// display welcom message to the GradeBook user
const void GradeBook::displayMessage() {
    // this statement calls getCourseName to get the
    // name of the course this GradeBook represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
        << endl;
}


// input arbitrary number of grades from user; update grade counters
void GradeBook::inputGrades() {
    int grade; // grade entered by user

    cout << "Enter the letter grades." << endl
        << "Enter the EOF character to end input." << endl;

    // loop until user types end-of-file key sequence
    while ( (grade = cin.get()) != EOF) {
        // determine which grade was entered
        switch (grade) {

            case 'A':
            case 'a':
                aCount++;
                break; // necessary to exit switch

            case 'B':
            case 'b':
                bCount++;
                break; // necessary to exit switch

            case 'C':
            case 'c':
                cCount++;
                break; // necessary to exit switch

            case 'D':
            case 'd':
                dCount++;
                break; // necessary to exit switch

            case 'F':
            case 'f':
                fCount++;
                break; // necessary to exit switch

            case '\n': // ignore newlines,
            case '\t': // tabs,
            case ' ':  // and spaces in input
                break;

            default: // catch all other characters
                cout << "Incorrect letter grade entered."
                    << "Enter a new grade." << endl;
                break; // optional; will exit switch anyway

        }
    }
}


// display report based on the grades entered by user
const void GradeBook::displayGradeReport() {
    // output summary of results
    cout << "\n\nNumber of students who received each letter grade:"
        << "\nA: " << aCount
        << "\nB: " << bCount
        << "\nC: " << cCount
        << "\nD: " << dCount
        << "\nF: " << fCount
        << endl;
}
