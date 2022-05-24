// Fig. 3.10:   fig03-10.cpp
// Including class GradeBook from file fig03-09.GradeBook.h for use in main

#include <iostream>
#include "fig03-09.Gradebook.h"
using namespace std;

// function main begins program execution
int main() {

    // create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;

}
