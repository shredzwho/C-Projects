#include <iostream>
using namespace std;

int searcharray(int arr[], int size, int element);

int main (){

    int arr[]={1, 3, 2, 4, 5, 7, 8};
    int mynum;
    int index;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the number you wanna search for : ";
    cin >> mynum;

    index = searcharray(arr, size, mynum);

    if(mynum != -1){
        cout << "element is present in the array" << endl;
        cout << "It is at index : " << index;
    } else {
        cout << "given element is not present in the array";
    }


    return 0;
}

int searcharray(int arr[], int size, int element){
    for(int i=0 ; i < size ; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}