#include <iostream>

using namespace std;

int sumOdd(int b, int e) {

  //first check, assuming odd was called, b is odd then return b + sumOdd(b+2,e)
  //Ex) b = 5 e = 10 -> 5 + sumOdd(7,10) -> 5 + 7 + sumOdd(9,10) -> 5 + 7 + 9 = 21
  if (b % 2 == 1 && b <= e) {
    return b + sumOdd(b + 2, e);
    //same deal with second check, except this time b is even so we would add one before recursion begins.
    //Ex) b = 6 e = 10 -> 7 + sumOdd(9,10) -> 5 + 7 + sumOdd(9,10) ->  7 + 9 = 16
  } else if (b % 2 == 0 && b < e) {
    b = b + 1;
    return b + sumOdd(b + 2, e);
  } else {
    return 0;
  }

}

int sumEven(int b, int e) {
  //same deal as sumOdd but modulus conditions are swapped.
  if (b % 2 == 0 && b <= e) {
    return b + sumEven(b + 2, e);
  } else if (b % 2 == 1 && b < e) {
    b = b + 1;
    return b + sumEven(b + 2, e);
  } else {
    return 0;
  }

}

int main() {
  int b, e;
  char Even, Odd, odd, even;
  string choice;
  
  cout << "Enter the starting number: ";
  cin >> b;
  cout << "Enter the ending number: ";
  cin >> e;
  cout << "Even or Odd: ";
  cin >> choice;

  if (b > e) {
    cout << "The starting number cannot be greater than the ending number" << endl;
  }

  if (choice == "Even" || choice == "even") {
    cout << sumEven(b, e) << endl;
  } else if (choice == "Odd" || choice == "odd") {
    cout << sumOdd(b, e) << endl;
  }

}