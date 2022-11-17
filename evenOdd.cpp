#include<iostream>

using namespace std;

int main()
{

	srand(time(NULL));
	int s = 50;
	const int size = s;
	int nums[size];
	int even = 0;
	int odd = 0;
	
	for(int i = 0; i < 50; i++)
	{
		nums[i] = rand() % 101;
	}
	
	for(int j = 0; j < 50; j++)
	{
		cout << nums[j] << endl;
	}
	
	for(int k = 0; k < 50; k++)
	{
		if(nums[k] % 2 == 1)
		{
			odd += 1;
		}
		else
		{
			even += 1;
		}
	}
	
	cout << "The number of evens is: " << even << endl;
	cout << "The number of odds is: " << odd << endl;
	
	return 0;
}