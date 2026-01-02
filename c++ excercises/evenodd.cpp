#include <iostream>

using namespace std;

int main(){

    int a;
    cout << "Enter any number you would like :" << endl;
    cin >> a;

    if(a%2 == 0){

        cout << "Given number is even" << endl;

    } else {
        cout << "The number is odd or zero";
    }

    return 0;
}