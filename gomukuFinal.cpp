//Tyler and Michael Final Project
#include <iomanip>
#include <iostream>

using namespace std;

const int r = 19;
const int c = 19;

void output(string a[][c]); // the output function used to output the board
void inputWhite(string a[][c], int & x, int & y); // the function used to have the user input their piece
void inputBlack(string a[][c], int & x, int & y); // copy and paste the function above
bool check(string a[][c], string color); // this is the function that checks to see if you have five in a row 

int main() 
{
	string board[r][c]; // establish the board

	int x = 0;
	int y = 0;
	string color = "⚪";


	for (int i = 0; i < r; i++) // this fills the empty board
	{
		for (int j = 0; j < c; j++) // this fills the empty board
		{
		  board[i][j] = "🟫"; // fills the board with the brown square
		}
	}

	for(int i = 0; i < 256; i++) // while there is still space on the board this runs 
	{
		inputWhite(board, x, y); // the void function for white to imput squares
		output(board); // outputs the board
		color = "⚪";  // sets the color to check in the last void function
		if(check(board, color) == true) // if white has 5 in a row
		{
			cout << color << " has 5 in a row. They win" << endl; // computer output 
			return 1;
		}

		inputBlack(board, x, y); // the void function for black to imput squares
		output(board); // outputs the board
		color = "⚫"; // sets the color to check in the last void function
		if(check(board, color) == true) // if black has 5 in a row
		{
			cout << color << " has 5 in a row. They win" << endl; // computer output 
			return 2;
		}

	} 

	return 0;
}

void output(string a[][c]) // output program
{
	for (int i = 0; i < r; i++) // goes through the row
	{
		for (int j = 0; j < c; j++) // goes through the collum
		{
			cout << setw(3) << a[i][j]; // outputs them
		}
		cout << endl; // spacing
	}
}

void inputWhite(string a[][c], int & x, int & y) // passes the board and the coordinates 
{
	cout << "White, please enter your x-coordinate(0-18): ";
	cin >> x; // user x cord
	cout << "White, please enter your y-coordinate(0-18): ";
	cin >> y; // user y cord
	if(a[x][y] == "🟫")
	{
		a[x][y] = "⚪"; // this if function check if its free and if it is replaces it
	}
	else // if its not free then it lets you pick again
	{
		cout << "Spot is already taken, pick again please" << endl;
		inputWhite(a, x, y);
	}
}

void inputBlack(string a[][c], int & x, int & y) // passes the board and the coordinates 
{
	cout << "Black, please enter your x-coordinate(0-19): ";
	cin >> x; // user x cord
	cout << "Black, please enter your y-coordinate(0-19): ";
	cin >> y; // user y cord
	if(a[x][y] == "🟫")
	{ 
		a[x][y] = "⚫";// this if function check if its free and if it is replaces it
	}
	else // if its not free then it lets you pick again
	{
		cout << "Spot is already taken, pick again please" << endl;
		inputBlack(a, x, y);
	}
}


bool check(string a[][c], string color) // passes the board and which color you are checking
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++) // goes through the entire board
		{
			if((i - 4 >= 0 && j + 4 <= 19) && (a[i][j] == color && a[i-1][j+1] == color && a[i-2][j+2] == color && a[i-3][j+3] == color && a[i-4][j+4] == color))
			{
				return true; // first checks if the last square is within the boundaries
			} // then checks all the diagonal up to make sure they are the same color 
		
			if((i + 4 >= 0 && j + 4 <= 19) && (a[i][j] == color && a[i+1][j+1] == color && a[i+2][j+2] == color && a[i+3][j+3] == color && a[i+4][j+4] == color))
			{
				return true;// first checks if the last square is within the boundaries
			} // then checks all the across right up to make sure they are the same color 

			if((j + 4 <= 19) && (a[i][j] == color && a[i][j+1] == color && a[i][j+2] == color && a[i][j+3] == color && a[i][j+4] == color))
			{
				return true;// first checks if the last square is within the boundaries
							// then checks all the diagonal down to make sure they are the same color 
			}
			if((i+4 >= 0) && (a[i][j] == color && a[i+1][j] == color && a[i+2][j] == color && a[i+3][j] == color && a[i+4][j] == color))
			{
				return true;// first checks if the last square is within the boundaries
			} 				// then checks all the down to make sure they are the same color 
		}
	}
	return false;
}


