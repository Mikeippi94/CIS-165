#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	char mon[20];
	char year[20];
	double tot;
	double sale;
	double count;
	double state;
	double tot2;
	
	tot = 0;
	
	

	
	
	cout << "Month: ";
	cin >> mon;
	cout << " Year: ";
	cin >> year;
	cout << "Total collected: ";
	cin >> tot;	
	
	
	count = tot *.02;
	state = tot *.04;	
	tot2 = count + state;
	sale = tot - tot2;
	
	cout << "Month: " << mon << endl;
	cout << "Year: " << year << endl;
	cout << "----------------------" << endl;
	cout <<"Total Collected: " << fixed << setprecision(2) <<setw(9) << "$ " << setw(9) << tot << endl;
	cout <<"Sales: " << fixed << setprecision(2) << setw(19) << "$ " << setw(9) << sale << endl;
	cout <<"County Sales Tax: " << fixed << setprecision(2) << setw(8) << "$ "   << setw(9) << count << endl;
	cout <<"State Sales Tax: " << fixed << setprecision(2) << setw(9) << "$ "  << setw(9) << state << endl;
	cout <<"Total Sales Tax: " << fixed << setprecision(2) << setw(9) << "$ " << setw(9) << tot2 << endl;
	return 0;
}
