#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double loan;
	double insur;
	double gas;
	double oil;
	double tires;
	double main;
	double tot;
	double anu;
	
	loan = 0;
	insur = 0;
	gas = 0;
	tires =  0;
	main = 0;

	
	cout << "How much is your loan payment: " << endl;
	cin >> loan;
	cout << "How much is your insurance payment: " << endl;
	cin >> insur;
	cout << "How much is your gas payment: " << endl;
	cin >> gas;
	cout << "How much is your oil payment: " << endl;
	cin >> oil;
	cout << "How much is your tire payment: " << endl;
	cin >> tires;
	cout << "How much is your maintanice payment: " << endl;
	cin >> main;
	
	tot = loan + insur + gas + oil + tires + main;
	anu = tot * 12;
	
	cout << "total montly cost: " << fixed << setprecision(2) << "$" << tot << endl;
	cout << "total annual cost: " << fixed << setprecision(2) << "$" << anu << endl; 
	return 0;
}
