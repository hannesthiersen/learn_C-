// Exercise 4.13:   exe04-13.cpp

// Drivers are concerned with the mileage obtained by their automobiles. One
// driver has kept track of several trips by recording miles driven and gallons
// used for each trip. Develop a C++ program that uses a `while` statements to
// input the miles driven and gallons used for each trip. The program should
// calculate and display the miles per gallon obtained for each trip and print
// the combined miles per gallon obtained for all tankfuls up to this point.
//
//  Enter kilometres driven (-1 to quit): 287
//  Enter litres used: 13
//  KPL this trip: 22.076923

#include <iostream>

using namespace std;

int main() {

    int distance, fuel;
    double kpl, total_kpl;

    int total_dist = 0;
    int total_fuel = 0;


    cout << "Enter distance driven (km): ";
    cin >> distance;


    while (distance != -1) {

        total_dist += distance;

        cout << "Enter litres of fuel (litres): ";
        cin >> fuel;

        total_fuel += fuel;

        kpl = static_cast<double>(distance) / fuel;
        total_kpl = static_cast<double>(total_dist) / total_fuel;

        cout << "KPL this trip: " << kpl << "\n";
        cout << "Total KPL: " << total_kpl << "\n\n";

        cout << "Enter distance driven (km): ";
        cin >> distance;

    }

}

