#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double sum;
	double sum5 = 2500;
	
	for(float counter = 1 ; counter <= 6; counter++ )
	{			
		cout << "$"<< fixed << setprecision(2) << sum5 << " per " << fixed << setprecision(0) << counter << " year(s)" << endl;
		sum = counter * (sum5 * .04);
		sum5 = sum + 2500;
		
	}
	

	return 0;
}
