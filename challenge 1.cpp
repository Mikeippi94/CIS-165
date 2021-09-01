#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1;
	int num2;
	
	cout << "enter a number: " << endl;
	cin >> num1;
	cout << "enter a 2nd number: " << endl;
	cin >> num2;
	
	if (num1 > num2)
	{
		cout << num1 << " is larger "<< endl;
	}
	else 
	{
		cout << num2 << " is larger" << endl;
	}
	
	
	return 0;
}
