// Fig. 3.15: fig03-15.GradeBook.h
// GradeBook class definition presents the public interfacee of the class.
// Member-function definitions appear in Gradebook.cpp.

#include <string>

class GradeBook {
    public:
        GradeBook(std::string, std::string);
        void setCourseName(std::string);
        const std::string getCourseName();
        void setCourseInstructor(std::string);
        const std::string getCourseInstructor();
        const void displayMessage();
    private:
        std::string courseName;
        std::string courseInstructor;
};
