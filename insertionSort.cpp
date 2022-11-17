#include<iostream>

using namespace std;

void swap(int & a, int & b);
void insertion(int a[]);

const int size = 100;

int main()
{
	srand(time(NULL));
	int array[size];
	
	for(int i = 0; i < size; i++)
	{
		array[i] = rand() % 1001;
	}
	
	cout << "Unsorted Array: " << endl;
	
	for(int j = 0; j < size; j++)
	{
		cout << array[j] << endl;
	}
	
	insertion(array);
	
	cout << "Sorted Array: " << endl;
	
	for(int k = 0; k < size; k++)
	{
		cout << array[k] << endl;
	}
	
	return 0;
}

void swap(int & a, int & b)
{
	int temp = a;
	a = b;
	b = temp;
}

void insertion(int a[])
{
	for(int i = 1; i < size; i++)
	{
		int j = i;
	
		while(j > 0 && (a[j - 1] > a[j]))
		{
			swap(a[j], a[j - 1]);
			j = j - 1;
		}
	}
}