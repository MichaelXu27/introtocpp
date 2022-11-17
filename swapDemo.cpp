#include<iostream>

using namespace std;

void swap(int & a, int & b);

int main()
{
	int num1, num2;
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	swap(num1, num2);
	
	cout << "First is now " << num1 << endl;
	cout << "Second is now " << num2 << endl;
	
	return 0;
}

void swap(int & a, int & b)
{
	int c = a;
	a = b;
	b = c;

}