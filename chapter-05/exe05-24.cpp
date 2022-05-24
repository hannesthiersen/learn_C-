// Exe. 5.24:    exe05-024.cpp

// Modify Exercise 5.23 to read an odd number in the range 1 to 19 to specify
// the number of rows in the diamond, then display a diamond of the appropriate
// size.

// NOTE: A different definition for the shape size is used in this program.
// Instead of using the number of lines needed to output the diamond the number
// of lines from the center to the top or bottom corner is used. This makes
// more sense within mathematical frameworks. The number of lines required by
// the diamond is then 2*size - 1 lines (Only size zero yield -1 lines which is
// just reduced to the correct 0 lines).

#include <iostream>
#include <cmath>

using namespace std;

// remap size to represent number of asterisks from the center to any corner of
// the diamond.
int sizeRemap(int size) {
    // if size is zero, -1 is returned; the drawDiamond routine handles
    // negative sizes the same as for 0 which is a diamond of size 0.
    return 2*size - 1;
}

void drawDiamond(int size) {

    int space, asterisks;

    for (int i=0; i<size; i++) {

        space = abs(size/2 - i);
        for (int j=0; j<space; j++) {
            cout << " ";
        }

        asterisks = 2*(size/2-space) + 1;
        for (int k=0; k<asterisks; k++) {
        cout << "*";
        }

        cout << "\n";
    }

}

int main() {
    int size = 0;

    cout << "Enter a size (-1 to quit): ";
    cin >> size;

    while (size >= 0) {
        size = sizeRemap(size);
        drawDiamond(size);

        cout << "Enter a size (-1 to quit): ";
        cin >> size;
    }

}
