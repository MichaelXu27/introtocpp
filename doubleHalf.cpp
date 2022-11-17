#include<iostream>

using namespace std;

void doubleHalf(double a, double & b, double & c);

int main()
{
	double number;
	double doubled;
	double halved;
	
	cout << "Please input a number: ";
	cin >> number;
	
	doubleHalf(number, doubled, halved);
	
	cout << "Your inputed number is: " << number << endl;
	cout << "Your number doubled is: " << doubled << endl;
	cout << "Your number halved is: " << halved << endl;

	return 0;
}

void doubleHalf(double a, double & b, double & c)
{
	
	b = a * 2;
	c = a / 2;
	
}