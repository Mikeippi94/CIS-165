#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double sum;
	double number;
	double sum1;
	double sum2;
	double sum3;
	
	for(int counter = 5; counter <= 30; counter+=5)
	{
		sum = counter * 1.5;
		
		
		cout << fixed << setprecision(2) << sum << " millimeters per " << fixed << setprecision(0) <<  counter << " year(s)"<< endl;
		
		
	}
	
	
	
	


	return 0;
}
