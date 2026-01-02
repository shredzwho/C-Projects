#include <iostream>
using namespace std;

double totalprice(double money[], int size);

int main(){

    double money[] = {};
    int size = sizeof(money)/sizeof(money[0]);
    double total = totalprice(money, size);

    cout << "$" << total;

    return 0;
}

double totalprice(double money[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += money[i];
    }
    return total;
}