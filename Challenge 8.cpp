#include <iostream>
#include <iomanip>
using namespace std;
/* Program: Challenge 8
Written By Michael Ippolito
This program calculates Total Purchase 
Last Updated 09/17/2018
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double item1;
	double item2;
	double item3;
	double item4;
	double item5;
	double tax;
	double subtotal; 
	double total;
	float salestax;
	item1 = 15.95;
	item2 = 24.95;
	item3 = 6.95;
	item4 = 12.95;
	item5 = 3.95;
	tax = 0.07;
	subtotal = item1 + item2 + item3 + item4 + item5
	;salestax = subtotal * tax
	;total = salestax + subtotal
	;cout << "Item 1: $"<< item1 << endl;
	;cout << "Item 2: $"<< item2 << endl;
	;cout << "Item 3: $"<< item3 << endl;
	;cout << "Item 4: $"<< item4 << endl;
	;cout << "Item 5: $"<< item5 << endl;
	;cout << "Subtotal: $" << subtotal << endl;
	;cout << "Salestax: $" << setprecision(3) << salestax << endl;
	;cout << "Total: $" << setprecision(4) << total << endl;
	return 0;
}
