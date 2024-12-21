#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

// Function to check the user's guess
void checkGuess(const string& secretWord, const string& guess) {
    for (size_t i = 0; i < guess.size(); ++i) {
        if (guess[i] == secretWord[i]) {
            cout << guess[i] << " (Correct position) ";
        } else if (secretWord.find(guess[i]) != string::npos) {
            cout << guess[i] << " (Wrong position) ";
        } else {
            cout << guess[i] << " (Not in word) ";
        }
    }
    cout << endl;
}

int main() {
    // List of possible words
    vector<string> words = {"apple", "brain", "crane", "drive", "eagle", "frame"};
    
    // Randomly select a secret word
    srand(static_cast<unsigned>(time(0)));
    string secretWord = words[rand() % words.size()];
    
    string guess;
    const int maxAttempts = 6;
    int attempts = 0;
    
    cout << "Welcome to Wordle!\n";
    cout << "Guess the 5-letter word. You have " << maxAttempts << " attempts.\n";

    while (attempts < maxAttempts) {
        cout << "Attempt " << attempts + 1 << "/" << maxAttempts << ": ";
        cin >> guess;

        // Validate the input
        if (guess.size() != 5) {
            cout << "Please enter a 5-letter word.\n";
            continue;
        }

        // Convert guess to lowercase
        transform(guess.begin(), guess.end(), guess.begin(), ::tolower);

        if (guess == secretWord) {
            cout << "Congratulations! You guessed the word correctly: " << secretWord << endl;
            return 0;
        }

        checkGuess(secretWord, guess);
        ++attempts;
    }

    cout << "Sorry, you've used all attempts. The correct word was: " << secretWord << endl;
    return 0;
}
