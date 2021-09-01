#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	
	float sum;
	int number;
	float num1 = 3.6;
	
	
	for(int counter; counter <= 30; counter++)
	{
		
		sum = num1 * counter;	
		cout << "Calories burned " << sum << " per " << counter << " minutes" << endl;				
	}
	
	
	return 0;
}

