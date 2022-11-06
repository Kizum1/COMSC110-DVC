#include <iostream>

#include <cstdlib>

#include <ctime>

#include <vector>

using namespace std;

const int NUM_MAX = 100;
const int HOWMANY = 30;

int main() {
  vector < int > myVector;
  int counters[NUM_MAX] = { 0 };
  srand(time(0));

  //Number Generator (given)
  for (int i = 0; i < HOWMANY; i++) {
    int myRandom = rand() % NUM_MAX;

    myVector.push_back(myRandom);

    cout << myRandom << " ";

    if ((i + 1) % 15 == 0) {
      cout << endl;
    };
  }

  int commonNumber = 0;
  int howManyTimes = 0;

  //loop to determine the most common number
  for (int i = 0; i < HOWMANY; i++) {
    //initializing thisVal to each of the values in the vector from [0] - [29] individually. 
    int thisVal = myVector[i];

    //Add to counters[NUM_MAX] with initialized thisVal.  
    counters[thisVal]++;

    //Check arguement, if thisVal is greater than howManyTimes then commit the amount of times it appears to 
    //howManyTimes and set commonNumber equal to thisVal.
    if (counters[thisVal] > howManyTimes) {
      howManyTimes = counters[thisVal];
      commonNumber = thisVal;
    }

  };

  cout << "The most common number is " << commonNumber << " which appears " << howManyTimes << " times." << endl;

}