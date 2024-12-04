/* 
Filename: Chapter5Exercise20.cpp 
Programmer: Ozair Ghaissi
Date: 11/23/2024
*/

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "I have generated a random number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high, try again.\n";
        }
        else if (guess < randomNumber) {
            cout << "Too low, try again.\n";
        }
        else {
            cout << "Congratulations! You guessed the number.\n";
        }
    } while (guess != randomNumber);

    return 0;
}
