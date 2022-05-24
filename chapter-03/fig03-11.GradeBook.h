// Fig. 3.11: fig03-11.Gradebook.h
// GradeBook class definition. This file presents Gradebook's public
// interface without revealing the implementations of Gradebook's member
// functions, which are defined in GradeBook.cpp.

#include <string> // class Gradebook uses C++ standard string class

// GradeBook class definition
class GradeBook {
    public:
        explicit GradeBook(std::string); // constructor initialize courseName
        void setCourseName(std::string); // sets the course name
        const std::string getCourseName(); // gets the course name
        const void displayMessage(); // displays a welcome message

    private:
        std::string courseName; // course name for this GradeBook
};
