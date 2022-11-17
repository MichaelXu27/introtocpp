#include<iostream>

using namespace std;

void arraymultiplier(int array[], int multiplier);

const int size = 10;

int main()
{
	srand(time(NULL));
	int multiplier;
	int nums[size];
	
	for(int i = 0; i < size; i++)
	{
		nums[i] = rand() % 101;
	}
	
	cout << "Original Array: " << endl;
	
	for(int j = 0; j < size; j++)
	{
		cout << nums[j] << endl;
	}
	
	cout << "Enter a multiplier: ";
	cin >> multiplier;
	
	arraymultiplier(nums, multiplier);
	
	cout << "Multiplied array:" << endl;
	
	for(int j = 0; j < size; j++)
	{
		cout << nums[j] << endl;
	}
	
	return 0;
}

void arraymultiplier(int array[], int multiplier)
{
	for(int i = 0; i < size; i++)
	{
		array[i] = array[i] * multiplier;
	}
}
