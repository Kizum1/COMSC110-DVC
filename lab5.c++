#include <iostream>

#include <string>

#include <fstream>

#include <iomanip>

using namespace std;

int main() {
  
  //Input the file
  ifstream inputFile("usernames.txt");

  //Variables needed, double for averageWord because it will hold decimal values
  string tmp;
  string shortWord;
  string longWord;
  double averageWord = 0;
  int totalUser;
  int nLines = 0;
  int b = 9999;
  int s = -9999;

  //If file is open then run the while loop
  if (inputFile.is_open()) {
    //Read the strings from the file and set it equal to tmp
    while (getline(inputFile, tmp)) {
      //Get string length of each line 
      int thisLength = tmp.size();\
      //Increment while this loop is true to find out how many lines there are
      nLines++;
      //If statement to find shortest word
      if (thisLength < b) {
        b = thisLength;
        shortWord = tmp;
        //If statement to find longest word
      }
      if (thisLength > s) {
        s = thisLength;
        longWord = tmp;
      }
      //Add up each string length to averageWord
      averageWord += thisLength;
    }
    inputFile.close();
  }
  //Divide the total by how many lines there were
  averageWord = averageWord / nLines;

  cout << "Total usernames read: " << nLines << endl;
  cout << "Shortest username: " << shortWord << ", length " << b << endl;
  cout << "Longest username: " << longWord << ", length " << s << endl;
  cout << "Average length of all usernames: " << setprecision(2) << fixed << averageWord << endl;
  
  return 0;

}