//Title: Game	Number Guessing	
//Description: Write a program that generates a random number between 1 and 100 and asks the user to guess the number. 
//Provide feedback to the user (e.g., "Too high" or "Too low") until they guess the correct number.	

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int secret_number = (rand() % 100) + 1; // Renamed for clarity
    int user = 0;      // Initialize to 0
    int attempts = 0;  // Initialize to 0

    cout << "The computer has generated a random number between 1 and 100. Guess it!" << endl;

    while (secret_number != user) {
        cout << "Guess the number: ";
        cin >> user;
        attempts++;

        if (user > secret_number) { // Check the USER'S guess
            cout << "It's too high! Try again.." << endl;
        } else if (user < secret_number) {
            cout << "It's too low! Try again.." << endl;
        } else {
            cout << "Congrats! You guessed it right!" << endl;
            cout << "The number was: " << secret_number << endl;
            cout << "Your number of attempts: " << attempts << endl;
        }
    }

    return 0;
}