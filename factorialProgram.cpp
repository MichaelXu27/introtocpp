#include<iostream>

using namespace std;

int factorial(int number);

int main()
{
	int input;
	
	cout << "Please input the number you want to factorial: ";
	cin >> input;
	
	cout << input << "! = " << factorial(input) << endl;
	
	return 0;
}

int factorial(int number)
{
	if(number == 1)
	{
		return number;
	}
	else if(number == 0)
	{
		return number + 1;
	}
	
	return number * factorial(number - 1);
	
}