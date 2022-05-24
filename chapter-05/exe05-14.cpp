// Exe. 5.14:    exe05-14.cpp

// A mail order house sells five different products whose retail prices are:
// product 1 -- $2.98, product 2 -- $4,50, product 3 -- $9.98, product 4 --
// $4.49 and product 5 -- $6.87. Write a program that reads a series of pairs
// of numbers as follows:
//  a) product number
//  b) quantity sold
//
// Your program should use a switch statement to determine the retail price for
// each product. Your program should calculate and display the total retail
// value of all products sold. Use a sentinel-controlled loop to determine when
// the program should stop looping and display the final results.

#include <iostream>

using namespace std;

int main() {

    int productNumber = 0;
    int productQuantity = 0;
    double totalValue = 0.;

    cout << "Enter product number and quantity (e.g.:'4 2'; -1 to quit): ";
    cin >> productNumber;

    while (productNumber > 0) {

        cin >> productQuantity;

        switch (productNumber) {

            case 1:
                totalValue += 2.98 * productQuantity;
                break;


            case 2:
                totalValue += 4.50 * productQuantity;
                break;

            case 3:
                totalValue += 9.98 * productQuantity;
                break;

            case 4:
                totalValue += 4.49 * productQuantity;
                break;

            case 5:
                totalValue += 6.87 * productQuantity;
                break;

            default:
                break;
        }

        cout << "Enter product number and quantity (e.g.:'4 2'; -1 to quit): ";
        cin >> productNumber;
    }

    cout << "Total retail value: " << totalValue << "\n";
}
