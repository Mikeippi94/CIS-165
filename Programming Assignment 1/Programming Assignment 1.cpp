/* 
Program: Moreprints
Written by Michael Ippolito
This program calculates a customers bill
Last updated 10/6/2018 
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// constants
const double SALES_TAX = 0.07;
const double REPRINT_COST = 0.50;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// inputs
	char name[81];
	double mon;
	double day;
	double year;
	double photo;
	double reprint;
	double tot1;
	double tot2;
	double tcost1;
	double tcost2;
	
	photo = 0;
	reprint = 0;
	mon = 0;
	day = 0;
	year = 0;
	
	// variables
	cout << "Enter Your Name: " << endl;
	cin >> ws;
	cin.getline(name,(sizeof(name)-1));
	cout << "Enter a month: " << endl;
	cin >> mon;
	cout<< "Enter a Day: " << endl;
	cin >> day;
	cout << "Enter a Year: " << endl;
	cin >> year;
	cout << "Number of Photos: " << endl;
	cin >> photo;
	cout << "Number of Reprints: " << endl;
	cin >> reprint; 
	
	
	//calculations
	tot1 = photo * reprint;
	tot2 = tot1 * REPRINT_COST;
	tcost1 = tot2 * SALES_TAX;
	tcost2 = tcost1 + tot2;
	
	
	//output
	cout << setw(3) << "MOREPRINTS Photo Store" << endl;
	cout << setw(3) << "----------------------" << endl;
	cout << endl;
	cout << setw(3) << "Date:   " << setw(4) << mon << "/" << day << "/" << year << endl;
	cout << endl;
	cout << left << setw(3) << "Customer Name: " << setw(5) << right << " " << left << setw(1)<< name << endl;
	cout << endl;
	cout << left << setw(3) << "Photos In: " << setw(9) << right << " " << left << setw(5) << photo << endl;
	cout << left << setw(3) << "Reprints Ordered: " << setw(2) << right << " " << left << setw(5)<< reprint << endl;
	cout << left << setw(3) << "Total Reprints: " << setw(4) << right << " " << left << setw(5) << tot1 << endl;
	cout << setw(3) << "Price/Reprint: " << setw(5) << right << " " << left << setw(5)<< fixed <<showpoint << setprecision(2) << REPRINT_COST << endl;
	cout << endl;
	cout << setw(3) << "Reprint Cost: " << setw(6) << right << " " << left << setw(5) << fixed << setprecision(2) << tot2 << endl;
	cout << setw(3) << "Tax: " << setw(15) << right << " " << left << setw(5) << fixed << setprecision(2) << tcost1 << endl;
	cout << setw(3) << "Total Cost: " << setw(8)<< right << " " << left << setw(5)<< fixed << setprecision(2) << tcost2 << endl;
	
	ofstream out;
	out.open("Receipt.text");
	out << ("c:\\G:\PC\Desktop\Fall 2018 semester\dev c++\Programming Assignment 1\\");
	out << endl;
	out << endl;
	out << setw(3) << "MOREPRINTS Photo Store" << endl;
	out << setw(3) << "----------------------" << endl;
	out << endl;
	out << setw(3) << "Date:   " << setw(4) << mon << "/" << day << "/" << year << endl;
	out << endl;
	out << left << setw(3) << "Customer Name: " << setw(5) << right << " " << left << setw(1)<< name << endl;
	out << endl;
	out << left << setw(3) << "Photos In: " << setw(9) << right << " " << left << setw(5) << photo << endl;
	out << left << setw(3) << "Reprints Ordered: " << setw(2) << right << " " << left << setw(5)<< reprint << endl;
	out << left << setw(3) << "Total Reprints: " << setw(4) << right << " " << left << setw(5) << tot1 << endl;
	out << setw(3) << "Price/Reprint: " << setw(5) << right << " " << left << setw(5)<< fixed <<showpoint << setprecision(2) << REPRINT_COST << endl;
	out << endl;
	out << setw(3) << "Reprint Cost: " << setw(6) << right << " " << left << setw(5) << fixed << setprecision(2) << tot2 << endl;
	out << setw(3) << "Tax: " << setw(15) << right << " " << left << setw(5) << fixed << setprecision(2) << tcost1 << endl;
	out << setw(3) << "Total Cost: " << setw(8)<< right << " " << left << setw(5)<< fixed << setprecision(2) << tcost2 << endl;
	
	return 0;
}
