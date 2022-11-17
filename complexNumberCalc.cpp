#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void input(double & a, double & b); //function for input
void output(double a, double b); //function for outputting
void addition(double & a,  double & b, double aInput, double bInput); //function for adding
void subtraction(double & a,  double & b, double aInput, double bInput); //function for subtracting
void multiplication(double & a,  double & b, double aInput, double bInput); //function for multiplying
void division(double & a,  double & b, double aInput, double bInput); //function for dividing
void length(double a, double b); //function for length

int main()
{
	char choice;
	double A = 0; //current a value
	double B = 0; //current complex value
	double C = 0; //a value to use order of operations on
	double D = 0; //the binary value to use order of operations on
	
	cout << "Welcome to your Complex Number Calculator!" << endl;
	cout << "Here are your options: " << endl;
	cout << "+ (addition)" << endl;
	cout << "- (subtraction)" << endl;
	cout << "* (multiplication)" << endl;
	cout << "/ (division)" << endl;
	cout << "l (length)" << endl;
	cout << "i (new input)" << endl;
	cout << "q (quit)" << endl;
	
	while(choice != 'q')
	{
		cout << "Enter what you want to do: ";
		cin >> choice;
		
		switch(choice)
		{
			case 'i': //case for input
				input(A, B);
				output(A, B);
				break;
			case '+': //case for addition
				input(C, D);
				addition(A, B, C, D);
				output(A, B);
				break;
			case '-': //case for subtraction
				input(C, D);
				subtraction(A, B, C, D);
				output(A, B);
				break;
			case '*': //case for multiplication
				input(C, D);
				multiplication(A, B, C, D);
				output(A, B);
				break;
			case '/': //case for division
				input(C, D);
				division(A, B, C, D);
				output(A, B);
				break;
			case 'l': //case for length or magnitude
				length(A, B);
				output(A, B);
				break;
			case 'q': //case for quitting the code
				cout << "Thanks for using our calculator!" << endl;
				break;
			default: //if an input does not match a case code defaults to this output
				cout << "not a valid choice" << endl;
				break;
		}
	}

	return 0;
}

void input(double & a, double & b) //allows user to input a and b numbers
{
	cout << "Enter real part: ";
	cin >> a;
	
	cout << "Enter imagniary part: ";
	cin >> b;
}

void output(double a, double b) //outputs the current a and b numbers
{
	cout << fixed << setprecision(2) << "Current value: " << a << " + " << b << "i" << endl;
}

void addition(double & a,  double & b, double aInput, double bInput) //adds the current a and b values to the inputted a and b values, sets the sum of a and b values to the new a and b values
{
	a = a + aInput;
	b = b + bInput;
}

void subtraction(double & a,  double & b, double aInput, double bInput) //subtracts the inputted a and b values to the current a and b values setting the difference of each a and b values to the new a and b values
{
	a = a - aInput;
	b = b - bInput;
}

void multiplication(double & a,  double & b, double aInput, double bInput) //creates a placeholder for a value, sets a and b to their respected values after multiplication
{
	double aPlaceholder = a;
	a = a * aInput - b * bInput;
	b = b * aInput + aPlaceholder * bInput;
}

void division(double & a,  double & b, double aInput, double bInput) // creates placeholders for a and sets a and b to their respected values after division
{
	double aPlaceholder = a;
	a = (a * aInput + b * bInput)/(aInput * aInput + bInput * bInput);	
	b = (b * aInput - aPlaceholder * bInput)/(aInput * aInput + bInput * bInput);
}

void length(double a,  double b) // finds the magnitude of the complex number 
{
	cout<< sqrt((a*a + b*b))<< endl;
}
