// Exercise 4.28: exe04-28.cpp

// Write a program that displays the following checkerboard pattern. Your
// program must use only three output statements, one of each of the following
// forms:

//  cout << "* ";
//  cout << " ";
//  cout << endl;

// | * * * * * * *
// |* * * * * * * *
// | * * * * * * *
// |* * * * * * * *
// | * * * * * * *
// |* * * * * * * *
// | * * * * * * *
// |* * * * * * * *


#include <iostream>

using namespace std;

int main() {

    int size = 8;
    int width = size;

    for (int i=0; i<size; i++) {
        if (i % 2 == 0) {
            cout << " ";
            width = size -1; }

        for (int j=0; j<width; j++)
            cout << "* ";

        cout << endl;
        width = size;
    }
}
