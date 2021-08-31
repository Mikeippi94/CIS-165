#include <iostream>
using namespace std;
/* Program: Challenge 10
Written By Michael Ippolito
This program calculates Miles per Gallon
Last Updated 09/17/2018
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double gallons;
	double fulltank;
	double MPG;
	gallons = 15;
	fulltank = 375;
	MPG = fulltank/gallons;
	;cout << "A full tank of gasoline gets " << MPG << " MPG" << endl;
	return 0;
}
