#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float share;
	float price;
	float com;
	float sum;
	float comission;
	float total;
	
	share = 750;
	price = 35.00;
	com = .02;
	sum = share * price;
	comission = sum * com;
	total = sum + comission;
	
	cout << "Ammount paid for stock: $" << sum << endl;
	cout << "Ammount paid for comission: $" << comission << endl;
	cout << "Total: $" << total << endl;	
	return 0;
}
