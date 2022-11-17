#include<iostream>

using namespace std;

int main()
{
	/*for(int x = 0; x < 100; x++)
	{
		cout << x + 1 << endl;
	}
	*/
	
	/*for(int x= 30; x <= 90; x+=3)
	{
		cout << x << endl;
	} */
	
	string name;
	
	cout << "Welcome to the Halloween Party!" << endl;
	
	do{
	
		cout << "Are you on the guest list?" << endl;
		cout << "What is your name?" << endl;
		cin >> name;
		
		if(name != "Kurt")
		{
			cout << "Hi, " << name << "! Welcome to the party" << endl;
		}
	
	}while(name != "Kurt");
	
		cout << name << "! The star has arrived! We can now start!" << endl;
	
	return 0;
	
}