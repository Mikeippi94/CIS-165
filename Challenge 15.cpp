#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double acre;
	double assess;
	double tax;
	
	acre = 0;
	
	
	cout << "What is total property value: " <<endl;
	cin >> acre;
	
	assess = acre * .60;
	tax = assess * 0.0075;
	
	cout << "Assessment: " << fixed << setprecision(2) << setw(9) << "$" << assess << endl;
	cout << "Property Tax: "<< fixed << setprecision(2) << setw(10) << "$" << tax << endl;
	
	return 0;
}
