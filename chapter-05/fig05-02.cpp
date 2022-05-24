// Fig. 5.2:    fig05-02.cpp
// Counter-controlled repetition with the for statement

#include <iostream>

using namespace std;

int main() {

    // for statment header includes initialization,
    // loop-continuation condition and increment.
    for (unsigned int counter = 1; counter <= 10; counter++) {
        cout << counter << " ";
    }

    cout << endl; // output a newline

}
