#include <cstdlib>
#include <ctime>
#include <iostream>

#include "number.hpp"

using namespace std;

// bool isNumberCorrect(int randomNumber) {
//   return (randomNumber == numbers[0] || randomNumber == numbers[1] ||
//           randomNumber == numbers[2] || randomNumber == numbers[3]);
// }

int main() {

  int points = 0;

  srand(time(0));

  for (int i = 0; i != 10; ++i) {
    int randomNumber = rand() % 10 + 1;

    cout << "press Enter to generate a random number...";
    cin.get();

    cout << "Random Number: " << randomNumber << endl;

    if (isNumberCorrect(randomNumber)) {
      cout << ":) You win!" << endl;
      points += 2;

    } else {
      cout << ":( You lose" << endl;
    }

    cout << "Your points: " << points << endl;
  }
}
