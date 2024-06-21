#include<iostream>
#include<iomanip>

using namespace std;

const int r = 5; //global variables for array
const int c = 5;

void output(string a[][c]); //func for outputting the array
void bearPrize(string a[][c]); //func for putting bears in array
void fishPrize(string a[][c]); //func for putting fishes in the array
void dollPrize(string a[][c]); //func for putting dolls in the array
void puzzlePrize(string a[][c]); //func for putting puzzles in the array
void ballPrize(string a[][c]); //func for putting ball prizes in the array
void pennyToss(string a[][c]); //func for randomly tossing 10 pennies into a new array

int main()
{
	srand(time(NULL)); //random time
	string boxes[r][c]; //array for empty spots and prizes
	string pennySpots[r][c]; //array for where the pennies land
	
	int bearCount = 0; //these following variables keep count of what pennies land where
	int fishCount = 0;
	int dollCount = 0;
	int puzzleCount = 0;
	int ballCount = 0;
	
	for(int i = 0; i < r; i++) //initializing boxes array with empty spots
	{
		for(int j = 0; j < c; j++)
		{
			boxes[i][j] = "️ 🕳️ ";
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		bearPrize(boxes);
		fishPrize(boxes);
		dollPrize(boxes);
		puzzlePrize(boxes);
		ballPrize(boxes);
	}
	
	for(int i = 0; i < r; i++) //initializing pennySpots array with empty spots
	{
		for(int j = 0; j < c; j++)
		{
			pennySpots[i][j] = "️ 🕳️ ";
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		pennyToss(pennySpots);
		
	}

	for(int i = 0; i < r; i++) //for loops through pennySpots array checking if there is a penny in the spot, if there is, more if statements will check if the same spot in the boxes array has a prize, if yes increases the count for that prize
	{
		for(int j = 0; j < c; j++)
		{
			if(pennySpots[i][j] == " 🪙")
			{
				if(boxes[i][j] == " 🧸")//when these counts for prizes reaches 3, you will win a prize
				{
					bearCount++;
				}
				else if(boxes[i][j] == " 🐟")
				{
					fishCount++;
				}
				else if(boxes[i][j] == " 🪆")
				{
					dollCount++;
				}
				else if(boxes[i][j] == " 🧩")
				{
					puzzleCount++;
				}
				else if(boxes[i][j] == " ⚽")
				{
					ballCount++;
				}
			}
		}
	}
	
	output(boxes); //outputs the boxes array full of prizes
	
	cout << endl;
	cout << "Where you coins landed: " << endl;
	
	output(pennySpots); //outputs the  pennySpots array full of pennies

	if(bearCount == 3)//these following if statements check if any of the counts for the prizes reached three, if yes cout's that they own that specific prize
	{
		cout << "You won a stuffed bear!" << endl;
	}
	if(fishCount == 3) 
	
	{
		cout << "You won a goldfish!" << endl;
	}
	if(dollCount == 3)
	{
		cout << "You won a doll prize!" << endl;
	}
	if(puzzleCount == 3)
	{
		cout << "You won a puzzle prize" << endl;
	}
	if(ballCount == 3)
	{
		cout << "You won a ball prize!" << endl;
	}
	
	if((bearCount != 3) && (fishCount != 3) && (dollCount != 3) && (puzzleCount != 3) && (ballCount != 3))//if not prizes are won, cout's that they player has won nothing
	{
		cout << "You won nothing..." << endl;
	}
	
	return 0;
}


void output(string a[][c]) //outputs the array
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

void bearPrize(string a[][c]) //puts bear prizes in random spots
{
	int randRow = rand() % 5;
	int randCol = rand() % 5;
	
	if(a[randRow][randCol] == "️ 🕳️ ")
	{
		a[randRow][randCol] = " 🧸";
	}
	else
	{
		bearPrize(a);
	}
}

void fishPrize(string a[][c]) //puts fish prizes in random spots
{
	int randRow = rand() % 5;
	int randCol = rand() % 5;
	
	if(a[randRow][randCol] == "️ 🕳️ ")
	{
		a[randRow][randCol] = " 🐟";
	}
	else
	{
		fishPrize(a);
	}
}

void dollPrize(string a[][c]) //puts doll prizes in random spots
{
	int randRow = rand() % 5;
	int randCol = rand() % 5;
	
	if(a[randRow][randCol] == "️ 🕳️ ")
	{
		a[randRow][randCol] = " 🪆";
	}
	else
	{
		dollPrize(a);
	}
}

void puzzlePrize(string a[][c]) //puts puzzle prizes in random spots
{
	int randRow = rand() % 5;
	int randCol = rand() % 5;
	
	if(a[randRow][randCol] == "️ 🕳️ ")
	{
		a[randRow][randCol] = " 🧩";
	}
	else
	{
		puzzlePrize(a);
	}
}

void ballPrize(string a[][c]) //puts ball prizes in random spots
{
	int randRow = rand() % 5;
	int randCol = rand() % 5;
	
	if(a[randRow][randCol] == "️ 🕳️ ")
	{
		a[randRow][randCol] = " ⚽";
	}
	else
	{
		ballPrize(a);
	}
}

void pennyToss(string a[][c]) //puts pennies in random spots
{
	int randRow = rand() % 5;
	int randCol = rand() % 5;
	
	a[randRow][randCol] = " 🪙";
}