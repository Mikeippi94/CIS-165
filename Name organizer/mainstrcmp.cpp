#include <iostream>
#include <string.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name3[21];
	char name1[21];
	char name2[21];
	int match1;
	int match2;
	
	cout << "please enter first name: ";
	cin.getline(name1, sizeof(name1)-1);

	cout << "please enter second name: ";
	cin.getline(name2, sizeof(name2)-1);

	cout << "please enter thrid name: ";
	cin.getline(name3,sizeof(name3)-1);
	
	match1 = strcmp(name1, name2);
	match2 = strcmp(name1, name3);
	


	if (match1 < 0 && match2 < 0)
	{
		match1 = strcmp(name2, name3);
		if (match1 < 0)
		{
			cout << name1 << endl;
			cout << name2 << endl;
			cout << name3 << endl;
		}
		else 
		{
			cout << name1 << endl;
			cout << name3 << endl;
			cout << name2 << endl;
		}
		
	}
	match1 = strcmp(name2, name1);
	match2 = strcmp(name2, name3);
		
	if (match1 < 0 && match2 < 0)
	{
		match1 = strcmp(name1, name3);
		if (match1 < 0)
		{
			cout << name2 << endl;
			cout << name1 << endl;
			cout << name3 << endl;
		}
		else 
		{
			cout << name2 << endl;
			cout << name3 << endl;
			cout << name1<< endl;
		}
	}
	match1 = strcmp(name3, name1);
	match2 = strcmp(name3, name2);
		
	if (match1 < 0 && match2 < 0)
	{
		match1 = strcmp(name1, name2);
		if (match1 < 0)
		{
			cout << name3 << endl;
			cout << name1 << endl;
			cout << name2 << endl;
		}
		else 
		{
			cout << name3 << endl;
			cout << name2 << endl;
			cout << name1<< endl;
		}
	}
	return 0;
}
