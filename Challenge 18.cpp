#include <iostream>
#include <iomanip>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int year;
	int stars;
	int counter;
	stars = 0;
	counter = 0;
	year = 0;
	
	
	cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
	cout << "(each *represents 1,000 people)" << endl;

	for( int year = 1920; year <= 2000; year+= 20)
	{
		cout << setw(2) << year << " *";
		
		
		for(stars = 1900; stars < year; stars+= 20)
		{
			cout << "*";
		}
		
		
		
		
		
		
	cout << endl;
	}
	

	

	return 0;
}
