//Title:	Array Sum	
//Description: Write a program that calculates the sum of all elements in an array. Initialize the array with some predefined values.

#include <iostream>
using namespace std;

int main (){

    int array[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int n = sizeof(array)/sizeof(array[0]);

    for(int i =0; i<n; i++){
        sum += array[i];
    }

    cout << sum;

    return 0;
}