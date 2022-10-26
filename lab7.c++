#include <iostream>

#include <iomanip>

using namespace std;

int getMedian(int n1, int n2, int n3) {

  int median;

  if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) {
    median = n1;
  } else if ((n2 > n3 && n2 < n1) || (n2 < n3 && n2 > n1)) {
    median = n2;
  } else if ((n3 > n1 && n3 < n2) || (n3 < n1 && n3 > n2)) {
    median = n3;
  } else {
    return 0;
  }
  return median;
}

double getAverage(int n1, int n2, int n3) {

  double average;

  average = (n1 + n2 + n3) / 3.00;

  return average;

}
int main() {

  int n1, n2, n3;
  double av;
  int median;

  cout << "Enter 3 integers: " << endl;
  cin >> n1;
  cin >> n2;
  cin >> n3;

  while (n1 < 0 || n2 < 0 || n3 < 0) {
    cout << "Negative values are not allowed!" << endl;
    cout << "Enter 3 integers: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
  }

  median = getMedian(n1, n2, n3);
  av = getAverage(n1, n2, n3);

  cout << "The average is " << setprecision(2) << fixed << av << endl;
  cout << "The median is " << median << endl;
  
  return (0);
}