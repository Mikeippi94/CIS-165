#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float num1, num2, num3;
	float avg;
	float distance;
	num1 = 20;
	num2 = 23.5;
	num3 = 28.9;
	avg = (num2 + num3)/2;
	distance = num1 * avg;
	cout << "total city and highway mpg average on one tank of gas: " << distance << "mpg";
	return 0;
}
