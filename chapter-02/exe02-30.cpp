// Exe. 2.30    exe02-30.cpp

// We introduced the body mass index (BMI) calculator in Exercise 1.9. The
// formulas for calculating BMI are

//      BMI = (weightInPounds * 703) / (heightInInches * heightInInches)

//      BMI = (weightInKilograms) / (heightInMeters * heightInMeters)

// Create a BMI calculator application that reads the user's weight in  pounds
// and height in inches (or, if you prefer, the user's weight in kilograms and
// height in meters), then calculates and displays the user's body mass index.
// Also, the application should display the following information from the
// Department of Health and Human Services/National Institutes of Health so the
// user can evaluate his/her BMI:

// BMI VALUES
// Underweight: less than 18.5
// Normal:      between 18.5 and 24.9
// Overweight:  between 25 and 29.9
// Obese:       30 or greater

// [**Note:** In this chapter, you learned to use the int type to represent
// whole numbers. The BMI calculations when done with int values will both
// produce whole-number results. In Chapter 4 you'll learn to use the `double`
// type to represent numbers with decimal points. When the BMI calculations are
// performed with `doubles`, they'll both produce numbers with decimal points
// -- these are called "floating-point" numbers.]

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int weightInKilograms, heightInCentimeters;

    cout << "Enter weight [in kilograms]: ";
    cin >> weightInKilograms;

    cout << "Enter height [in centimeters]: ";
    cin >> heightInCentimeters;

    int denominator = heightInCentimeters * heightInCentimeters;
    int numerator = weightInKilograms * 10000;

    int valueBMI = numerator/denominator;

    cout << "BMI = " << valueBMI << "\n";

    cout << "\n"
        << "BMI VALUES\n"
        << "Underweight: less than 18.5\n"
        << "Normal:      between 18.5 and 24.9\n"
        << "Overweight:  between 25 and 29.9\n"
        << "Obese:       30 or greater\n";

    return 0;
}
