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
    "Tokyo",
    "Seoul",
    "Beijing"
};

int main() {
    string input;
    // Ask for a city name -- getline() is required here
    // Some capitals may have spaces in the name.
    cout << "Input the name of a city: ";
    getline(cin, input);

    for (int i = 0; i < 5; i++) {
        if (capitals[i] == input) {
            
        } 
        else {
            cout << "That city does not exist in my index" << endl;
        }
    }
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