// Fig. 3.13: fig03-13.cpp
// GradeBook class demonstration after seperating its interface from its
// implementation

#include <iostream>
#include "fig03-11.GradeBook.h"

using namespace std;

int main()
{
    // create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;

}
