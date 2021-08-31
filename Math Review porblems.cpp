#include <iostream>
#include <cmath>

using namespace std;



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int valueA = 2, valueB = 19, valueC = 7, valueD = 31, valueE = 5;
	double valueF = 6.0, valueG = 12.0;
	
	// problem 1
	int qnum1 = 0;
	double qnum2 = 0;
	
	valueB / valueC * valueA;

	qnum1 = valueB / valueC * valueA;
	cout << qnum1 << endl;
	
	// problem 2
	qnum2 = valueG / valueE - valueA;
	
	valueG / valueE - valueA;
	
	cout << qnum2 << endl;
	
	
	// problem 3
	int qnum3;
	
	qnum3 = int(valueD) % valueA;
	
	int(valueD) % valueA;
	
	cout << qnum3 << endl;
	
	
	// problem 4
	int qnum4;
	
	qnum4 = valueA % valueC * valueD;
	
	valueA % valueC * valueD;
	
	cout << qnum4 << endl;
	
	// problem 5
	int qnum5;
	
	qnum5 = valueE = valueA = valueB;
	
	
	valueE = valueA = valueB;
	
	cout << qnum5 << endl;
	
	// problem 6
	double qnum6;
	
	double( valueA / valueC );
	
	qnum6 = double( valueA / valueC );
	
	cout << (double)qnum6 << endl;
	
	//problem 7
	double qnum7;
	double num = 3.14;
	qnum7 = ++num;
		
	cout << qnum7 << endl;
	
	//problem 8
	
	valueD *= valueA + valueB;
	valueD *= 21;
 	valueD = 31 * 21;
	
	cout << valueD << endl;
	return 0;
}
