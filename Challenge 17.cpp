#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	double num1;
	double num2;
	double num3;
	
	num1 = 0;
	num2 = 0;
	
	cin >> num1;
	cout << "+";
	cin >> num2;
	cout << "______" << endl;
	
	num3 = num1 +num2;
	
	cout << num3 << endl;
	
	 

	return 0;
}
