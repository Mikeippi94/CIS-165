#include <iostream>
using namespace std;
/* Program: challenge 9
Written By Michael Ippolito
This program calculates cyborg data types sizes
Last updated 09/18/2018
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Size of an int " << sizeof(int) << " bytes" << endl;
	cout << "Size of an char " << sizeof(char) << " byte"<< endl;
	cout << "Size of an float " << sizeof(float) << " bytes"<< endl;
	cout << "Size of an double "<< sizeof(double) << " bytes"  << endl;
	return 0;
}
