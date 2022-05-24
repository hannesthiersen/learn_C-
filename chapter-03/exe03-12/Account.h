
// Fig. 3.12: Account.h

class Account {
    public:
        explicit Account(int balance);
        void credit(int creditAmount);
        void debit(int debitAmount);
        const int getBalance();
    private:
        void setBalance(int);
        int balance;
};
