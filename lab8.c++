#include <iostream>

using namespace std;

const int CITY = 5;
const int POPU = 5;
const int HOME = 5;

string capitals[CITY] = {
  "Montevideo",
  "Ottowa",
  "Tokyo",
  "Seoul",
  "Beijing"
};

int population[POPU] = {
  3544000,
  934243,
  37274000,
  9975709,
  21333332
};

string country[HOME] = {
  "Uruguay",
  "Canada",
  "Japan",
  "South Korea",
  "China"
};

int main() {
  string input;
  cout << "Input the name of a city: ";
  getline(cin, input);

  //For loop to parse through the array. i < 5 because the array starts at the value of 0.
  for (int i = 0; i < 5; i++) {
    if (capitals[i] == input) {
      cout << capitals[i] << " is the capital of " << country[i] << " and has population of " << population[i] << "." << endl;
      break;
      //Only if i >= 4 which is capitals[4] in which then if a country doesn't exist in my array, print the error message
    } else if (i >= 4) {
      cout << input << " is not found in my list of cities." << endl;
    }
  }
  return (0);
}