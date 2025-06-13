#include <iostream>

using namespace std;

int main ()
{
  srand(time(0));

  int attemptsNeeded = 0;

  int randomNum = rand() % 1001;

  int guessedNumber;

  do {
    ++attemptsNeeded;

    cout << "Insert a number between 1 and a 1000." << endl;
    cin >> guessedNumber;

    if(guessedNumber > randomNum) {
      cout << "Your guess is too high." << endl;
    }
    else if (guessedNumber < randomNum) {
      cout << "Your guess is too low." << endl;
    }
    else {
      cout << "Your guess is correct." << endl;
    }
  } while(guessedNumber != randomNum);

  cout << "You needed " << attemptsNeeded << " attempts." << endl;
}

