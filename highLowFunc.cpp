#include<iostream>

using namespace std;

void FindLoHi(int a, int b, int & Lo, int & Hi);

int main()
{
	int first, second, lowerNum, higherNum;
	
	cout << "Enter your first number: ";
	cin >> first;
	
	cout << "Enter your second number: ";
	cin >> second;
	
	FindLoHi(first, second, lowerNum, higherNum);
	
	cout << "Your lower num is: " << lowerNum << endl;
	cout << "Your high num is: " << higherNum << endl;
	
	return 0;
}

void FindLoHi(int a, int b, int & Lo, int & Hi)
{
	if(a > b)
	{
		Lo = b;
		Hi = a;
	}
	else if(b > a)
	{
		Lo = a;
		Hi = b;
	}
}