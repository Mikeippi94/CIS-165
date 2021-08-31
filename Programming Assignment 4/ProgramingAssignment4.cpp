#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

const int MAX_SIZE = 50;
const int NAME_SIZE = 30;
const int COLUMNROW = 4;

typedef char STRING_30[NAME_SIZE];
typedef STRING_30 LIST_S30[MAX_SIZE];
typedef STRING_30 LIST_COL[COLUMNROW];
typedef int LIST_I[MAX_SIZE];
typedef float LIST_F[MAX_SIZE];
typedef char STRING30[30];
typedef STRING30 LISTNAMES[11];
typedef STRING30 TEMPNAME[1];
int main(int argc, char** argv) {
	

	ifstream in;
	in.open("c:\\invoice1_test1.txt");
	int minidx;
	float temp;
	float balancetotal;
	int max;
	int maxidx;
	float maxbal;
	int maxbalidx;
	int count = 0;
	
	if (in.is_open())
	{
	LISTNAMES people;
	TEMPNAME minimumperson;
	LIST_S30 lastname, firstname;
    LIST_I daysofrent;
    LIST_F balancedue;
    LIST_COL headers;
	
	
	int listcount = 0;
	
		while ( listcount <= 11)
    	{
          
        	if (listcount == 0)
          	{
           		in >> headers[listcount] >> headers[listcount] >> headers[listcount] >> headers[listcount];
          	}
          	else
          	{
           		in >> lastname[listcount-1] >> firstname[listcount-1] >> daysofrent[listcount-1] >> balancedue[listcount-1];
          	}
          	listcount ++;
    	}
	
	listcount=0;
 
	//arranging list alphabetically		
	for(int i= 0; i < 11; i++)
	{		
		minidx = i;
	    strcpy(minimumperson[0],lastname[i]);
		for(int j = i; j < 11; j++)
		{
			int match = strcmp(lastname[j],minimumperson[0]);
			if (match < 0)
			{
				
				minidx = j;					
				strcpy(minimumperson[0], lastname[j]);		
			}
							
		}
		strcpy(minimumperson[0], lastname[minidx]);
		strcpy(lastname[minidx], lastname[i]);
		strcpy(lastname[i], minimumperson[0]);
		
		strcpy(minimumperson[0], firstname[minidx]);
		strcpy(firstname[minidx], firstname[i]);
		strcpy(firstname[i], minimumperson[0]);
		
		temp = daysofrent[i];
		daysofrent[i] = daysofrent[minidx];
		daysofrent[minidx] = temp;
		
		temp = balancedue[i];
		balancedue[i] = balancedue[minidx];
		balancedue[minidx] = temp;	
	}
	
	// Balance Total
	for(int i = 0; i < 11; i++)
	{
		balancedue[i];
		balancetotal = balancetotal + balancedue[i];
	}
	
	//max number of days
	for (int i = 1; i < 11; i++)
	{
		if(i == 0)
		{
			max = daysofrent[i];
			maxidx = i;
		}
		if(daysofrent[i] > max)
		{
			max = daysofrent[i];
			maxidx = i;		
		}	
	}
	
	// max balance due
	for (int i = 0; i < 11; i++)
	{
		if(i == 0)
		{
			maxbal = balancedue[i];
			maxbalidx = i;
		}
		if(balancedue[i] > maxbal)
		{
			maxbal = balancedue[i];
			maxbalidx = i;
		}	
		
	}	
	
	// Output
	cout << setw(15) << "Lastname" << setw(15) << "FirstName" << setw(15) << "DaysofRental" << setw(15) << "BalanceDue" << endl; 
	
	for(int i= 1; i < 11; i++)
	{		
		cout << setw(15);
		cout << lastname[i];
		cout << setw(15);
		cout << firstname[i];
		cout << setw(15);
		cout << daysofrent[i];
		cout << setw(10);
		cout << fixed << setprecision(2) << "$"<< balancedue[i];
		cout << endl;
		
	}
	cout << "Total Balance due for file: $" << fixed << setprecision(2) << balancetotal << endl;
	
	for(int idx = 1; idx < 11; idx++)
	{
		if(idx = max)
		{
			cout << "Customer(s) with the highest number of rental days are: " << firstname[maxidx] << " " << lastname[maxidx] << endl;
		}
		
	}
	cout << "Customer(s) with the highest balance due are: ";
	for(int idx = 1; idx < 11; idx++)
	{
		if(idx = maxbal)
		{	
			cout << firstname[maxbalidx] << " " << lastname[maxbalidx] ;
			
			if(maxbal = balancedue[idx] )
			{
				cout << ", " << firstname[maxbalidx+1] << " " << lastname[maxbalidx+1];	
			}
		}
		
	}
	
	//Output for text file
	ofstream outputfile;
	outputfile.open("g:\\sorted.txt");
	
	outputfile << setw(15) << "Lastname" << setw(15) << "FirstName" << setw(15) << "DaysofRental" << setw(15) << "BalanceDue" << endl; 
	
	for(int i= 1; i < 10; i++)
	{		
		outputfile << setw(15);
		outputfile << lastname[i];
		outputfile << setw(15);
		outputfile << firstname[i];
		outputfile << setw(15);
		outputfile << daysofrent[i];
		outputfile << setw(10);
		outputfile << fixed << setprecision(2) << "$"<< balancedue[i];
		outputfile << endl;
		
	}
	outputfile << "Total Balance due for file: $" << fixed << setprecision(2) << balancetotal << endl;
	
	for(int idx = 1; idx < 11; idx++)
	{
		if(idx = max)
		{
			outputfile << "Customer(s) with the highest number of rental days are: " << firstname[maxidx] << " " << lastname[maxidx] << endl;
		}
		
	}
	outputfile << "Customer(s) with the highest balance due are: ";
	for(int idx = 1; idx < 11; idx++)
	{
		if(idx = maxbal)
		{	
			outputfile << firstname[maxbalidx] << " " << lastname[maxbalidx] ;
			
			if(maxbal = balancedue[idx] )
			{
				outputfile << ", " << firstname[maxbalidx+1] << " " << lastname[maxbalidx+1];	
			}
		}
		
	}
	
	}
	else
	{
		cout << "File failed to open" << endl;
	}
	

	return 0;
}
