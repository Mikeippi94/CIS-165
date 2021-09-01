#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int sales;
	int store;
	int stars;
	int counter;
	
	
	sales = 0;
	store = 0;
	
	
	cout << "SALES BAR CHART" << endl;
	cout << "(Each * = $100)" << endl;
	
	for( int store = 1; store <= 5; store++)
	{
		cout << "Enter todays sales for store " << store << ": $";
		cin >> sales;
		
		stars = sales/100;
		
		cout << "Store " << store<< ": ";
		
		for(counter = 0; counter < stars; counter++)
		{
			cout << "*";
		}
		cout << endl;
	}

	

	return 0;
}
	
			
		

