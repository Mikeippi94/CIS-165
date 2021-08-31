#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const double YEN_PER_DOLLAR = 98.93;
const double EURO_PER_DOLLAR = 0.74;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	double num1;
	double yen;
	double euro;
	

	
	cout << "Enter a dollar amount to be converted into yen and euro: " << endl;
	cin >> num1;
	
	yen = num1 * YEN_PER_DOLLAR;
	euro = num1 * EURO_PER_DOLLAR;
	
	cout << "converted yen amount: " << fixed << setprecision(2) << yen << endl; 
	cout << "converted euro amount: " << fixed << setprecision(2) << euro << endl;
	return 0;
}
