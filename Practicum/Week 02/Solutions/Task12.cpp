#include <iostream>
using namespace std;

int main()
{
	// The data here is not validated. For Homework, try adding validation.
	// Also, think about adding the year as a third input parameter.
	unsigned int day = 0, month = 0;
	cout << "Date: "; cin >> day >> month;

	day += 1;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day == 32)
		{
			day = 1;
			month++;
		}
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (day == 31)
		{
			day = 1;
			month++;
		}
		break;

	case 2:
		if (day == 29)
		{
			day = 1;
			month++;
		}
		break;
	}

	month %= 12;

	cout << "Next date: " << day << " " << month;
}