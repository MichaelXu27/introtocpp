#include<iostream>

using namespace std;

string giveHint(int a, int b);

int main()
{
	srand(time(NULL));
	
	int secret;
	int guess;
	
	secret = rand() % 100 + 1;
	
	
	do
	{
		cout << "Guess: ";
		cin >> guess;
		
		cout << giveHint(secret, guess) << endl;
		
	}while(secret != guess);
	
		
	return 0;
}

string giveHint(int a, int b)
{
	if(a < b)
	{
		return "Too high! Try again!";
	}
	else if(a > b)
	{
		return  "Too low! Try again!";
	}
	else
	{
		return "You got it!";
	}
}