#include <string>

class Invoice{
    public:
        Invoice(
                std::string number,
                std::string description,
                int quantity,
                int pricePerItem);
        const void displayInvoiceDetails();
        const int getInvoiceAmount();
        const std::string getPartDescription();
        const std::string getPartNumber();
        const int getPartPricePerItem();
        const int getPartQuantity();
        void setPartDescription(std::string description);
        void setPartNumber(std::string number);
        void setPartPricePerItem(int pricePerItem);
        void setPartQuantity(int quantity);
    private:
        std::string partNumber;
        std::string partDescription;
        int partQuantity;
        int partPricePerItem;
};
