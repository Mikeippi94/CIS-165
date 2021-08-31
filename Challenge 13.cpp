#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float prc;
	float mrkup;
	float sellprce;
	float sum;
	
	prc = 14.95;
	mrkup = .35;
	sum = prc * mrkup;
	sellprce = sum + prc;
	
	cout << "Selling Price of circuit Board is: $" <<sellprce << endl;
	return 0;
}
