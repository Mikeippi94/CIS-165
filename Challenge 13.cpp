#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
 {

	int num; 
	int highest;
	int lowest;
	
	num = 0;
	highest = 0;
	lowest = 0;

	do
	{
		cout << "Enter a number or -99 to exit: ";
		cin >> num;
		
		if (num > highest)
		{
			highest = num;
		}

		if (num < lowest)
		{
			lowest = num;
		}
	
		
	} while (num != -99);
	

	cout << "The highest number is " << highest << endl;
	cout << "The lowest number is " << lowest << endl;


return 0;
}
