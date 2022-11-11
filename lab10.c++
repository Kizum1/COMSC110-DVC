#include <iostream>
using namespace std;

//
// This file is a starter to help you work through Lab #10 (Recursion).
//


// This sums up all the numbers in the range
// b ... e inclusive that are odd.
//
// The 'b' parameter marks the beginning of the range.  For each call to sumOdd
// this parameter should increase by 1.  It represents the "current" number being
// considered.  This should occur until 'b' passes 'e'.  The 'e' paramter is the end
// of the range.
//
int sumOdd(int b, int e) {

    // First, see when to stop the recursion.
    if (b > e) {
        cout << "The starting number cannot be greater than the ending number" << endl;
        return 0;
    }



    if (b % 2 == 0) {
        return sumOdd(b, e);
    } else {
        return (b + sumOdd(b, e));
    }
    // What condition will cause you to return 0 without making
    // another recursive call?  If you keep incrementing the
    // starting point, what happens when it gets higher than the
    // ending point?
    //
    // Add your base case here.
    //

    // Next, see if the number is odd or even.
    // If the number is even, num % 2 is equal to 0.
    //
    // If the number is odd, we want to include it in the
    // sum.  Else, we want to skip over it.
    //
    // To include it in the sum, the return call would be:
    // return (b + sumOdd(b + 1, e))


    // Otherwise the number is even, so we want to *not* include
    // 'b' in the overall sum, but still make the recursive call
    // to sumOdd.
}

// This sums up all the numbers in the range
// b ... e inclusive that are even.
//
// This function has only 1 paramter but should have 2 (the start and the end of the range).
//
int sumEven(int b, int e) {
    // The same code as in sumOdd but with the checks reversed.

    // Side note:  can you think of a way to do this with just one function?
}

int main()
{
    int b, e;
    string choice;
    cout << "Enter the starting number: ";
    cin >> b;
    cout << "Enter the ending number: ";
    cin >> e;
    cout << "Even or Odd: ";
    cin >> 

    // ...
    // The rest of your inputs and calculations here.
    // You can call sumEven() or sumOdd() based on what the
    // user requests, then output the sum.

    // sum = sumOdd(5, 10);
    // cout << 
    // return 0;
}
