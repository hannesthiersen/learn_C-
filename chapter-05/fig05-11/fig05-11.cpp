// Fig. 5.11:    fig05-11.cpp
// Creating a GradeBook object and calling its member functions.

#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

int main() {

    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage(); // display welcome message
    myGradeBook.inputGrades(); // read grades from user
    myGradeBook.displayGradeReport(); // display report based on grades

}
