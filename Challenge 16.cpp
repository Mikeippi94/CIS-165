#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double acre;
	double assess;
	double tax;
	double sen;
	double sum1;
	double quart;
	
	acre = 0;
	sen = 5000;
	
	cout << "What is total property value: " <<endl;
	cin >> acre;
	
	
	assess = acre * .60;
	sum1 = assess - sen;
	tax = sum1 * 0.0264;
	quart = tax/4;
	
	cout << "Assessment: " << fixed << setprecision(2) << setw(9) << "$" << assess << endl;
	cout << "Property Tax: "<< fixed << setprecision(2) << setw(10) << "$" << tax << endl;
	cout << "Quartly Property Tax: "<< fixed << setprecision(2) << setw(10) << "$" << quart << endl;
	
	return 0;
}
