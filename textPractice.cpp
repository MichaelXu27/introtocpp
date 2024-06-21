#include<iostream>
#include<string> //library for strings of strings

using namespace std;

int main()
{
	string name;
	
	cout << "Enter your first name: ";
	cin >> name;
	
	cout << endl << endl;
	
	cout << "Your normal name is " << name << endl;
	
	cout << "Your name backwards is ";
	for(int i = name.length() - 1; i >= 0; i--)
	{
		cout << name[i];
	}
	
	cout << endl << endl;
	
	cout << "Your name tall-ways is " << endl;
	for(int i = 0; i < name.length(); i++)
	{
		cout << name[i] << endl;
	}
	
	cout << "Your number name is " << endl;
	for(int i = 0; i < name.length(); i++)
	{
		cout << (int)name[i] << " ";
	}
	
	cout << endl << endl << endl;
	
	cout << "Your nickname is " << name.substr(3, name.length()) + name.substr(0,3) << endl;
	
	cout << endl << endl;
	
	cout << "Your name shifted by 1 is " << endl;
	for(int i = 0; i < name.length(); i++)
	{
		name[i] = name[i]+1;
	}
	cout << name << endl;
	

	
	return 0;
}