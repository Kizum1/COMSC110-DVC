
#include <iostream>
using namespace std;

const string TOP_NAME = "Dumpling Hours";
const int TOP_ZIP = 94596;
const int TOP_REVIEWS = 323;

int main()
{
	cout << "The top 10 restaurants in Contra Costa County are: \n";
	cout << "1) Dumpling Hours, 4.5 stars \n";
	cout << "2) Benvenuti Ristorante, 4.5 stars \n";
	cout << "3) The Hangout, 4.5 stars \n";
	cout << "4) Southern Comfort Kitchen, 4.0 stars \n";
	cout << "5) World Famous Hotboys, 4.5 stars \n";
	cout << "6) Daon, 4.5 stars \n";
	cout << "7) Lita, 4.0 stars \n";
	cout << "8) The Kebab Shop, 4.5 stars \n";
	cout << "9) Moresi's Chophouse, 4.0 stars \n";
	cout << "10) Rooftop, 3.5 stars \n\n";
	cout << "The top restaurant " << TOP_NAME << " is located in " << TOP_ZIP << " and has " << TOP_REVIEWS << " reviews. \n";
	return 0;
}
