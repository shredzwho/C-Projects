#include <iostream>

int main (){

    using namespace std;

    //append function in string is used to join multiple string

    string firstname = "Shreyas";
    string lastname = "Kumar";
    string fullname = firstname.append(lastname);
    cout << fullname;

    return 0;
}