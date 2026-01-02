//Title: Array Sorting
//Description: Write a program that sorts the elements of an array in ascending order. 
//You can use any sorting algorithm of your choice (e.g., bubble sort, selection sort, insertion sort).

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 3, 5, 99, 12, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // standard sorting method very fast and reliable

    sort(arr, arr+n);
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}