#include<iostream>

using namespace std;

int main()
{
	int width;
	int height;
	
	cout<< "Enter the input for width: "; 
	cin>> width;
	cout<< "Enter the input for height: ";
	cin>> height;
	
	cout<< "The area is: " << width * height << endl;
	cout<< "The perimeter is: " << width * 2 + height * 2 << endl;
	
	return 0;
}
	
	