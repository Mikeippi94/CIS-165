#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int SIZE = 5;

int main(int argc, char** argv) {
	
	int array[SIZE];
	int key_value;
	int named_number;
	
	for(int named_number = 0; named_number < SIZE; named_number++)
	{
		cout << named_number << " ";
	}
	
	for(int named_number = 0; named_number < SIZE; named_number++)
	{
		key_value = named_number;
		cout << key_value << " ";
	}
	return 0;
}
