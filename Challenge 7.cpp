#include <iostream>
using namespace std;
/* Program: Challenge 7
Written By Michael Ippolito
This program calculates Ocean Levels 
Last Updated 09/17/2018
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float num1;
	float year5;
	float year7;
	float year10;
	float y5;
	float y7;
	float y10;
	num1 = 1.5;
	year5 = 5;
	year7 = 7;
	year10 = 10;
	y5 = num1 * year5
	;y7 = num1 * year7
	;y10 = num1 * year10
	
	;cout << "In five years the ocean level will rise:"<< y5 << "Millimeters" << endl;
	;cout << "In seven years the ocean level will rise:"<< y7 << "Millimeters" << endl;
	;cout << "In ten years the ocean level will rise:"<< y10 << "Millimeters" << endl;
	
	return 0;
}
