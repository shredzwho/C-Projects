//Title: Array Average	
//Description: Write a program that calculates the average of all elements in an array. Initialize the array with some predefined values.

#include <iostream>
using namespace std;

int main (){

    int array[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int avg;
    int n = sizeof(array)/sizeof(array[0]);

    for(int i =0; i<n; i++){
        sum += array[i];
    }

    avg = sum/n;
    cout << avg;

    return 0;
}