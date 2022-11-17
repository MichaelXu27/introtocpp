#include<iostream>

using namespace std;

int main()
{
	/*
	
	//First Practice code
	
	srand(time(NULL));
	
	int dice = rand()%6 + 1; 
	
	if (dice ==1)
	{
		cout << "Buffalo Pizza"<< endl;
	}
	else if(dice == 2)
	{
		cout << "Chicken Wings" << endl;
	}
	else if(dice == 3)
	{
		cout <<"I'll stand in the wrap line for 15 minutes"<< endl;
	}
	else if(dice == 4)
	{
		cout <<"Just a cookie"<< endl;
	}
	else if(dice == 5)
	{
		cout <<"Burrito bowl"<< endl;
	}
	else
	{
		cout <<"I'll grab 3 drinks for $20"<< endl;
	}
	*/
	
	//Second practice code
	
	srand(time(NULL));
	
	string name;
	double gpa;
	int age;
	char ans;
	
	cout << "What is your first name?" << endl;
	cin >> name;
	
	if(name == "Jack" || name == "Chris" || name =="Nick" || name == "Ben")
	{
		cout << "We have too many of you" <<endl;
		return 1;
	}
	else
	{
		cout << "Cool" <<endl;
	}
	
	cout << "What is your gpa?" << endl;
	cin >> gpa;
	
	if(gpa >= 0.1 && gpa <= 6.0)
	{
		cout << "Cool" <<endl;
	}
	else if(gpa > 6.0)
	{
		cout << "Too smart for us. Go to HAAAAAVARD kehd." << endl;
		return 1;
	}
	else
	{
		cout << "You might be a zombie..." <<endl;
		return 1;
	}
	
	
	cout << "Do you like Fortnite? (y/n)" << endl;
	cin  >> ans;
	
	if(ans == 'y' || ans == 'Y')
	{
		cout << "welcome to the school" << endl;
	}
	else
	{
		cout << "John Wick died a dusty divot." << endl;
	}
	
	
	
	
	
	
	
	return 0;
}