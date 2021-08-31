#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double bag;
	double serv1;
	double serv;
	double cal;
	double cook;
	double total;
	double tot;
	
	bag = 30;
	serv = 10;
	cal = 300;
	
	cout << "How many cookies did you eat?: " << endl;
	cin  >> cook;
	serv1= bag/serv;
	total = cal/serv1;
	tot = cook * total;
	cout << "Total amount of calories: " << tot << endl;
	
	
	return 0;
}
