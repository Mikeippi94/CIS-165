#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	float avg;
	float total;

	num1 = 0;
	num2 = 0; 
	num3 = 0;
	num4 = 0;
	num5 = 0;
	
	

	cout << "Test grade 1: " << endl;
	cin >> num1;
	cout << "Test Grade 2: " << endl;
	cin >> num2;
	cout << "Test grade 3: " << endl;
	cin >> num3;
	cout << "Test grade 4: " << endl;
	cin >> num4;
	cout << "Test grade 5: " << endl;
	cin >> num5;
	total = num1 + num2 + num3 + num4 + num5;
	avg = total/5;
	
	
	cout << "Test average: " << fixed << setprecision(2)<< avg << endl;
	
	return 0;
}
