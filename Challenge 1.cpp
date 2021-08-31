#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float tank;
	float mile;
	float mpg;
	
	cout << "How big is the gas tank: " << endl; 
	cin >> tank;
	cout << "How many miles can you drive: " << endl;
	cin >> mile;
	mpg = tank * mile;
	cout << "Total MPG: " << mpg << endl;
	 
 	return 0;
}
