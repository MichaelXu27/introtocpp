#include<iostream>
#include<iomanip>

using namespace std;

const int r = 20;
const int c = 20;

void output(string a[][c]); //func for outputting the array

int main()
{
	string read[r][c]; //read array
	string write[r][c]; //write array
	char cont = 'y'; //continue entering in coords
	char play = 'y'; //continue playing
	int readRow = 0; //coordinate for the readRow
	int readCol = 0; //coordinate for the readCol
	int count = 0; // counts how many faces are alive
	int day = 0; // counts the day you are on
	int dead = 0; // if this reaches 400, then all the squares are dead
	
	for(int i = 0; i < r; i++)//sets the read array and write array to all dead
	{
		for(int j = 0; j < c; j++)
		{
			read[i][j] = "🪦";
			write[i][j] = "🪦";
		}
	}
	
	while (cont == 'y') // while loop for entering in coordinates
	{
		cout << "Please input the row coordinates of a live cell for the first day (0-19): ";
		cin >> readRow;
		cout << "Please input the column coordinates of a live cell for the first day (0-19): ";
		cin >> readCol;
		
		read[readRow][readCol] = "😇";
		
		cout << "Continue entering coordinates? (y/n): "; //asks user if they want to continue entering in coordinates
		cin >> cont;
	}
	
	cout << "Day: " << day << endl << endl;
	output(read);
	
	while(play == 'y')//if the user wants to continue playing then continue playing
	{
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				
				count = 0;
			
				if(read[i-1][j-1] == "😇" && (i - 1 >= 0 && j - 1 >= 0)) //these if statements check for alive spots surrounding [i][j]
				{
					count++;
				}
				if(read[i-1][j] == "😇" && i - 1 >= 0)
				{
					count++;
				}
				if(read[i-1][j+1] == "😇" && (i - 1 >= 0 && j + 1 < 20))
				{
					count++;
				}
				if(read[i][j-1] == "😇" && j - 1 >= 0)
				{
					count++;
				}
				if(read[i][j+1] == "😇" && j + 1 < 20)
				{
					count++;
				}
				if(read[i+1][j-1] == "😇" && (i + 1 < 20 && j - 1 >= 0))
				{
					count++;
				}
				if(read[i+1][j] == "😇" && (i + 1 < 20))
				{
					count++;
				}
				if(read[i+1][j+1] == "😇" && (i + 1 < 20 && j + 1 < 20))
				{
					count++;
				}
			
				if((count == 2 || count == 3) && read[i][j] == "😇")//if the spot is alive and there are either 2 or 3 alive around the spot then it stays alive
				{
					write[i][j] = "😇";
				}
				else if(count == 3)//if the spot is not alive and there are three alive spots around it then it goes alive
				{
					write[i][j] = "😇";
				}
			
			}
		}
	
		day++;
				
		cout << endl << endl;
		cout << "Day: " << day << endl << endl;//tells you which day you are on
		output(write);
		
		for(int i = 0; i < r; i++)// checks whole array to see if all squares are dead
		{
			for(int j = 0; j < c; j++)
			{
				if(write[i][j] == "🪦")
				{
					dead++;
				}
			}
		}
		
		if(dead == 400)//if the dead count reaches 400, game ends because every square is dead
		{
			cout << "Thanks for playing! You ended on day " << day << endl;
			return 1;
		}
		
		for(int i = 0; i < r; i++)//setting the read array to whatever the write array is and wiping the write array
		{
			for(int j = 0; j < c; j++)
			{
				read[i][j] = write[i][j];
				write[i][j] = "🪦";
			}
		}
		
		cout << "Continue playing?(y/n): "; //asking user if they want to play again
		cin >> play;
	}
	
	cout << "Thanks for playing! You ended on day " << day << endl;
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