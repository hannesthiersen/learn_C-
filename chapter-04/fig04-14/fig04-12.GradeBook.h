// Fig. 4.8: fig04-12.GradeBook.h
// Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp

#include <string>

class GradeBook{
    public:
        explicit GradeBook(std::string);
        void setCourseName(std::string);
        const std::string getCourseName();
        const void displayMessage();
        const void determineClassAverage();
    private:
        std::string courseName;
};
