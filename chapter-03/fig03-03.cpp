// Fig. 3.3:    fig03-03.cpp

// Define class GradeBook with a member function that takes a parameter, create
// a GradeBook object and call its displayMessage function

#include <iostream>
#include <string>

using namespace std;

class GradeBook{
    public:
        // function that displays a welcome message to the GradeBook user
        const void displayMessage(string courseName) {
            cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
        }
};

int main() {

    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    cout << endl;

    myGradeBook.displayMessage(nameOfCourse);

}

