#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float ca;
	float cb;
	float cc;
	float num1;
	float num2;
	float num3;
	float ta;
	float tb;
	float tc;
	float total;

	num1 = 0;
	num2 = 0; 
	num3 = 0;
	ca = 15.00;
	cb = 12.00;
	cc = 9.00;
	

	cout << "How many class A seats" << endl;
	cin >> num1;
	ta = num1 * ca;
	cout << ta << endl;
	cout << "How many class B seats" << endl;
	cin >> num2;
	tb = num2 * cb;
	cout << tb << endl;
	cout << "How many class C seats" << endl;
	cin >> num3;
	tc = num3 * cc;
	cout << tc << endl;
	total = tc + tb + ta;
	cout << "Total Price of Seats: $" << fixed << setprecision(2)<< total << endl;
	
	return 0;
}
