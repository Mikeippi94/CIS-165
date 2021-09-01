#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int RAIN = 12;
int main(int argc, char** argv) {
	double findarray[RAIN];
	double maxrain;
	double maxidx;
	double minrain;
	double minidx;
	double total_rainfall;
	double average_rainfall;
	


	for(int i = 0; i < RAIN; i ++)
	{
		cout << "Amount of rainfall this month: ";
		cin >> findarray[i];
	
		if(findarray[i] > -1)	
		{		
			for (int i = 0; i < RAIN; i++)
			{
				if(i == 0) 
				{
					maxrain = findarray[i];
					maxidx = i;
				}
				if(findarray[i] > maxrain)
				{
					maxrain = findarray[i];
					maxidx = i;	
				}	
				if(i == 0) 
				{
					minrain = findarray[i];
					minidx = i;
				}
				if(findarray[i] < minrain)
				{
					minrain = findarray[i];
					minidx = i;
				}	
				
			}	
	
		total_rainfall = total_rainfall + findarray[i];
	
		}
	
	}
	average_rainfall = total_rainfall /RAIN;
	
	cout << endl;
	cout << "Highest Amount of rain is: " << maxrain << " During Month: " << maxidx <<endl;
	cout << "Lowest Amount of rain is: " << minrain << " During Month: " << minidx << endl;
	cout << "Average rainfall per month: " << average_rainfall << endl;
	cout << "Total rainfall: " << total_rainfall << endl;

	return 0;
}
