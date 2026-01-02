#include <iostream>
using namespace std;

//we are sorting the array in descanding order

void sortarr(int arr[], int size);

int main (){

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);

    sortarr(arr, size);

    for(int elements : arr){
        cout << elements << " ";
    }

    return 0;
}

void sortarr(int arr[], int size){
    int temp;
    for(int i=0; i < size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]<arr[j+1]){
                //just invert the symbol if you want in ascending order
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}