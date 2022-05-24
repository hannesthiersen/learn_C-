// Exe. 2.17    exe02-17.cpp
// Write a program that prints the numbers 1 to 4 on the same line with each
// pair of adjacent numbers separated by one space. Do this several ways:
//  a)  Using one statement with one stream insertion operator.
//  b)  Using one statement with four stream insertion operators.
//  c)  Using four statements.

#include <iostream>

using std::cout;

int main()
{

    // 1 statement, 1 insertion operator
    cout << "1 2 3 4\n";

    // 1 statement, 4 insertion operators
    cout << "1 " << "2 " << "3 " << "4\n";


    // 4 statements
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";


    return 0;
}
