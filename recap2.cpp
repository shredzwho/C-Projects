#include <iostream>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));
    int x = rand()%3+1;
    switch(x){
        case 1:
            cout << "you are a manwhore";
        break;
        case 2:
            cout << "you won a waifu";
        break;
        case 3:
            cout << "you are gay";
        break; 
    }

    return 0;
}