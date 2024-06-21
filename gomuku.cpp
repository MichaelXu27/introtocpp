#include <iomanip>
#include <iostream>

using namespace std;

const int r = 19;//these sizes dont work
const int c = 19;

void output(string a[][c]);
void inputWhite(string a[][c], int & x, int & y);
void inputBlack(string a[][c], int & x, int & y);
bool check(string a[][c], string color);

int main() {
  string board[r][c];

  int x = 0;
  int y = 0;
  string color = "⚪";


  for (int i = 0; i < r; i++) // this fills the empty board
  {
    for (int j = 0; j < c; j++) // this fills the empty board
    {
      board[i][j] = "🟫";
    }
  }

  for(int i = 0; i < 256; i++) 
  {
    inputWhite(board, x, y);
    output(board);
    color = "⚪";
    if(check(board, color) == true)
    {
    	cout << color << " has 5 in a row. They win" << endl;
    	return 1;
    }
    
    inputBlack(board, x, y);
    output(board);
    color = "⚫";
    if(check(board, color) == true)
    {
    	cout << color << " has 5 in a row. They win" << endl;
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

void inputWhite(string a[][c], int & x, int & y)
{
  cout << "White, please enter your x-coordinate(0-18): ";
  cin >> x;
  cout << "White, please enter your y-coordinate(0-18): ";
  cin >> y;
  if(a[x][y] == "🟫")
  {
    a[x][y] = "⚪";
  }
  else
  {
    cout << "Spot is already taken, pick again please" << endl;
    inputWhite(a, x, y);
  }
}

void inputBlack(string a[][c], int & x, int & y)
{
  cout << "Black, please enter your x-coordinate(0-19): ";
  cin >> x;
  cout << "Black, please enter your y-coordinate(0-19): ";
  cin >> y;
  if(a[x][y] == "🟫")
  {
    a[x][y] = "⚫";
  }
  else
  {
    cout << "Spot is already taken, pick again please" << endl;
    inputBlack(a, x, y);
  }
}

// pass the board over to the function
// make a string variable and set it to 'black' or 'white' 

bool check(string a[][c], string color)
{
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			if((i - 4 >= 0 && j + 4 <= 19) && (a[i][j] == color && a[i-1][j+1] == color && a[i-2][j+2] == color && a[i-3][j+3] == color && a[i-4][j+4] == color))
		  	{
				return true;
		  	}
		  	if((i + 4 >= 0 && j + 4 <= 19) && (a[i][j] == color && a[i+1][j+1] == color && a[i+2][j+2] == color && a[i+3][j+3] == color && a[i+4][j+4] == color))
		  	{
				return true;
		  	} 

		 	if((j + 4 <= 19) && (a[i][j] == color && a[i][j+1] == color && a[i][j+2] == color && a[i][j+3] == color && a[i][j+4] == color))
		 	{
				return true;

		  	}
		  	if((i+4 >= 0) && (a[i][j] == color && a[i+1][j] == color && a[i+2][j] == color && a[i+3][j] == color && a[i+4][j] == color))
		  	{
				return true;
		  	}
		}
	}
	return false;
}


