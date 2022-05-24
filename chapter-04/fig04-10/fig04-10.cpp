// Fig. 4.10: fig04-10.cpp
// Create GradeBook object and invoke its determineClassAverage function.

#include "fig04-08.GradeBook.h"

int main() {
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();
}
