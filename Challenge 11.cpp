#include <iostream>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	double org;
	float average;
	double days;
	float sum;
	float sum1;
	double sum2;
	
	cout << "What is the starting number of organisms: ";
	cin >> org;
	cout << endl;
	cout << "What is their daily polulation increase (as a percentage)? ";
	cin >> average;
	cout << endl;
	cout << "What is the total number of days they will multiply? ";
	cin >> days;
	cout << endl;
	
	sum2 = average/100;
	
	cout << "Number of Organisms: " << fixed << setprecision(2) << org << endl;
	cout << "Average growth: " << fixed << setprecision(0) << average << "%" << endl;
	cout << "day(s): " << fixed << setprecision(0) << days << endl;
	
	
	do
	{
		
		sum1 = sum2*org;
		do
		{
			sum = sum1 + org;
			org+=sum1; 
			
		}
		while(++org > org);
	
		days--;
		if (days > 0)
		{
			cout << "Number of Organisms: " << fixed << setprecision(2) << org << endl;
			cout << "Average growth: " << fixed << setprecision(0) << average << "%" << endl;
			cout << "day(s): " << fixed << setprecision(0) << days << endl; 	
		}
		else 
		{
			cout << endl;
		}
	}
	while(days > 0);
	
	
	
	return 0;
}
