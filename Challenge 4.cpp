#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char month1[20];
	char month2[20];
	char month3[20];
	float num1;
	float num2;
	float num3;
	float avg;
	float total;

	num1 = 0;
	num2 = 0; 
	num3 = 0;
	
	cout << "Month " << endl;
	cin >> month1;
	cout << month1 << " rain per month " << endl;
	cin >> num1;
	cout << num1 << " inches" << endl;
	cout << "Month " << endl;
	cin >> month2;
	cout << month2 << " rain per month " << endl;
	cin >> num2;
	cout << num2 << " inches" << endl;
	cout << "Month " << endl;
	cin >> month3;
	cout << month3 << " rain per month " << endl;
	cin >> num3;
	cout << num3 << " inches" << endl;
	total = num3 + num2 + num1;
	avg = total/3;
	cout << "Average rainfall for 3 months: " << avg << " inches" <<endl;

	return 0;
}
