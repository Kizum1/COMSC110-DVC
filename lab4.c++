#include <iostream>

using namespace std;

const int SECRETNUM = 10;

int main() {
  int numGuesses;
  int guess;

  cout << "How many guesses should be allowed? ";
  cin >> numGuesses;

  while (numGuesses < 1 || numGuesses > 5) {
    cout << "Invalid input, please enter a number from 1 to 5." << endl;
    cout << "How many guesses should be allowed? ";
    cin >> numGuesses;

  }
  for (int i = 1; i <= numGuesses; i++) {
    cout << "What is your guess? ";
    cin >> guess;
    if (guess == SECRETNUM) {
      cout << "That's right!" << endl;
      break;
    } else if (guess > SECRETNUM) {
      cout << "That number is too high." << endl;

    } else if (guess < SECRETNUM) {
      cout << "That number is too low." << endl;

    }
    if (i == numGuesses) {
      cout << "Too many guesses. The secret number is: " << SECRETNUM << endl;

    }
  }

  return 0;
}