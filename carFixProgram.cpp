#include<iostream>

using namespace std;

int main()
{
	int carModel;
	
	cout << "Enter your model number(0 for done):" ;
	cin >> carModel;
	
	while(carModel != 0)
	{
		if(carModel == 119 || carModel == 179 ||(carModel >= 189 && carModel <= 195) || carModel == 221 || carModel == 780)
		{
			cout << "Your car is defective. Please have it fixed" << endl;
		}
		else
		{
			cout << "Your car is OK" << endl;
		}
		
		cout << "Enter your model number(0 for done):" ;
		cin >> carModel;
		
	}
	
	cout << "Program Complete." << endl;

	return 0;
}