#include <iostream>
using namespace std;

void happybirthday(string name);

//function is a block of resusable code
//functions cannot see whats going on with other functions


int main (){

    string name;
    cout << "Whats your name : ";
    cin >> name;

    happybirthday(name);

    return 0;
}

void happybirthday(string name){
    cout << "Happy birthday to you " << name;
    return;
}
