// Fig. 5.13:    fig05-13.cpp
// break statement exiting a for statement.

#include <iostream>

using namespace std;

int main() {

    unsigned int count; // control variable also after loop terminates

    for (count = 1; count <= 10; count++) {
        if (count == 5)
            break; // break loop if count is 5

        cout << count << " ";
    }

    cout << "\nBroke out of loop at count = " << count << endl;
}
