#include <iostream>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int time;
	int distance;
	int mph; 
	
	cout << "What is the speed of the vehicle in mph? ";
	cin >> mph;
	cout << endl;
	cout << "How many hours has it traveled? ";
	cin >> time;
	cout << endl;
	
	
	
	cout << "Hour " << " " << "Distance Traveled" << endl;
	cout << "-----------------------------" << endl;
	
	while (time < 3)
    {
      distance = 0;
      while (distance < 200 && time <= 3)
        {
          distance = mph * time;
		  cout << " " << time << "            " << distance;  
          cout << endl;
       	  
	      time++;
	    }
        
        
      	
		cout << endl;
    }

	
	
	return 0;
}


