#include <iostream>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int years;
	int month;
	float rain;
	float sum;
	int sum1;
	float sum2;
	
	cout << "number of years: ";
	cin >> years;
	cout << endl;
	
	sum1 = years *12;
	do
	{
		month = 1;
		
		
		do
		{
			cout << "Month number: " << month << endl;
			cout << " how many inches of rain fall: " << endl;
			cin >> rain;
			sum = sum + rain;
			
		}
		while(++month < 13);
	
		years--;
		if (years > 0)
		{
			cout << "Year Number: " << years << endl;
		}
		else 
		{
			cout << endl;
		}
	}
	while( 0 < years);
	sum2 = sum/sum1;
	cout << "Total number of rain that year: " << sum << " inches" << endl;
	cout << "Number of Months " << sum1 << endl;
	cout << "Average amount fo rain " << fixed << setprecision(2) <<  sum2 << " Inches"<< endl;	
	return 0;
}
