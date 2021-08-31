#include <iostream>
#include <iomanip>

using namespace std;

const double adulttic = 10.00;
const double childtic = 6.00;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double adult;
	double child;
	double gross;
	double net;
	double dis;
	char name[21];
	double totala;
	double totalb;
	double total;
	double per;
	double reman;
	
	cout << "Name of Movie: " << endl;
	cin.getline(name,(size of(name)-1);
	cin >> ws;
	cout << "How many adult and child tickets: " << endl;
	cin >> adult >> child;
	cout << "Movie Name:" << setw(30) << name << endl;
	cout << "Adult Tickets Sold: " << setw(20) << adult << endl;
	cout << "Child Tickets Sold: " << setw(20) << child << endl;
	totala = adulttic*adult;
	totalb = childtic*child;
	total = totala + totalb;
	cout << "Gross Box Office Profit: "<< setw(11) << fixed << setprecision(2) << "$" << total << endl;
	per = total*.2;
	cout << "Net Box Office Profit: "<< setw(14) << fixed << setprecision(2) << "$" << per << endl;
	reman = total - per;
	cout <<"Amount paid to Distributor: " << setw(8) << fixed << setprecision(2) << "$" << reman << endl;
	
	return 0;
}
