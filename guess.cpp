/*
Time for us to start writing computer games! This first one will be a bit simple, but it's a start. Our task is to write a program that implements a guessing game. Our program generates a random number between 0 and 100. The player must guess the secret number. The program provides hints like "that's too high" or "that's too low" until the player finally guesses the secret number.
*/

// Thomas Phillips
// June 21, 2017

#include <iostream>
#include <time.h>

using namespace std;

int main() {
  const int CEILING = 100;
  srand (time(NULL));

  int randomNumber = rand() % CEILING + 1;
  int guess;

  do {
    cout << "Guess a number up to " << CEILING << ": ";
    while (!(cin >> guess) || guess < 0) {
      cerr << "Bad input." << endl;
      cin.clear();
      cin.ignore(INT_MAX, '\n');
      cout << "Guess a number: ";
    }

    if (guess < randomNumber) {
      cout << "Too low." << endl;
    } else if (guess > randomNumber) {
      cout << "Too high." << endl;
    }
  } while (guess != randomNumber);

  cout << "That's it!" << endl;
  return 0;
}
