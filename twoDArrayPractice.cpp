#include<iostream>
#include<iomanip>

using namespace std;

const int r = 10;
const int c = 7;

void output(string a[][c]); //need something in the second box, i need to know something about this


int main()
{
/*
	srand(time(NULL));
	int nums[r][c];
	
	//initializing a 2d array
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			nums[i][j] = rand() % 100;
		}
	}
	
	//outputting a 2d array
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << setw(4) << nums[i][j];
		}
		cout << endl;
	}
*/

	string board[r][c];
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			board[i][j] = "🧌";
		}
	}
	
	output(board);
	
	return 0;
}


void output(string a[][c])
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}

