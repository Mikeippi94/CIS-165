#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
 
int main(int argc, char *argv[])
{
 
int students;
int count;
char names[25];
char first [25];
char last [25];
 

cout << "Enter in the number of students in the class: \n";
cin >> students;
if(students < 26 && students > 0)
{

for(count = 1; count < students; count++)
{
	
}
cin.ignore(25,'\n');
 
for (int count = 1; count <= students; count++)
{
cout << "Enter in name " << count << ": \n";
cin.getline(names, 25);
 
 
	if (count == 1)
	{
  		strcpy(first, names);
  		strcpy(last, names);
	}
	
	if(strcmp(names,first) < 0)
	{
		strcpy(first, names);
	}

	if(strcmp(names,last) > 0) 
	{ 
		strcpy(last, names);
	}
}
} 
cout << "The first student is " << first << endl;
 
cout << "The last student is " << last << endl;
 
 

return 0;

}
 
