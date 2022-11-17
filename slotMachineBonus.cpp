#include<iostream>

using namespace std;

int main()
{ 
	srand(time(NULL)); // random number determined by computer internal clock
	
	int tokens = 100; //number of tokens, starts at 100
	char play; // determines if the player wants to play or not
	int slotOne; // variable represents the first slot
	int slotTwo; // variable represents the second slot
	int slotThree; // variable represents the third slot
	
	cout << "You have " << tokens << " tokens. Pull?(Y/N)"; // asks user if they want to play
	cin >> play; // user input, do you want to play or not?
	
	while(toupper(play) == 'Y' && tokens > 0) // loops until user does not want to play anymore or if they run out of tokens
	{
		slotOne = rand() % 3 + 1; // sets slotOne to a random number between 1 and 3
		slotTwo = rand() % 3 + 1; // sets slotTwo to a random number between 1 and 3
		slotThree = rand() % 3 + 1; // sets slotThree to a random number between 1 and 3
		
		
		cout <<  "[" << slotOne << "] " <<  "[" << slotTwo << "] " <<  "[" << slotThree << "] " << endl;
		
		if(slotOne == 1 && slotTwo == 1 && slotThree == 1) //checks if all slots equal 1
		{
			tokens --;
			tokens += 4;
			cout << "You won 4 tokens!"<< endl;
		}
		else if(slotOne == 2 && slotTwo == 2 && slotThree == 2) //checks if all slots equal 2
		{
			tokens --;
			tokens += 8;
			cout << "You have won 8 tokens" << endl;
		}
		else if(slotOne == 3 && slotTwo == 3 && slotThree == 3) //checks if all slots equal 3
		{
			tokens --;
			tokens += 12;
			cout << "You have won 12 tokens" << endl;
		}
		else //if all three of the slots do not equal each other the player has lost and is deducted one token
		{
			tokens --;
			cout << "You have lost" << endl;
		}
		
		
		cout << "You have " << tokens << " tokens. Pull?(Y/N)";
		cin >> play;
	}
	
	if(tokens == 0) // if the number of tokens is 0, gives reason on why you cannot pull anymore
	{
		cout << "You have run out of tokens, you cannot pull the slot machine anymore" << endl;
	}
	cout << "Thanks for playing!" << endl;
	
	return 0;
}