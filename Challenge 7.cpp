#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int days;
	float penny;
	float sum;

	

	cout << "How many days did you work? " << endl;
	cin >> days; 
	cout << endl;
	
	cout << "Days " << "  " << "Salary per day " << endl;
	
	while (0 < days )
    {
      	
      penny = .01;
      while (penny > 0  && 0 < days )
        {
          cout << days << "       " << fixed << setprecision(2) <<  sum << endl;
          days--;
    
		  sum = sum + penny;
          penny+=0.01;
          
        }
    }
	cout <<"Total salary: $" << fixed << setprecision(2)<< sum << endl;
	
	
	
	return 0;
}
