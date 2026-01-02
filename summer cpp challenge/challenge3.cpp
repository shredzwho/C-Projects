//Title: Temperature Conversion	
//Description: Write a program that converts temperature from Celsius to Fahrenheit and vice versa. 
//Ask the user to enter the temperature in one unit and provide the converted temperature in the other uni

#include <iostream>
using namespace std;

int main (){

    int temp;
    char conversion;

    cout << "Enter the unit you want to convert into C/F: ";
    cin >> conversion;

    while (conversion != 'C' && conversion != 'F') {
        cout << "Invalid unit! Please enter 'C' for Celsius or 'F' for Fahrenheit: ";
        cin >> conversion;
    }

    cout << "Enter the temperature you want to convert : ";
    cin >> temp;

    if (conversion == 'C'){
        cout << "Converting it into celcius" << endl;
        double celsius = (temp - 32) * 5.0 / 9.0;
        cout << "Given temperature in celsius : " << celsius << endl;
    } else {
        cout << "Converting it into Farenheit" << endl;
        double fahrenheit = (temp * 1.8) + 32;
        cout << "Given temperature in fahrenheit : " << fahrenheit << endl;
    }
    

    return 0;
}