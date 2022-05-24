class Date{
    public:
        Date(int year, int month, int day);
        const void displayDate();
        const int getDay();
        const int getMonth();
        const int getYear();
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);
    private:
        int dateDay;
        int dateMonth;
        int dateYear;
};

