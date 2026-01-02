//Title:	String Length	
//Description:Write a program that asks the user to enter a string and calculates the length of the string (the number of characters in the string).

#include <iostream>
using namespace std;

int main(){

    string text;
    cout << "Enter a string : ";
    cin >> text;

    cout << "length of the string is : " << text.length();

    return 0;
}