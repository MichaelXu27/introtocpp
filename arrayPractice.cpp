#include<iostream>

using namespace std;

int main()
{
/*
	//string menu[6] = {"McNuggets", "Doritos Locos Tacos", "Denny's Double", "Land, Air, and Sea Burger", "Regret", "Milk"};
	string menu[6];
	
	cout << "Hey Chef, whats on the menu today?" << endl;
	for(int j = 0; j < 6; j++)
	{
		//cin >> menu[j]; //cin only takes the value up until a space
		
		getline(cin, menu[j]); //getline takes input up until an enter
	}

	
	cout << "Here is todays menu: " << endl;
	
	for(int i = 0; i < 6; i++)
	{
		cout << i + 1 << ") " << menu[i] << endl;
	}
*/
	
	srand(time(NULL));
	
	int s;
	
	cout << "Enter the size of your array: ";
	cin >> s;
	
	const int size = s;
	int nums[size];
	
	for(int i = 0; i < size; i++)
	{	
		nums[i] = rand() % 101;
	}

	cout << "My array is: " << endl;

	for(int j = 0; j < size; j++)
	{
		cout << nums[j] << endl;
	}



	return 0;
	
}