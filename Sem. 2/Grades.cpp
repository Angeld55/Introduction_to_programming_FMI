
#include <iostream>
using namespace std;

int main()
{
	int grade;
	cin >> grade;
   
    //Bad
	if (grade == 2)
	{
		cout << "Poor" << endl;
	}
	if (grade == 3)
	{
		cout << "Average" << endl;
	}
	if (grade == 4)
	{
		cout << "Good" << endl;
	}
	if (grade == 5)
	{
		cout << "Very good" << endl;
	}
	if (grade == 6)
	{
		cout << "Excellent" << endl;
	}
	if (grade < 2 || grade > 6)
	{
		cout << "Invalid" << endl;
	}
    //This works! But when we find a match, we continue checking, even though we don't need to.
	
	//Better
	if (grade == 2)
	{
		cout << "Poor" << endl;
	}
	else if (grade == 3)
	{
		cout << "Average" << endl;
	}
	else if (grade == 4)
	{
		cout << "Good" << endl;
	}
	else if (grade == 5)
	{
		cout << "Very good" << endl;
	}
	else if (grade == 6)
	{
		cout << "Excellent" << endl;
	}
	else
	{
		cout << "Invalid" << endl;
	}

}