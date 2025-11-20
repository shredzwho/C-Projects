#include <iostream>

using namespace std;

int main(){

    int x;
    cout << "Enter your marks :" << endl;
    cin >> x;

    if (x >= 90){
        cout << "You have achieved Grade A!!!!";
    } else if (90 > x > 80){
        cout << "You have achieved Grade B!!!!"; 
    } else if (80 > x > 70){
        cout << "You have achieved Grade C!!!!";
    } else if (70 > x > 60){
        cout << "You have achieved Grade D!!!!";
    } else if (60 > x > 40){
        cout << "You have achieved Grade E!!!!";
    } else {
        cout << "You have failed the exam...shame on you nigga";
    }

    return 0;
}