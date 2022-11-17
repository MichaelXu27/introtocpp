#include<iostream>
#include<iomanip>

using namespace std;


int main(){

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

	cout << fixed << setprecision(3) << "Your class average is " << sum / count << endl;
	
	//setprecision tells how many numbers your want outputted
	//fixed means that you want it after the decimal
	
	return 0;
}
