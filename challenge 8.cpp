#include <iostream>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float nickel;
	float dime;
	float penny;
	float quarter;
	int sum;
	float sum1;
	float sum2;
	float sum3;
	float sum4; 
	
	cout << " How many quarters?: ";
	cin >> quarter;
	cout << endl;
	cout << " How many dimes?: ";
	cin >> dime;
	cout << endl;
	cout << " How many nickels?: ";
	cin >> nickel;
	cout << endl;
	cout << " How many pennys?: ";
	cin >> penny;
	cout << endl;
	
	sum1 = quarter * .25;
	sum2 = dime * .10;
	sum3 = nickel * .05;
	sum4 = penny * .01;
	
	sum = sum1 + sum2 + sum3 + sum4;
	cout << sum;
	if(sum = 1)
	{
		cout << "Congradulations you win " <<endl;
	} 
	else if( sum > 1)
	{
		cout << " You have entered more than a dollar" << endl;
	}
	else
	{
		cout << "You have entered less than a dollar" << endl;
	}

	return 0;
}
