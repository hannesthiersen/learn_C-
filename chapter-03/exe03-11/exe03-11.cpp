// Exe. 3.11    exe03-11.cpp
// Modify class GradeBook as follows:
//
//  a) Include a second string data member that represents the course
//  instructor's name.
//
//  b) Provide a set function to change the instructor's name and get function
//  to retrieve it.
//
//  c) Modify the constructor to specify course name and instructor name
//  parameters.
//
//  d) Modify function displayMessage to output the welcome message and course
//  name, then the string "This course is presented by: " followed by the
//  instructor's name.
//
// Use your modified class in a test program that demonstrates the class's new capabilities.

//#include <iostream>
#include "GradeBook.h"

using namespace std;

int main() {

    GradeBook physics("Physics 114: Newtonian Mechanics I",
            "Dr. Anton Stander");
    GradeBook compsci("Computer Science 114: Programming in Java I",
            "Dr. McElory Hoffmann");

    physics.displayMessage();
    compsci.displayMessage();

    physics.setCourseName("Physics 144: Electromagnetism I");
    physics.setCourseInstructor("Dr. Hannes Kriel");

    physics.displayMessage();

}

