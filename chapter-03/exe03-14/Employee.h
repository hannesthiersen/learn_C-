#include <string>

class Employee{
    public:
        Employee(std::string first, std::string last, int salary);
        const std::string getFirstName();
        const std::string getLastName();
        const int getMonthlySalary();
        void setFirstName(std::string first);
        void setLastName(std::string last);
        void setMonthlySalary(int newSalary);
    private:
        std::string firstName;
        std::string lastName;
        int monthlySalary;
};

