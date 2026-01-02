#include <iostream>
using namespace std;

int searchindex(int array[], int size, int element);

int main(){

    int numbers[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int mynum;

    cout << "Enter the element you wanna search for : " << endl;
    cin >> mynum;

    index = searchindex(numbers, size, mynum);

    if(index != -1){
        cout << mynum << " is at index " << index;
    } else {
        cout << mynum << " is not in the array";
    }
    

    return 0;
}

int searchindex(int array[], int size, int element){
    for(int i=0; i<size; i++){
        if (array[i] == element){
            return i;
        }
    }
    return -1;
}