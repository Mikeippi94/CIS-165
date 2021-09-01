#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int floor;
	int rooms;
	int guest;
	int empty;
	int sum;
	int sum1;
	float sum2;
	
	cout << "How many floors " << endl;
	cin >> floor; 
	cout << endl;
	
	
	
	while (floor > 0 )
    {
      	
      rooms = 11;
      while (rooms > 10  && 0 < floor )
        {
          cout << "How many rooms on this floor:" << endl;
		  cin >> rooms;
		  sum = sum + rooms;
		  cout << "Floor Nummber: " << floor << "       " << "Room NUmber: " <<  rooms << endl;
		  cout << "How many rooms are occupied: " << endl;
		  cin >> guest;
			
		  
		  floor--;
    
        }
    }
    sum2 = sum1/sum;
    sum1 = sum1 + guest;
    empty = sum1 - sum;
	cout << "Total number of rooms: " << sum << endl;
	cout << "Total number of Unoccupied rooms: " << empty << endl;
	cout << "Total number of occupied rooms: " << sum1 << endl;
	cout << "Total precentage occupied: " << sum2 << "%" << endl;
	return 0;
}
