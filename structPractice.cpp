#include<iostream>

using namespace std;

struct student
{
	string fname;
	string lname;
	int classYear;
	double gpa;
	bool paysAttention;

};

int main()
{
	student Curt;
	student Tylar;
	
	cout << "What is student 1's first name?" << endl;
	cin >> Curt.fname; //dot notation
	
	cout << "What is student 1's last name?" << endl;
	cin >> Curt.lname;
	
	cout << "What is student 1's class year?" << endl;
	cin >> Curt.classYear;
	
	cout << "What is student 1's GPA?" << endl;
	cin >> Curt.gpa;
	
	cout << "Does student 1 pay attention?" << endl;
	cin >> Curt.paysAttention;
	
	
	cout << endl << endl << endl;
	
	
	cout << "What is student 2's first name?" << endl;
	cin >> Tylar.fname; //dot notation
	
	cout << "What is student 2's last name?" << endl;
	cin >> Tylar.lname;
	
	cout << "What is student 2's class year?" << endl;
	cin >> Tylar.classYear;
	
	cout << "What is student 2's GPA?" << endl;
	cin >> Tylar.gpa;
	
	cout << "Does student 2 pay attention" << endl;
	cin >> Tylar.paysAttention;
	
	cout << endl << endl << endl;
	
	cout << "Battle of the students!" << endl;
	cout << "We have " << Curt.fname << " " << Curt.lname << endl;
	cout << "And we have " << Tylar.fname << " " << Tylar.lname << endl;
	
	if(Curt.classYear > Tylar.classYear)
	{
		cout << Curt.fname << " is not wiser!" << endl;
	}
	else if(Tylar.classYear > Curt.classYear)
	{
		cout << Tylar.fname << " is not wiser!" << endl;
	}
	else
	{
		cout << "Both Equally as immature!" << endl;
	}
	
	
	if(Curt.gpa > Tylar.gpa)
	{
		cout << Tylar.gpa << " is not as smert!" << endl;
	}
	else if(Tylar.gpa > Curt.gpa)
	{
		cout << Curt.fname << " is not as smert!" << endl;
	}
	else
	{
		cout << "Both Equally as smert!" << endl;
	}
	
	
	if(!Curt.paysAttention && Tylar.paysAttention)
	{
		cout << Curt.fname << " is a problem child" << endl;
	}
	else if (!Tylar.paysAttention && Curt.paysAttention)
	{
		cout << Tylar.fname << " is a problem child" << endl;
	}
	else if(!Tylar.paysAttention && !Curt.paysAttention)
	{
		cout << "Dear lord what kind of class is this" << endl;
	}
	else
	{
		cout << "Best class ever" << endl;
	}
	
	return 0;
}