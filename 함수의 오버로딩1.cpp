#include <iostream>

void print(int x){std::cout<<x<<std::endl;}
void print(char x){std::cout<<x<<std::endl;}
void print(double x){std::cout<<x<<std::endl;}

int main(){
    int a =1;
    char b = 'b';
    double c = 2.4f;

    print(a);
    print(b);
    print(c);


    return 0;
}