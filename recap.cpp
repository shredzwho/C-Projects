#include <iostream>
using namespace std;

//we are gonna swap some numbers

int main(){

    int num1, num2, temp;
    cout << "Enter your first number : " << endl;
    cin >> num1;
    cout << "Enter the second number : " << endl;
    cin >> num2;

    temp=num2;
    num2=num1;
    num1=temp;

    cout << "first number after swapping : " << num1 << endl;
    cout << "second number after swapping : " << num2 << endl;

    return 0;
}