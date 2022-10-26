#include <iostream>
#include <iomanip>
using namespace std;

//Constant conversion number
const double KM_MILE = 1.61;

int main() {

//Setting variables for different values.
int batterySize;
double currentCharge;
double kmPerMile;
double resultMiles;
double resultKM;

//Prompt for size of battery
    cout << "Enter the size of your battery: ";
    cin >> batterySize;

//Prompt for currrent charge value.
    cout << "Enter current state of charge: ";
    cin >> currentCharge;

//Prompt for kWh consumed per mile
    cout << "Enter the kWh consumed per mile: ";
    cin >> kmPerMile;

//Arithmetic calculation and multiplies resultMiles by 1.61 for resultKM
    resultMiles = (batterySize * currentCharge) / (kmPerMile);
    resultKM = resultMiles * 1.61;

//Display to command prompt the values
    cout << "This vehicle will be able to travel " << setprecision(2) << fixed << resultMiles << " miles before charging. \n";
    cout << "That's " << setprecision(2) << fixed << resultKM << " kilometers. \n";

    return 0;
}

    