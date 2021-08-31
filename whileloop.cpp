#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char inletter = '\0';
	
	while (inletter != '!' && inletter !='#')
	{
		cout << "enter a letter, press '!' or '#' to quit" <<endl;
		cin >> inletter;
	}
	
	
			
	return 0;
}
