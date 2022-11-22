#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main() {

  int nLines = 0;
  int * numbers = 0;
  int findNumber;
  string tmp;

  ifstream myNumbers;
  cout << "Filename? ";
  getline(cin, tmp);
  myNumbers.open(tmp.c_str());
  if (!myNumbers.good()) {
    cout << "Invalid filename" << endl;
    return (-1);
  }
  cout << "How many numbers to read from the file? ";
  cin >> nLines;
  cout << "Reading " << nLines << " numbers from numbers.txt" << endl;
  cout << "Which number should I look for? ";
  cin >> findNumber;
  numbers = new int[nLines];

  if (myNumbers.is_open()) {
    for (int i = 0; i < nLines; i++) {
      myNumbers >> numbers[i];
      if (findNumber == numbers[i]) {
        cout << findNumber << " is in the array." << endl;
      }
      delete[] numbers;
    }

  }
  return 0;
};