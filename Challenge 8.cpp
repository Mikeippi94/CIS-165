#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double wid;
	double pal;
	double sum;
	double tot;
	double total;
	
	wid = 12.5;
	
	cout << "input the weight of the pallet: " << endl;
	cin >> pal;
	cout << "Input pallet weight with widgets on it: " << endl;
	cin >> tot;
	total = tot - pal;
	sum = total/wid;
	cout << "Total number of widgets on the pallet: " << fixed << setprecision(0) << sum;
	
	return 0;
}
