#include <iostream>
using namespace std;

//Задача: Въвежда се цяло число - оценка от училище. Отпечатайте я с дума.

int main()
{
	int grade;
	cin >> grade;

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
