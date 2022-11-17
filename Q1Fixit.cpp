/*
This program will tell you how much salary you have made this week.
If you work more than 40 approved hours, you get time and a half.

Example Output:

1)
Enter the number of hours worked: 50
Enter your wage: 100
Were you approved for overtime (y for yes, n for no)?
y
You made $5500 this week!

2)
Enter the number of hours worked: 50
Enter your wage: 100
Were you approved for overtime (y for yes, n for no)?
n
You made $5000 this week!

3)
Enter the number of hours worked: 20
Enter your wage: 50
You made $1000 this week!

There are 10 errors in this code. (2 pts each)

3 deletions. (Need to delete something that doesn't belong)
5 changes. (Change something that is already there, ex.  - to + or for spelling)
2 additions. (Add something that is missing)

I'd encourage that you write down your changes as you go.

DO NOT MAKE ANY MAJOR CHANGES!!!

*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int hours;
	double wage;
	double total;
	char answer;
	
	cout << "Enter the number of hours worked:" ;
	cin >> hours;
	
	cout << "Enter your wage: ";
	cin >> wage;
	
	if(hours > 40)
	{
		cout << "Were you approved for overtime (y for yes, n for no)?" << endl;
		cin >> answer;
	}
	
	if(hours <= 40 || (hours > 40 && answer == 'n'))
	{
		total = wage * hours;
		
		cout << fixed << setprecision(2) << "You made $" << total << " this week!" << endl;
	}
	else if (hours > 40 && answer == 'y')	
	{
		total = wage * 40 + ((1.5 * wage) * (hours - 40));
		
		cout << fixed << setprecision(2) << "You made $" << total << " this week!" << endl;
	}


	return 0;
}