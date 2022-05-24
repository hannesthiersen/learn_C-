
// Exe. 5.12:    exe05-12.cpp

// Write a program that uses for statements to print the following patterns
// seperately, one below the other. Use for loops to generate the patterns. All
// asterisks (*) should be printed by a single statement of the form cout <<
// '*'; (this cases the asteriks to print side by side). [Hint: the last two
// patterns requires that each line begin with an appropriate number of blanks.
// Extra credit: Combine your code from the four separate problems into a
// single program that prints all four patterns side by side by making clever
// use of nested for loops.]

#include <iostream>

using namespace std;

int shapeSize = 10;


void triangleA() {
    for (int i=1; i<=shapeSize; i++) {
        for (int j=1; j<=i; j++)
            cout << '*';
        cout << "\n";
    }
}


void triangleB() {
    for (int i=1; i<=shapeSize; i++) {
        for (int j=shapeSize+1-i; j>=1; j--)
            cout << '*';
        cout << "\n";
    }
}


void triangleC() {
    for (int i=1; i<=shapeSize; i++) {
        for (int k=0; k<i-1; k++)
            cout << " ";
        for (int j=shapeSize+1-i; j>=1; j--)
            cout << '*';
        cout << "\n";
    }
}


void triangleD() {
    for (int i=1; i<=shapeSize; i++) {
        for (int k=shapeSize-i; k>=1; k--)
            cout << " ";
        for (int j=1; j<=i; j++)
            cout << '*';
        cout << "\n";
    }
}


void combinedTriangles() {

    for (int i=1; i<=shapeSize; i++) {

        // A --------------------
        for (int j=1; j<=i; j++)
            cout << '*';
        for (int k=shapeSize-i; k>=1; k--)
            cout << " ";
        // ----------------------
        cout << " ";

        // B --------------------
        for (int j=shapeSize+1-i; j>=1; j--)
            cout << '*';
        for (int k=0; k<i-1; k++)
            cout << " ";
        // ----------------------
        cout << " ";


        // C --------------------
        for (int k=0; k<i-1; k++)
            cout << " ";
        for (int j=shapeSize+1-i; j>=1; j--)
            cout << '*';
        // ----------------------
        cout << " ";

        // D --------------------
        for (int k=shapeSize-i; k>=1; k--)
            cout << " ";
        for (int j=1; j<=i; j++)
            cout << '*';
        // ----------------------
        cout << "\n";

    }
}


int main() {

    triangleA();
    cout << "\n";
    triangleB();
    cout << "\n";
    triangleC();
    cout << "\n";
    triangleD();
    cout << "\n";
    combinedTriangles();

}
