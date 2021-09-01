#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float interest_rate;
	float starting_bal;
	int months;
	int month = 0;
	float deposit;
	float withdrawl;
	float sum;
	float sum2; 
	float tot;
	float fintot;
	float monthly_inter;
	int dep;
	int depsum;
	int with;
	int withsum;
	float totinter;
	
	cout << "What is your annual interest rate? " << endl;
	cin >> interest_rate;
	cout << "What is your starting balance? " << endl;
	cin >> starting_bal;
	cout << "How many months have you had this account? " << endl;
	cin >> months;
	
	for(int month = 1; month <= months ; month++)
	{
		cout << "Month: "<< month << endl;
  		
		do
		{
			cout << "Whats the amount that you have deposited this month? " << endl;
			cin >> deposit;
			if (deposit == 0)
			{
				dep = 0;
			}
			else 
			{
				dep = 1;
			}
		depsum = depsum + dep;
		
		}
		while(deposit < 0);
	
	
	sum = deposit + starting_bal;	
	
	cout << endl;
	
		do
		{
			cout << "Whats the amount that you have withdrawn this month? " << endl;
			cin >> withdrawl;
			if(withdrawl == 0 )
			{
				with = 0;
			}
			else
			{
				with = 1;
			}
		withsum = withsum + with;
		}
		while(withdrawl < 0);
		
   	
	sum2 = sum - withdrawl;
    
	cout << endl;
    
    monthly_inter = interest_rate/12;
	tot = monthly_inter * sum2;
  	totinter = totinter + tot;
  	fintot = tot + sum2;
    }
   
   	cout << "Your Final Total is: " << fixed << setprecision(2) << fintot << endl;
   	cout << "Total deposits: " << fixed << setprecision(2) << depsum << endl;
   	cout << "Total withdrawls: " << fixed << setprecision(2) << withsum << endl;
   	cout << "Total interest earned: " << fixed << setprecision(2) << totinter << endl;
	return 0;
}
