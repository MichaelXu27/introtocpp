#include<iostream>

using namespace std;

void swap(int & a, int & b);
void bubble(int a[]);

const int s = 100;

int main()
{
	srand(time(NULL));
	
	int nums[s];
	
	for(int i = 0; i < s; i++)
	{
		nums[i] = rand() % 1001;
	}	
	
	//Here is where our sorted array is going to be
	bubble(nums);
	
	cout<< "My sorted array is: " << endl;
	
	for(int j = 0; j < s; j++)
	{
		cout << nums[j] << endl;
	}
	
	return 0;
	
}

void swap(int & a, int & b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubble(int a[])
{
	bool swapped = true;
	while(swapped == true)
	{
		swapped = false;
		
		for(int i = 0; i < s - 1; i++)
		{
			if(a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				swapped = true;		
			}
		}
	}
}
