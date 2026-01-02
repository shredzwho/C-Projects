#include <iostream>
using namespace std;

//global variables declaration
//return is a function which returns a value

int area;
int side;
int square();

int main(){

    cout << "Enter the side of the sq : ";
    cin >> side;
    square();

    return 0;
}

int square(){

    int area = side*side;
    cout << "Area is : " << area << endl;
    return 0;

}
