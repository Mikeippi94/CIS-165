#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int emplo_num;
	float gross_pay;
	float state_tax;
	float federal_tax;
	float fica;
	float sum;
	float sum1;
	float sum2;
	float sum3;
	
	
		cout << "Enter Employee ID number (enter 0 to quit program)" <<endl;
		cin >> emplo_num;			
		
		while (emplo_num != 0)
	{
	
		
		cout << "Enter Gross Pay" <<endl;
		cin >> gross_pay;
	
	
		cout << "State tax: " <<endl;
		cin >> state_tax;
	
		cout << "Federal Tax: " <<endl;
		cin >> federal_tax;
	
		cout << "FICA: " <<endl;
		cin >> fica;
		sum = state_tax + federal_tax + fica;
		sum3 = gross_pay + state_tax + federal_tax + fica;
	
		if (sum > gross_pay)
		{
		cout << endl;
		cout << "*** Error message ***"<< endl;	
		cout << endl;
		}
	
		else
		{
		cout << "Employee ID"<< "    " << " Gross Pay " << "    " << "State Tax " << "    "<< " Federal Tax "<< "    " << " FICA " << "    " << " Total " << endl;	
		cout << emplo_num << "             " << fixed << setprecision(2) << gross_pay << "           " << fixed << setprecision(2) << state_tax 
		<< "        "<< fixed << setprecision(2) << federal_tax << "         " << fixed << setprecision(2) << fica << "          "<< fixed << setprecision(2) << sum3 << endl;
		cout << endl; 
		cout << endl;
		}
	
    
	}

	return 0;
}
