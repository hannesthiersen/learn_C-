// Fig. 3.1:    fig03-01.cpp

// Define class GradeBook with a member function displayMessage.
// create a GradeBook object, and call its displayMessage function.

#include <iostream>

using namespace std;

class GradeBook{
    public:
        // function that displays a welcome message to the GradeBook user
        const void displayMessage() {
            cout << "Welcome to the Grade Book!" << endl;
        }
};

int main() {
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function
}

