#include <iostream>

int main(){
    //we are talking about const function in c++
    //const is a function assigned to fixed values in c++ that cannot be changed

    const double PI = 3.14;
    double radius = 5;
    double circumference = 2*PI*radius;
    std::cout << circumference;
    

    return 0;
}