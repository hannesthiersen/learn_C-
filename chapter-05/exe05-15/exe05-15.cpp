// Exe. 5.15:    exe05-15.cpp

// Modify the GradeBook program of  Figs. 5.9-5.11 to calculate the grade-point
// average. A grade of A is worth 4 points, B is worth 3 points, and so on.

#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

int main() {

    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage(); // display welcome message
    myGradeBook.inputGrades(); // read grades from user
    myGradeBook.displayGradeReport(); // display report based on grades
    myGradeBook.displayGradePointAverage(); // display grade-point average

}
