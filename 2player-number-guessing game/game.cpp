#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    char secretNumber, guess;
	int attempts = 0;

    cout << "Player 1: Enter the secret number (1 to 9): ";
    secretNumber = getch();
    cout<<"done!";
    cout << "\n"; 

    cout << "Player 2: Guess the number!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "\n  Correct! You guessed it in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
