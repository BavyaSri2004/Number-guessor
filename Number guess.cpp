#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
