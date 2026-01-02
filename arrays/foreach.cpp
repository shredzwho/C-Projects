#include <iostream>
using namespace std;

//this is how you use foreach loop to iterate an array

int main(){

    string names[] = {"Sahitya", "arian", "shreyas", "prithvi", "faiz", "rahul"};

    for (string name : names){
        cout << name << endl;
    }

    return 0;
}