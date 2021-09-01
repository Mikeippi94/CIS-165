#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float budget;
	int day = 1;
	int days;
	float sum = 0;
	float expen;
	
	
	cout << "How many days are in the month? ";
	cin >> days;
	cout << endl;
	cout << "How much have you bugeted this month? ";
	cin >> budget;
	cout << endl;
	
	for(day = 1; day <= days; day++)
	{
		cout << "Day: " << day << "  How much did you spend today? ";
		cin >> expen;
		cout << endl;
		sum = sum + expen;
	}
	while(day <= days);
	
	if(budget > sum)
	{
		cout << "You are under budget" << endl;
		cout << "Your total expeses were: $" << fixed << setprecision(2) << sum << endl;
	}
	else if(budget < sum)
	{
		cout << "You are over budget" << endl;
		cout << "Your total expeses were: $" << fixed << setprecision(2) << sum << endl;
	}
	
	return 0;
}
