#include <iostream>
using namespace std;
//
//
// Starter file for Lab #8.  You will need 3 arrays:
// - City names
// - Populations
// - Home country
//
// The arrays are 'parallel' in the sense that for a given index,
// corresponding values are using the same index in each array.
//
// This constant will be used to specify the size of each
// of the arrays.
const int NUM_VALUES = 5;
// Array of capital cities -- use any cities of your
// choice.
string capitals[NUM_VALUES] = {
    "Washington, D.C.",
    // More cities here
};
// Two other arrays here (population and home country).
int main() {
    string input;
    // Ask for a city name -- getline() is required here!
    // Some capitals may have spaces in the name.
    cout << "Input the name of a city: ";
    getline(cin, input);
    // Loop through the 'capitals' array first, and
    // find the matching index.   You may find it
    // easier to write a function to do this but that's not
    // required.
    // If the string was found, use the index where it was found
    // to fetch the value in the 'population' array.
    
    // Then, do the same for the 'home country' array.
    
    // Output the result here.
    return (0);
}