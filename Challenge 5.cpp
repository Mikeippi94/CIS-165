#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float num1;
	float num2;
	float num3;
	float avgm;
	float avgf;
	float total;

	num1 = 0;
	num2 = 0; 
	
	cout << "Enter number of males in class: " << endl;
	cin >> num1;
	cout << "Enter number of females in class: " << endl;
	cin >> num2;
	total = num1 + num2;
	cout << "Total number of students: " << total << endl;
	avgm = (num1/total)*100;
	cout << "Average number of males: " << fixed << setprecision(2) << avgm << "%"<< endl;
	avgf = (num2/total)*100;
	cout << "Average number of females: " << fixed << setprecision(2) << avgf << "%" << endl;
	return 0;
}
