// Exe. 3.13: exe03-13.cpp

// Create a class called `Invoice` that a hardware store might use to represent
// an invoice for an item sold at the store. An `Invoice` should include four
// data members -- a part number (type `string`), a part description (type
// `string`), a quantity of the item being purchase (type `int`) and a price
// per item (type `int`). Your class should have a constructor that initializes
// the four data members. A constructor that receives multiple arguments is
// defined with the form:
//
//      *ClassName(TypeName1 parameterName1, TypeName2 parameterName2, ...)*
//
// Provide a *set* and *get* function for each data member. In addition,
// provide a member function named `getInvoiceAmount` that calculates the
// invoice amount (i.e. multiplies the quantity by the price per item), then
// returns the amount as an `int` value. If the quantity is not positive, it
// should be set to 0. If the price per item is not positive, it should be set
// to 0. Write a test program that demonstrates class `Invoice`'s capabilities.

#include <iostream>
#include "Invoice.h"

using namespace std;

int main() {

    Invoice purchase1(
            "LKSDF28348",
            "Part 1 is a thing",
            4,
            26);
    Invoice purchase2(
            "KDIWL29304",
            "Part 2 is another thing",
            10,
            4);

    purchase1.displayInvoiceDetails();
    purchase2.displayInvoiceDetails();

    purchase1.setPartQuantity(-2);
    purchase2.setPartPricePerItem(-40);

    purchase1.displayInvoiceDetails();
    purchase2.displayInvoiceDetails();

}


