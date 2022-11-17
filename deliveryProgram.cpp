#include<iostream>

using namespace std;

int main()
{
	int weight;
	double length;
	double width;
	double height;
	
	cout<< "What is the weight?" << endl;
	cin >> weight;
	
	cout<< "What is the length?" << endl;
	cin >> length;
	
	cout<< "What is the width?" << endl;
	cin >> width;
	
	cout<< "What is the height?" << endl;
	cin >> height;
	
	if((length * width * height) <= 0.1 && weight <= 27)
	{
		cout<< "Everything checks out, you are good to go" << endl;
	}
	else if ((length * width * height) <= 0.1 && weight > 27)
	{
		cout<<"Rejected: Package is too large" << endl;
	}else
	{
		cout<< "Rejected Package is too heavy and too large" << endl;
	}
	
	return 0;
}