#include <string>

class HealthProfile{
    public:
        HealthProfile(
                std::string firstName,
                std::string lastName,
                char gender, // M/F (male/female)
                int dayOfBirth,
                int monthOfBirth,
                int yearOfBirth,
                int height, // in centimeters
                int weight); // in kilograms

        const int getAge();
        const int getBodyMassIndex();
        const int getMaximumHeartRate();
        const int getTargetHeartRate();

        const int getDayOfBirth();
        const std::string getFirstName();
        const char getGender();
        const int getHeight(); // in centimeters
        const std::string getLastName();
        const int getMonthOfBirth();
        const int getWeight(); // in kilograms
        const int getYearOfBirth();

        void setDayOfBirth(int day);
        void setFirstName(std::string first);
        void setGender(char gender); // M/F (male/female)
        void setHeight(int height); // in centimeters
        void setLastName(std::string last);
        void setMonthOfBirth(int month);
        void setWeight(int weight); // in kilograms
        void setYearOfBirth(int year);

    private:
        std::string firstName;
        std::string lastName;
        char genderField;
        int dayOfBirth;
        int monthOfBirth;
        int yearOfBirth;
        int heightField; // in centimeters
        int weightField; // in kilograms
        const int getLowerBoundTargetHeartRate();
        const int getUpperBoundTargetHeartRate();
};


