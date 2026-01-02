#include <iostream>

using namespace std;

//ternanry operatior is a replacement for if else statement
//its written in form of : condition ? expression 1: expression2
//can be written like this also cout << (condition ? statement 1, statement 2);

int main(){

    int num1 = 9;
    num1 % 2 == 1? cout << "Number is odd" << endl : cout << "Number is even" << endl;

    bool hungry = true;
    cout << (hungry ? "You are hungry" : "You are Full");

    return 0;
}