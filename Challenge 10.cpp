#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double str;
	double per;
	double rec;
	
	
	per = .80;
	
	cout << "What is the amount to replace your structure: " << endl;
	cin >> str;
	rec = str * per;
	cout << "Minimum insurance recomended for purchase: $" << fixed << setprecision(2) << rec << endl;
	return 0;
}
