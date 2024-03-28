#include <iostream>
class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int date){

  }
  void AddDay(int inc){
    
  }
  void AddMonth(int inc){
    month_ = inc%12;
    year_ = inc/12;
    if(month_ == 2 && day_ > 28){
        month_ += 1;
        day_ = day_ - 28;
    }
    
  }
  void AddYear(int inc){
    year_ += inc;
  }

  void ShowDate(){
    std::cout<<year_<<"년 "<<month_<<"월 "<<day_<<"일"<<std::endl;
  }
};

int main(){

}