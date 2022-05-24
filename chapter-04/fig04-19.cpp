// Fig. 4.19: fig04-19.cpp
// Preincrementing and postincrementing.

#include <iostream>
using namespace std;

int main() {

    // demonstrate postincrement
    int c = 5;
    cout << c << endl;
    cout << c++ << endl;
    cout << c << endl;

    // demonstrate preincrement
    c = 5;
    cout << c << endl;
    cout << ++c << endl;
    cout << c << endl;

}
