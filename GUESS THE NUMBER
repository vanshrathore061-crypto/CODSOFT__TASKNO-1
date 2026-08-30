//GUESS THE NUMBER
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int number = rand() % 100 + 1;
    int guess;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;

    // Keep asking until the correct number is guessed
    while (true) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try a smaller number." << endl;
        }
        else if (guess < number) {
            cout << "Too low! Try a bigger number." << endl;
        }
        else {
            cout << "\nCongratulations! You guessed the correct number!" << endl;
            break;
        }
    }

    return 0;
}
