#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	double fah;
	double cel;
	double num1;
	double num2;
	double num3;
	double num4;
	
	num1 = 9;
	num3 = 5;
	num4 = num1/num3;
	num2 = 32;
	cel = 0;
	

	cout << "what is the temperature in celsius " << endl;
	cin >> cel;
	
	fah = num4*cel + num2;
	
	cout << "temperature in fahrenheit: "  << endl;
	cout << fixed << setprecision(1) << fah << " degrees" << endl;
	return 0;
}
