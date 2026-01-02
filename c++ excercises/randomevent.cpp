#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    int x = rand() % 5 + 1;

    switch(x){
        case 1: cout << "You won a nigga\n";
        break;
        case 2: cout << "You won a whore\n";
        break;
        case 3: cout << "You won a japanese waifu\n";
        break;
        case 4: cout << "You won a lottery ticket\n";
        break;
        case 5: cout << "You are gay\n";
        break;


    }

    return 0;
}