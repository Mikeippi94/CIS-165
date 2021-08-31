#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int counter = 0;
	do
	{
		if (counter % 2 !=0)
			cout << counter << endl;	
	}
	while (counter++ < 100);
	
/*	
	char inletter;
	cout << "enter a letter, press '!' or '#' to quit" <<endl;
	cin >> inletter,
	*/
	
	
	
	return 0;
}
