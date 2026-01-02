#include <iostream>
using namespace std;

int main(){

    /* do while loop : it does some block of code and does it again
    if give conditions or statements are true */

    int num;

    do{
        cout << "Enter a positive number : ";
        cin >> num;

    } while(num<0);

    cout << "Your number is : " << num;

    return 0;

}