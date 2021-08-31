#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{ 
	float cust;
	float energy;
	float citrus;
	float total;
	float cittotal;
	
	cust = 16500;
	energy = .15;
	citrus = .58;
	total = cust * energy;
	citrus = total * citrus;
	
	cout << "Total Customers that buy energy drinks: " << total << endl;
	cout << "Total number of customers that drink citrus flavored energy drinks: " << citrus << endl;
	
	return 0;
}
