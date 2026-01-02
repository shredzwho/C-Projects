/*Write a program in C++ to check whether a number is positive, negative or zero.*/

#include <iostream>

int main(){

    using namespace std;
    int num1;

    cout << "Enter the number : ";
    cin >> num1;

    if (num1>0){
        cout << "Number is positive";
    } else if (num1<0){
        cout << "Number is negetive";
    } else {
        cout << "Number is zero";
    }

    return 0;
}