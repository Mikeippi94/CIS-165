#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MIN_VALUE = 1;
const int MAX_VALUE = 100;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int input;
	unsigned seed = time(0);
	int y;
	y = rand();
	srand(seed);
	
	y = (rand() % (MAX_VALUE - MIN_VALUE + 1 )) + MIN_VALUE;;
	cout << "Guess a random number 1 - 100 " << endl;
	
	do
	{
		cin >> input;

		if (y > input)
		{
			cout << "To low try again" << endl;
		}
		else if (y < input)
		{
			cout << "To high try again" << endl;
		}
	
	}
	while(y != input);
	
	cout << endl;
	cout << "**** You win!! ****" << endl;
	
	return 0;
}
