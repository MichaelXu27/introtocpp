#include<iostream>

using namespace std;

void swap(int & a, int & b);
void insertion(int a[]);

bool smallStraight(int a[], int & p);
bool largeStraight(int a[], int & p);
bool threeOfAKind(int a[], int & p);
bool fourOfAKind(int a[], int & p);
bool fullHouse(int a[], int & p);
bool YAHTZEE(int a[], int & p);
bool CHANCE(int a[], int & p);


const int size = 5;

int main()
{
	int points = 0;
	char ans;
	srand(time(NULL));
	
	int array[size];

	for(int i = 0; i < size; i++)
	{
		array[i] = rand() % 6 + 1;
	}

	cout << "Unsorted Array: " << endl;
	
	for(int j = 0; j < size; j++)
	{
		cout << array[j] << " ";
	}

	insertion(array);
	
	cout << endl << "Sorted Array: " << endl;
	
	for(int k = 0; k < size; k++)
	{
		cout << array[k] << " ";
	}
	
	cout << endl;

	if(YAHTZEE(array, points) == true)
	{
		cout << "You have rolled a YAHTZEE" << endl;
	}
	else if(fullHouse(array, points) == true)
	{
		cout << "You have rolled a Full House" << endl;
	}	
	else if(largeStraight(array, points) == true)
	{
		cout << "You have rolled a Large Straight" << endl;
	}
	else if(smallStraight(array, points) == true)
	{
		cout << "You have rolled a Small Straight" << endl;
	}
	else if(fourOfAKind(array, points) == true)
	{
		cout << "You have rolled Four Of a Kind" << endl;
	}
	else if(threeOfAKind(array, points) == true)
	{
		cout << "You have rolled Three Of a Kind" << endl;
	}
	else
	{
		cout <<"Do you want to chance?(Y/N): ";
		cin >> ans;
		if(tolower(ans) == 'y')
		{
			CHANCE(array, points);
		}
	}

	
	cout << "You have this many points: " << points << endl;
	
	
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

bool smallStraight(int a[], int & p)
{
	for(int i = 0; i < size - 3; i++)
	{
		if((a[i] == a[i+1] - 1) && (a[i] == a[i+2] - 2) && (a[i] == a[i+3] - 3))
		{
			p += 30;
			return true;
		}
	}
	return false;
	/*
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	for(int i = 0; i < size; i++)
	{
		if(a[i] == 1)
		{
			n1++;
		}
		else if(a[i] == 2)
		{
			n2++;
		}
		else if(a[i] == 3)
		{
			n3++;
		}
		else if(a[i] == 4)
		{
			n4++;
		}
		else if(a[i] == 5)
		{
			n5++;
		}
		else if(a[i] == 6)
		{
			n6++;
		}
	}			
	
	if()
	{
		p += 30;
		return true;
	}
	
	if()
	{
	
	}
	
	if()
	{
	
	}
	return false;
	*/
	
}

bool largeStraight(int a[],int & p)
{
	for(int i = 0; i < size - 4; i++)
	{
		if((a[i] == a[i+1] - 1) && (a[i] == a[i+2] - 2) && (a[i] == a[i+3] - 3) && (a[i] == a[i+4] - 4))
		{
			p += 40;
			return true;
		}
	}
	return false;
}

bool threeOfAKind(int a[], int & p)
{
	for(int i = 0; i < size - 2; i++)
	{
		if(((a[i] == a[i+1]) && (a[i] == a[i+2])))
		{
			for(int j = 0; j < size; j++)
			{
				p += a[j];
			}
			return true;
		}
	}
	return false;
}

bool fourOfAKind(int a[], int & p)
{
	for(int i = 0; i < size - 3; i++)
	{
		if((a[i] == a[i+1]) && (a[i] == a[i+2]) && (a[i] == a[i+3]))
		{
			for(int j = 0; j < size; j++)
			{
				p += a[j];
			}
			return true;
		}
	}
	return false;
}

bool fullHouse(int a[], int & p)
{
	for(int i =0; i < size; i++)
	{
		if((a[i] == a[i+1]) && ((a[i+2] == a[i+3]) && (a[i+2] == a[i+4])))
		{
			p += 25;
			return true;
		}
		else if(((a[i] == a[i+1]) && (a[i] == a[i+2])) && (a[i+3] == a[i+4]))
		{
			p+=25;
			return true;
		}
	}
	return false;
}

bool YAHTZEE(int a[], int & p)
{
	for(int i = 0; i < size - 4; i++)
	{
		if((a[i] == a[i+1]) && (a[i] == a[i+2]) && (a[i] == a[i+3]) && (a[i] == a[i+4]))
		{
			p += 50;
			return true;
		}
	}
	return false;
}

bool CHANCE(int a[], int & p)
{
	for(int i = 0; i < size; i++)
	{
		p += a[i];
	}
	return true;
}