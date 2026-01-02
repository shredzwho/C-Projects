//Title: Count Vowels and Consonants	
//Description: Write a program that asks the user to enter a string and counts the number of vowels and consonants in the string. 
//Ignore spaces and consider uppercase and lowercase letters as the same.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main (){
    string text;
    cout << "Enter a string : ";
    getline(cin, text);

    int v=0;
    int c=0;

    for(char d : text){
        char ch = tolower(d);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            v++;
        } else if (isalpha(ch)){
            c++;
        }
    }

    cout << "number of vowels : " << v << endl;
    cout << "number of consonants :" << c << endl;
    cout << "total no of letters : " << v+c;


}