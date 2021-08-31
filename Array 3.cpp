#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int SIZE = 5;

int main(int argc, char** argv) {
	
	int array[SIZE];
	int sum;
	int mean = 0;
	int limit = 2;
	double total;
	
	for(int number = 0; number < SIZE; number++)
	{
		cout << number<< " ";
		
		if(number > limit)
		{
			sum = sum + number;
			mean++;
		}
		
	}
	total = sum/mean;
	cout << "The Mean of all the numbers are : " << total << endl;

	return 0;
}
