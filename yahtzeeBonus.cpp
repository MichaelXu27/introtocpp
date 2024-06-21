#include<iostream>

using namespace std;

//function declarations:
void swap(int & a, int & b);
void insertion(int a[]);

bool smallStraight(int a[]); //function declaration for a small straight
bool largeStraight(int a[]); //function declaration for a large straight
bool threeOfAKind(int a[]); //function declaration for three of a kind
bool fourOfAKind(int a[]); //function declaration for four of a kind
bool fullHouse(int a[]); // function declaration for a full house
bool YAHTZEE(int a[]); // function declaration for yahtzee
bool CHANCE(int a[], int & p); // function declaration for chance

//global variable for array of size 5
const int size = 5;

int main()
{
	int points = 0;
	char ans;
	char play;
	int rolls = 5;
	bool yahtzeeRolled = false; //these booleans act as checkers, for instance, if you roll a yahtzee you cant roll it again.
	bool fullHouseRolled = false;
	bool largeStraightRolled = false;
	bool smallStraightRolled = false;
	bool fourOfAKindRolled = false;
	bool threeOfAKindRolled = false;
	bool chanceRolled = false;
	
	srand(time(NULL)); // random time
	
	cout << "You have this many rolls: " << rolls << endl;
	
	do{ //do while loop to allow the game play multiple times if the user wants to
		int array[size];
		rolls = rolls - 1;

		for(int i = 0; i < size; i++) // assings values 1-6 to an array
		{
			array[i] = rand() % 6 + 1;
		}

		cout << "Unsorted Dice: " << endl;
	
		for(int j = 0; j < size; j++)
		{
			cout << array[j] << " ";
		}

		insertion(array); // sorts array
	
		cout << endl << "Sorted Dice: " << endl;
	
		for(int k = 0; k < size; k++)
		{
			cout << array[k] << " ";
		}
	
		cout << endl;

		if(YAHTZEE(array) == true && yahtzeeRolled == false) //checks for yahtzee and makes sure it cant be rolled again
		{
			cout << "You have rolled a YAHTZEE" << endl;
			points += 50;
			yahtzeeRolled = true;
		}
		else if(fullHouse(array) == true && fullHouseRolled == false) //checks for full house and makes sure it cant be rolled again
		{
			cout << "You have rolled a Full House" << endl;
			points += 25;
			fullHouseRolled = true;
		}	
		else if(largeStraight(array) == true && largeStraightRolled == false) //checks for large straight and makes sure it cant be rolled again
		{
			cout << "You have rolled a Large Straight" << endl;
			points += 40;
			largeStraightRolled = true;
		}
		else if(smallStraight(array) == true && smallStraightRolled == false) //checks for small straight and makes sure it cant be rolled again
		{
			cout << "You have rolled a Small Straight" << endl;
			points += 30;
			smallStraightRolled = true;
		}
		else if(fourOfAKind(array) == true && fourOfAKindRolled == false) //checks for four of a kind and makes sure it cant be rolled again
		{
			cout << "You have rolled Four Of a Kind" << endl;
			for(int j = 0; j < size; j++)
			{
				points += array[j];
			}
			fourOfAKindRolled = true;
		}
		else if(threeOfAKind(array) == true && threeOfAKindRolled == false) //checks for three of a kind and makes sure it cant be rolled again
		{
			cout << "You have rolled Three Of a Kind" << endl;
			for(int j = 0; j < size; j++)
			{
				points += array[j];
			}
			threeOfAKindRolled = true;
		}
		else
		{
			if(chanceRolled == false) //checks to see if chance has been rolled yet or not
			{
				cout <<"Do you want to chance?(Y/N): ";
				cin >> ans;
				if(tolower(ans) == 'y') //checks to see if user input is y, if yes chances the numbers and sets chanceRolled to true
				{
					CHANCE(array, points);
					chanceRolled = true;
				}
			}
		}

	
		cout << "You have this many points: " << points << endl;
		cout << "You have this many rolls left: " << rolls << endl;
		if(rolls != 0) // sees if you still have rolls in order to play again
		{
			cout << "Play again?: (y/n) " ;
			cin >> play;
		}
		
		
	}while(tolower(play) == 'y' && rolls != 0);
	
	cout << "Thanks for playing, you ended with this many points: " << points << endl;
	return 0;
}

void swap(int & a, int & b) // swap function
{
	int temp = a;
	a = b;
	b = temp;
}

void insertion(int a[]) // insertion sort, sorts the numbers from least to greatest
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

bool smallStraight(int a[]) //checks for a chain of four consecutive numbers
{
	for(int i = 0; i < size - 3; i++)
	{
		if((a[i] == a[i+1] - 1) && (a[i] == a[i+2] - 2) && (a[i] == a[i+3] - 3))
		{
			return true;
		}
	}
	return false;
}

bool largeStraight(int a[]) //checks for a chain of five consecutive numbers
{
	for(int i = 0; i < size - 4; i++)
	{
		if((a[i] == a[i+1] - 1) && (a[i] == a[i+2] - 2) && (a[i] == a[i+3] - 3) && (a[i] == a[i+4] - 4))
		{
			return true;
		}
	}
	return false;
}

bool threeOfAKind(int a[]) // checks if three numbers are in a row, works as the numbers are already sorted
{
	for(int i = 0; i < size - 2; i++)
	{
		if(a[i] == a[i+2])
		{
			return true;
		}
	}
	return false;
}

bool fourOfAKind(int a[]) //checks if four numbers are in a row, works as the numbers are already sorted
{
	for(int i = 0; i < size - 3; i++)
	{
		if(a[i] == a[i+3])
		{
			return true;
		}
	}
	return false;
}

bool fullHouse(int a[]) //first checks if the first three numbers are equal and if the last two are equal, then the else if checks if the first two numbers and equal and the latter 3 numbers are equal.
{
	for(int i =0; i < size; i++)
	{
		if((a[i] == a[i+1]) && ((a[i+2] == a[i+3]) && (a[i+2] == a[i+4])))
		{
			return true;
		}
		else if(((a[i] == a[i+1]) && (a[i] == a[i+2])) && (a[i+3] == a[i+4]))
		{
			return true;
		}
	}
	return false;
}

bool YAHTZEE(int a[]) //checks if all 5 dice are the same
{
	for(int i = 0; i < size - 4; i++)
	{
		if(a[i] == a[i+4])
		{
			return true;
		}
	}
	return false;
}

bool CHANCE(int a[], int & p) //always returns true, adds all the numbers in the array and pass by references the value
{
	for(int i = 0; i < size; i++)
	{
		p += a[i];
	}
	return true;
}