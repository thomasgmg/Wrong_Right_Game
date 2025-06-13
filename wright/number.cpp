#include "number.hpp"
#include <iostream>

using namespace std;

int numbers[4] = {1, 5, 7, 10};

bool isNumberCorrect(int randomNumber) {
  return (randomNumber == numbers[0] || randomNumber == numbers[1] ||
          randomNumber == numbers[2] || randomNumber == numbers[3]);

  int n = sizeof(numbers) / sizeof(numbers[0]);

  for (int i = 0; i < n; ++i) {
    cout << numbers[i] << "\n";
  }
  return 0;
}
