// Exe. 5.18:    exe05-18.cpp

// Write a program that prints a table of the binary, octal and hexadecimal
// equivalents of the decimal numbers in the range 1-256. If you are not
// familiar with these number systems, read Appendix D. [Hint: You can use the
// stream manipulators dec, oct and hex to display integers in decimal, octal
// and hexadecimal formats, respectively.]

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int intToBin(int n) {

    int pow2 = log2(n);
    int binaryRep = 0;

    int number = n;
    int powval;
    for (int pos=pow2; pos>=0; pos--) {
        powval = pow(2, pos);
        binaryRep += pow(10, pos) * (number / powval);
        number %= powval;
    }

    return binaryRep;
}


int main() {

    cout << showbase << uppercase;

    for (int n=1; n<=256; n++) {
        cout << setw(4) << dec << n
            << setw(10) << intToBin(n)
            << setw(5) << oct << n
            << setw(6) << hex << n
            << "\n";
    }

}
