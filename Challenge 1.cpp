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
	for (int i = 0; i < SIZE; i ++)
	{
		cout << "Please enter a number: ";
		cin >> findarray[i];
		
		for (int i = 0; i < SIZE; i++)
		{
			if(i == 0) 
			{
				max = findarray[i];
				maxidx = i;
			}
			if(findarray[i] > max)
			{
				max = findarray[i];
				maxidx = i;	
			}	
			if(i == 0) 
			{
				min = findarray[i];
				minidx = i;
			}
			if(findarray[i] < min)
			{
				min = findarray[i];
				minidx = i;
				
			}	
		}	
		
	}
	cout << "Highest Number is: " << max << endl;
	cout << "Lowest Number is: " << min << endl;
	

	return 0;
}
