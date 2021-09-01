#include <iostream>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int MINUS= 2;
const int ADD= 1;
const  int MULTIPLY= 3;
const int DIVIDE= 4;
const int QUIT = 5;
int main(int argc, char** argv) {
	

	int num1 = 20;
	int num2 = 5;
	int sum1;
	int sum2;
	int choice;
	
	
	do
	{
	cout << "Math Menu "<< endl;
	cout << " 1. Addition " << endl;
	cout << " 2. subtraction " << endl;
	cout << " 3. Multiplacation " << endl;
	cout << " 4. Division " << endl;
	cout << " 5. Quit Program " << endl;
	cout << "enter your choice " << endl;
	cin >> choice;
	cout << endl;
	
		while(choice < ADD || choice > QUIT)
		{
		cout << "*** ERROR ***" << endl;
		cout << "Math Menu "<< endl;
		cout << " 1. Addition " << endl;
		cout << " 2. subtraction " << endl;
		cout << " 3. Multiplacation " << endl;
		cout << " 4. Division " << endl;
		cout << " 5. Quit Program " << endl;
		cout << "enter your choice " << endl;
		cin >> choice;
		cout << endl;
		}
		
	if(choice != QUIT)
	{
		
		switch(choice)
		{
		
			case ADD:
	
				sum1 = num1 + num2;
				cout << "   "<< num1 << endl;
				cout << "+  " << num2 << endl;
				cout << "------------" << endl;
				break;
			case MINUS:
			
				sum1 = num1 - num2;
				cout << "   "<< num1 << endl;
				cout << "-  " << num2 << endl;
				cout << "------------" << endl;
				break;
	
			case MULTIPLY:
	
				sum1 = num1 * num2;
				cout << "   "<< num1 << endl;
				cout << "*  " << num2 << endl;
				cout << "------------" << endl;
				break;
				
			case DIVIDE:
	
				sum1 = num1 / num2;
				cout << "   "<< num1 << endl;
				cout << "/ " << num2 << endl;
				cout << "------------" << endl;
				cin >> sum2;
				cout << endl;
				break;
			
		
	    }
	    	
				cin >> sum2;
				if(sum2 == sum1)
				{
				cout << " ***This is the correct answer*** " << endl;
				}
				else
				{
				cout << " The correct asnwer is: " << sum1 << endl;
				}
	}
	
	}while(choice != QUIT); 
	
	
	return 0;

}
