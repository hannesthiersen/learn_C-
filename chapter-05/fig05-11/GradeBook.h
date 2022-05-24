// Fig. 5.9     GradeBook.h
// GradeBook class definition that counts letter grades.
// Member functions are defined in GradeBook.cpp
#include <string> // program uses C++ standard string class

// GradeBook class definition
class GradeBook {
    public:
        explicit GradeBook(std::string); // initialize course name
        void setCourseName(std::string); // set the course name
        const std::string getCourseName(); // retrieve the course name
        const void displayMessage(); // display a welcome message
        void inputGrades(); // input arbitrary number of grades from user
        const void displayGradeReport(); // display report based on user input
    private:
        std::string courseName; // course name for this GradeBook
        unsigned int aCount; // count of A grades
        unsigned int bCount; // count of B grades
        unsigned int cCount; // count of C grades
        unsigned int dCount; // count of D grades
        unsigned int fCount; // count of F grades
};
