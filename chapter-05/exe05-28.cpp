// Exe. 5.28:    exe05-28.cpp

// Write a program that uses repetition and switch statements to print the song
// "The Twelve Days of Christmas." One switch statement should be used to print
// the day (i.e. "first," "second,"  etc.). A separate switch statement should
// be used to print the remainder of each verse. Visit the website
// www.12days.coom/library/carols/12daysofxmas.htm for the complete lyrics to
// the song.

#include <iostream>

using namespace std;

int main() {

    for (int day=1; day<=12; day++) {

        cout << "On the ";
        switch (day) {
            case 1:
                cout << "first";
                break;

            case 2:
                cout << "second";
                break;

            case 3:
                cout << "third";
                break;

            case 4:
                cout << "fourth";
                break;

            case 5:
                cout << "fifth";
                break;

            case 6:
                cout << "sixth";
                break;

            case 7:
                cout << "seventh";
                break;

            case 8:
                cout << "eighth";
                break;

            case 9:
                cout << "nineth";
                break;

            case 10:
                cout << "tenth";
                break;

            case 11:
                cout << "eleventh";
                break;

            case 12:
                cout << "twelveth";
                break;
        }
        cout << " day of Christmas, my" "\n"
            "true love sent me" "\n";

        for (int trackDay=day; trackDay>0; trackDay--) {
            switch (trackDay) {
                case 1:
                    cout << "A partridge in a pear tree" "\n";
                    break;

                case 2:
                    cout << "Two turtle doves, and" "\n";
                    break;

                case 3:
                    cout << "Three french hens" "\n";
                    break;

                case 4:
                    cout << "Four calling birds" "\n";
                    break;

                case 5:
                    cout << "Five golden rings" "\n";
                    break;

                case 6:
                    cout << "Six geese a-laying" "\n";
                    break;

                case 7:
                    cout << "Seven swans a-swimming" "\n";
                    break;

                case 8:
                    cout << "Eight maids a-milking" "\n";
                    break;

                case 9:
                    cout << "Nine ladies dancing" "\n";
                    break;

                case 10:
                    cout << "Ten lords a-leaping" "\n";
                    break;

                case 11:
                    cout << "Eleven pipers piping" "\n";
                    break;

                case 12:
                    cout << "Twelve drummers drumming" "\n";
                    break;

            }
        }

        cout << "\n";

    }

}
