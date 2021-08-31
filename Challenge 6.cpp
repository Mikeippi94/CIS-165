#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double sugar;
	double butter;
	double flour;
	double prod1;
	double prod2;
	double prod3;
	double prod4;
	double total;
	
	prod1 = 1.5;
	prod2 = 1;
	prod3 = 2.75;
	total = 0;
	prod4 = 48;
	
	cout << "How many cookies do you want to make? " << endl;
	cin >> total;
	sugar = prod1/prod4;
	butter = prod2/prod4;
	flour = prod3/prod4;
	cout << "Cups of sugar needed: " << fixed << setprecision(2)<< total * sugar << " Cups"<< endl;
	cout << "Cups of flour needed: " << total * flour << " Cups" << endl; 
	cout << "Cups of flour needed: " << total * butter << " Cups"<< endl;
	cout << "Total cookies made: " << fixed << setprecision(0)<<total << " Cookies" << endl;
	
	
	
	return 0;
}
