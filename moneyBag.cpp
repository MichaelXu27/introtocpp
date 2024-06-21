#include<iostream>
#include<iomanip>

using namespace std;

const int r = 5;
const int c = 5; 

void output(string a[][c]);
void randomTosser(string a[][c], int r1, int r2, int & c);

int main()
{
	srand(time(NULL));
	string spots[r][c];
	
	int count = 0;
	
	for(int i = 0; i < r; i++) //initializing 2d array
	{
		for(int j = 0; j < c; j++)
		{
			spots[i][j] = "🕳️";
		}
	}
	
	while(count < 3)
	{
		int random1 = rand() % 5;
		int random2 = rand() % 5;
		
		count++;
		
		randomTosser(spots, random1, random2, count);
	}
	
	
	output(spots);
	return 0;
}

void output(string a[][c])
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}

void randomTosser(string a[][c], int r1, int r2, int & c)
{
	if(a[r1][r2] == "-")
	{
		a[r1][r2] = " 💰";
	}
	else if(a[r1][r2] == " 💰")
	{
		c--;
	}
}


