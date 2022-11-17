#include<iostream>

using namespace std;

double add(double a, double b); // prototypes need the ; after
bool isCool(string name); // function prototypes

int main()
{
	double num1, num2;
	string n;
	
	cout << "Enter in your name: ";
	cin >> n;
	
	if(isCool(n) == true)
	{
		cout << "Welcome to the super complicated adding machine" << endl;
	
		cout << "Enter first number: ";
		cin >> num1;
	
		cout << "Enter second number: ";
		cin >> num2;
		
		cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
	}
	else
	{
		cout << "You can try weenie jr. calculator" << endl;
	}
	
	return 0;
}

double add(double a, double b) // function definition
{
	double sum = a + b;
	
	return sum;
}

bool isCool(string name) // function definition
{
	if(name == "Kurt")
	{
		return false;
	}
	
	return true;
}