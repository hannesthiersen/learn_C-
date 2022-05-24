// Exe. 5.10:    exe05-10.cpp

// The factorial function is used frequently in probability problems. Using the
// definition of factorial in Exercise 4.34, write a program that uses a for
// statement to evaluate the factorials of the integers from 1 to 5. Print the
// results in tabular format. What difficulty might prevent you from
// calculating factorial of 20?

#include <iostream>

using namespace std;

int factorial(int number) {
    int result = 1;
    for (int step=1; step<=number; step++)
        result *= step;
    return result;
}

int main() {

    cout << "Number\t" << "Factorial\n";

    for (int i=1; i<=5; i++) {
        cout << i << "\t" << factorial(i) << "\n";
    }

    cout << "\nfactorial(20) could lead to overflow:\n"
        << 20 << "\t" << factorial(20) << "\n";

}
