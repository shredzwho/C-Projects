/* Write a C++ program that swaps two numbers.

Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25 */

#include <iostream>

int main (){

    //declaring the variables
    using namespace std;

    int num1, num2, temp;
    cout << "Enter your first Number : " << "\n";
    cin >> num1;
    cout << "Enter your sceond number : " << "\n";
    cin >> num2;

    cout << "We are swapping the numbers...." << "\n";

    temp = num2; //we already declared a temp variable just to help to swap the number
    num2 = num1;
    num1 = temp;

    cout << "Swapped numbers are :" << num1 << "\n" << num2;

    

    return 0;
