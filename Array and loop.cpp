#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int SIZE = 10;


int main(int argc, char** argv) {
	int findarray[SIZE];
	int max;
	int maxidx;
	int min;
	int minidx;
	int total = 0;
	
	for (int i = 0; i < SIZE; i ++)
	{
		cout << "Please enter a number: ";
		cin >> findarray[i];
		
		total = total + findarray[i]; // finds total
		
		for (int i = 0; i < SIZE; i++) // finds highest number 
		{
			if(i == 0) //current stop
			{
				max = findarray[i];
			}
			if(findarray[i] > max)
			{
				max = findarray[i];
			}	
		}	
	
		for (int i = 0; i < SIZE; i++) // finds lowest number
		{
			if(i == 0) 
			{
				min = findarray[i];
				
			}
			if(findarray[i] < min)
			{
				min = findarray[i];
				
			}	
			
		}	
		
	}
	
	cout << "OUTPUT" << endl;
	for(int i = 0; i < SIZE; i++) // finds the output
	{
		cout << findarray[i] << endl;
	}
	
	cout << "Highest Number is: " << max << endl;
	cout << "lowest Number is: " << min << endl;
	cout << "The total is: " << total << endl;

return 0;
}
