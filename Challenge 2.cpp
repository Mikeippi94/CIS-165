#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	char letter = 32;
  	int count;

 	while (letter < 127)
    {
      count = 0;
      while (count < 16 && letter < 127)
        {
          cout << letter << " ";
          letter++;
          count++;
        }
      cout << endl;
    }

  cout << endl;
	
	


	return 0;
}
