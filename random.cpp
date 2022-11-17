#include<iostream>

using namespace std;


int main()
{
	srand(time(NULL)); //this sets it so our random number is determined by the computers internal clock
	
	string name;
	int grade;
	
	cout<<"Who's grade are we determining today?" << endl;
	cin >> name;
	
	//rand() is a function that gets a random number
	grade = rand() % 101; //number from 0 -101
	
	cout<<  name << "'s grade for the year is "<< grade<< endl; 
	
	return 0;
}