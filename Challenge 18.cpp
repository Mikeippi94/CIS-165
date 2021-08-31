#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// NEED TO HAVE SOMEONE EXPLAIN THE QUYESTION.
	
	double prin;
	double intres;
	double comp;
	double tot2;
	double sum2;
	double sum;
	double sum1;
	double sum3;
	double sum4;
	double sum5;
	
	cout << "enter Principal: " << endl;
	cin >> prin;
	cout << "enter Interest Rate: " << endl;
	cin >> intres;
	cout << "Times Compounded: " << endl;
	cin >> comp;
	
	sum = pow(intres,comp);
	sum1 = pow(1,comp);
	sum3 = pow(comp,comp);
	sum4 = sum1 + (sum/sum3);
	sum2 = prin * sum4; 
	sum5 = prin - sum2;
	tot2 = prin + sum5;
	
	cout <<"Interest Rate: " << fixed << setprecision(2) <<setw(9) << setw(9) << intres << "%" << endl;
	cout <<"Times Compounded: " << setw(19) << setw(18) << comp << endl;
	cout <<"Principal: " << fixed << setprecision(2) << setw(8) << "$ "   << setw(9) << prin << endl;
	cout <<"Interest: " << fixed << setprecision(2) << setw(9) << "$ "  << setw(9) << sum5 << endl;
	cout <<"Amount in savings: " << fixed << setprecision(2) << setw(9) << "$ " << setw(9) << sum2 << endl;
	return 0;
	
	
	return 0;
	
}
