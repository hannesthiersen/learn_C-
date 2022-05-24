// Fig. 3.5:    fig03-05.cpp

// Define class GradeBook that contains a courseName data member and member
// functions to set and get its value;

// Create and minipulate a GradeBook object with these functions.

#include <iostream>
#include <string>

using namespace std;

class GradeBook{
    public:
        void setCourseName(string name) {
            courseName = name;
        }
        const string getCourseName() {
            return courseName;
        }
        const void displayMessage(string courseName) {
            cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
        }
    private:
        string courseName;
};

int main() {

    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    cout << "\nPlease enter course name: " << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    myGradeBook.setCourseName(nameOfCourse);

    cout << endl;
    myGradeBook.displayMessage(nameOfCourse);

}

