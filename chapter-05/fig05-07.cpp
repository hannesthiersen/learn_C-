// Fig. 5.7:    fig05-07.cpp
// Counter-controlled repitition

#include <iostream>

using namespace std;

int main() {

    unsigned int counter = 1; // initialize counter

    do {
        cout << counter << " "; // display counter
        counter++; // increment counter
    } while (counter <= 10);

    cout << endl;

}
