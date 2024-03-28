#include <iostream>

class Date {
    int year_;
    int month_;
    int day_;

    public:
    void showDate();

    Date(){
        year_ = 2023;
        month_ = 03;
        day_ = 03;
    }
};


void Date::showDate(){
    std::cout<<"to day is "<<year_<<"year"<<month_<<"month"<<day_<<"day"<<std::endl;
}

int main(){
    Date day = Date();
    Date day2;
    day.showDate();
    day.showDate();

    return 0;
}