#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string number, string description, int quantity, int pricePerItem) :
    partDescription(description),
    partNumber(number) {
        setPartPricePerItem(pricePerItem);
        setPartQuantity(quantity);
}


const void Invoice::displayInvoiceDetails() {
    cout << "Part Number" "  "
        "Description" "  "
        "Quantity" "  "
        "Price per item" "  "
        "Total" "\n"
        << getPartNumber() << "  "
        << getPartDescription() << "  "
        << getPartQuantity() << "  "
        << getPartPricePerItem() << "  "
        << getInvoiceAmount() << "\n";
}


const int Invoice::getInvoiceAmount() {
    return partQuantity * partPricePerItem;
}


const std::string Invoice::getPartDescription() {
    return partDescription;
}


const std::string Invoice::getPartNumber() {
    return partNumber;
}


const int Invoice::getPartPricePerItem() {
    return partPricePerItem;
}


const int Invoice::getPartQuantity() {
    return partQuantity;
}


void Invoice::setPartDescription(std::string description) {
    partDescription = description;
}


void Invoice::setPartNumber(std::string number) {
    partNumber = number;
}


void Invoice::setPartPricePerItem(int pricePerItem) {
    partPricePerItem = pricePerItem;
    if (pricePerItem < 0) {
        partPricePerItem = 0;
        cerr << "[ERROR] Invalid price per item for " << getPartNumber()
            << ". Value set to 0 instead.\n";
    }
}


void Invoice::setPartQuantity(int quantity) {
    partQuantity = quantity;
    if (quantity < 0) {
        partQuantity = 0;
        cerr << "[ERROR] Invalid quantity for " << getPartNumber()
            << ". Value set to 0 instead.\n";
    }
}


