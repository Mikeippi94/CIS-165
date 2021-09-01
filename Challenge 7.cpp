#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int ROWS = 7;
int main(int argc, char** argv)
 {
	int numbers[ROWS];
	int max;
	int maxidx;
	int min;
	int minidx;
	int average;
	int total;
	ifstream inFile;
	int number;
	
	inFile.open("d:\\devc++\Chapter 7\numbers.txt");
	
	
	if(inFile.fail())
	{
		cout << "Your file didnt work" << endl;
	}
	else
	{
		inFile >> number;
	}
	inFile.close();
/*	for(int i = 0; i < ROWS; i++)
	{
	
	
		while(inFile >> numbers[ROWS])
			{
			inFile >> numbers[number];
			if(i == 0) 
			{
				max = numbers[i];
				maxidx = i;
			}
			if(numbers[i] > max)
			{
				max = numbers[i];
				maxidx = i;	
			}	
			if(i == 0) 
			{
				min = numbers[i];
				minidx = i;
			}
			if(numbers[i] < min)
			{
				min = numbers[i];
				minidx = i;
			}	
			total = total + numbers[i];			
	
			}	
	}
	inFile.close();
	
	average = total /7;
	
	cout << "Highest number: " << max << endl;
	cout << "Lowest number: " << min << endl;
	cout << "Average: " << average << endl;
	cout << "Total: " << total << endl;
*/	


	return 0;
}
