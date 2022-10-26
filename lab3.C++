#include <iostream>

#include <iomanip>

using namespace std;

const int REFERRAL_BONUS = 1000;

int main() {
//Variables needed for user input
  double spendTotal;
  double bonusPoints;
  char appScan;
  double referFriend;

//Variables needed to caluculate the total amount
  double appPoints;
  double doublePoints;
  double totalPoints;
  double autoPoints;

  cout << "How much did the customer spend in total? ";
  cin >> spendTotal;

  cout << "How many bonus points? ";
  cin >> bonusPoints;

  cout << "Was the app scanned at checkout (y/n)? ";
  cin >> appScan;

  cout << "How many friends did the customer refer? ";
  cin >> referFriend;

  autoPoints = spendTotal * 10;

//If else statement to check whether or not app was scanned.
  if (appScan == 'Y' || appScan == 'y') {
    doublePoints = autoPoints * 2;
  } else if (appScan == 'N' || appScan == 'n') {
    doublePoints = autoPoints;
  }
//Calculation for totalPoints considering all factors
  totalPoints = (doublePoints + bonusPoints + (REFERRAL_BONUS * referFriend));

//Output result with 2 decimal places
  cout << "\nThe total points earned today is " << setprecision(2) << fixed << totalPoints << endl;

  return 0;
}