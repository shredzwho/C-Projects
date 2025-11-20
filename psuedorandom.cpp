#include <iostream>

using namespace std;

int main(){

    srand(time(NULL));
    int x = (rand() % 6) + 1;

    cout << x;

    return 0;
}