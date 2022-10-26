#include <iostream>
#include <iomanip>
using namespace std;


const double DOLLAR_IN_BTC = 0.00005;

const double BTC_IN_DOLLAR = 20175.80;

double dollarsToBTC(double dol) {
    double bitcoin;

    bitcoin = dol / BTC_IN_DOLLAR;
    bitcoin = bitcoin - (bitcoin * 0.02);
    return bitcoin;

}

double BTCtodollars(double btc) {
    double dollars;
    
    dollars = btc / DOLLAR_IN_BTC;
    dollars = dollars - (dollars * 0.02);
    return dollars;
}

int main() {
    double val = 0;

    int myChoice;

    while (true) {
        cout << "\nWelcome to the Currency Exchange Service.  " << endl;
        cout << "Menu" << endl;
        cout << "----" << endl;
        cout << "1) Convert dollars to bitcoin" << endl;
        cout << "2) Convert bitcoin to dollars" << endl;
        cout << "3) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> myChoice;

        switch (myChoice) {
        case 1:
            cout << "Please input the amount in USD to exchange: ";
            cin >> val;
            cout << "The final amount is: $" << setprecision(4) << fixed << dollarsToBTC(val) << endl;
            break;
        case 2: 
            cout << "Please input the input amount in BTC to exchange: ";
            cin >> val;
            cout << "The final is amount in BTC is " << setprecision(2) << fixed << BTCtodollars(val) << endl;
            break;
        case 3:
            cout << "Exiting..." << endl;
            return 0;
       
          } 
    } 

    return 0;
}
