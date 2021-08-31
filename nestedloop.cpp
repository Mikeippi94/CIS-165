#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num = 0;
	int star;
	int starcounter = 8;
	int num1;
	
	do
	{
		
		
		star = 1;
		do
		{
			cout << "*";
		}
		while(++star < 8);
		starcounter++;
		
	
		
	}
	while(num++ <= 4);
	

	return 0;
}
