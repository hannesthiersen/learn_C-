#include <string>

class HeartRates{
    public:
        HeartRates(std::string first, std::string last,
                int byear, int bmonth, int bday);
        const std::string getFirstName();
        const std::string getLastName();
        const int getAge();
        const int getBirthDay();
        const int getBirthMonth();
        const int getBirthYear();
        const int getMaximumHeartRate();
        const int getTargetHeartRate();
        void setFirstName(std::string first);
        void setLastName(std::string last);
        void setBirthDay(int day);
        void setBirthMonth(int month);
        void setBirthYear(int year);
    private:
        const int getLowerBoundTargetHeartRate();
        const int getUpperBoundTargetHeartRate();
        std::string firstName;
        std::string lastName;
        int birthDay;
        int birthMonth;
        int birthYear;
};

