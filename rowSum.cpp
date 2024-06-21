#include<iostream>
#include<iomanip>

using namespace std;

const int r = 10;
const int c = 10;

void output(int a[][c]);
void sums(int a[][c],int s[]);

int main()
{
	srand(time(NULL));
	int nums[r][c];
	int rowSum[r];
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			nums[i][j] = rand() % 101;
		}
	}
	
	
	for(int i = 0; i < r; i++)
	{
		rowSum[i] = 0;
	}	
	
	output(nums);
	cout << "sums for each row:" << endl;
	sums(nums,rowSum);
	

	
	return 0;
}

void output(int a[][c])
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
}

void sums(int a[][c],int s[])
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			s[i] += a[i][j];
		}
		cout << s[i] << endl;
	}
}