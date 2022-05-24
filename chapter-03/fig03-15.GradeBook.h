// Fig. 3.15: fig03-15.GradeBook.h
// GradeBook class definition presents the public interfacee of the class.
// Member-function definitions appear in Gradebook.cpp.

#include <string>

class GradeBook {
    public:
        explicit GradeBook(std::string);
        void setCourseName(std::string);
        const std::string getCourseName();
        const void displayMessage();
    private:
        std::string courseName;
};
