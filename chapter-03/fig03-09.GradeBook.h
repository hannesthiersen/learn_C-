// Fig. 3.9:    fig03-09-GradeBook.h
// GradeBook

#include <iostream>
#include <string>  // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook {
    public:
        // constructor initializes courseName with string supplied as argument
        explicit GradeBook(std::string name)
            : courseName(name) // member initializer to initialize courseName
        {
            // empty body
            // end GradeBook constructor
        }

        // function to set course name
        void setCourseName(std::string name){
            courseName = name; // store the course name in the object
        }

        // function to get the course name
        const std::string getCourseName() {
            return courseName;
        }

        // display a welcome message to the GradeBook user
        const void displayMessage() {
            // call getCourseName to get the courseName
            std::cout << "Welcome to the grade boo for \n" << getCourseName()
                << "!" << std::endl;
        }


    private:
        std::string courseName; // course name for this GradeBook

};

