#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int SIZE = 5;

int main(int argc, char** argv) {
	
	int array[SIZE];
	int sum;
	int squared_number;
	int squared;
	int named_number;
	
	for(int squared_number = 0; squared_number < SIZE; squared_number++)
	{
		squared = squared_number * squared_number;
		cout << squared<< " ";
		sum = sum + squared;
	}
	cout << "Square total: " << sum << endl;

	return 0;
}
