#include <iostream>

using namespace std;

int main()
{
	unsigned long long velocity; //assign velocity's interval
	cin >> velocity; //enter velocity's value

	if (velocity < 10)
		cout << "No fine" << endl;
	else if (velocity == 10)
		cout << "Fine: 20$" << endl;
	else if (velocity < 20)
		cout << "Fine: 50$" << endl;
	else if (velocity < 30)
		cout << "Fine: 100$" << endl; 
	else if (velocity < 40)
		cout << "Fine if in Urban area: 400$" << endl //Urban area fine
		<< "Fine if in Metropolitan area: 300$" << endl; //Metropolitan area fine
	else if(velocity <= 50)
		cout << "Fine if in Urban area: 600$" << endl //Urban area fine
		<< "Fine if in Metropolitan area: 400$" << endl;//Metropolitan area fine
	else
	{
		unsigned long long fine = 700 + (((velocity - 50) / 5) * 50);
		

		cout << "Fine if in Urban area: " << fine << "$" << endl 
			<< "Additional 3 months driver licence suspension and 12 driver control points." << endl << endl; //Urban area fine
		cout << "Fine if in Metropolitan area: " << fine - 100 << "$" << endl;//Metropolitan area fine
	}

	cout << endl << "End of program" << endl; //end program
	return 0; //end program
}