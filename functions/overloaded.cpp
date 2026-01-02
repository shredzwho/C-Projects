#include <iostream>
using namespace std;

//this is an example of the overloaded functions

void pizza();
void pizza(string topping);

int main(){
    pizza("chicken");
    return 0;
}

void pizza(){
    cout << "Here is your pizza";
    return;
}

void pizza(string topping){
    cout << "Here is your pizza with " << topping << " topping";
    return;
}