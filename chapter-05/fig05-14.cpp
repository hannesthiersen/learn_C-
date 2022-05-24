// Fig. 5.14:    fig05-14.cpp
// countinue statement terminating an iteration of a for statement.

#include <iostream>

using namespace std;

int main() {

    for (unsigned int count = 1; count <= 10; count++) {
        if (count == 5)
            continue; // skip remaining code in loop

        cout << count << " ";
    }

    cout << "\nUsed continue to skip printing 5" << endl;
}
