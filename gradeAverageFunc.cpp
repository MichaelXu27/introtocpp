#include<iostream>
#include<iomanip>

using namespace std;

char letterGrade(double average);

int main()
{

	double num;
	double sum = 0.0;
	int count = 0;

	cout << "Enter your grade: "; 
	cin >> num; 

	do{
		sum += num;
		count ++;
		
		cout << "Enter your grade: "; 
		cin >> num; 
		
	}while(num != 101.0);

	cout << fixed << setprecision(3) << "Your grade average is " << sum / count << endl;
	cout << "Your letter grade is a " << letterGrade(sum / count)<< endl;
	
	//setprecision tells how many numbers your want outputted
	//fixed means that you want it after the decimal
	
	return 0;
}

char letterGrade(double average)
{
	if(average >= 89.5)
	{
		return 'A';
	}
	else if(average >= 79.5)
	{
		return 'B';
	}
	else if (average >= 70.5)
	{
		return 'C';
	}
	else if(average >= 69.5)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}