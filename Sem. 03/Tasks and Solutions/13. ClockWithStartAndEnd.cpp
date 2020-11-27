#include <iostream>
using namespace std;

int main()
{
	int hStart, mStart, hEnd, mEnd;
	cin >> hStart >> mStart >> hEnd >> mEnd;

	for (int min = mStart + 1; min <= 59; min++)
	{
		if (hStart < 10)
			cout << 0;
		cout << hStart << ":";
		if (min < 10)
			cout << 0;
		cout << min << endl;
	}

	for (int hour = hStart+1; hour <= hEnd-1; hour++)
	{
		for (int min = 0; min <= 59; min++)
		{
			if (hour < 10)
				cout << 0;
			cout << hour << ":";
			if (min < 10)
				cout << 0;
			cout << min << endl;
		}
	}

	for (int min = 0; min < mEnd; min++)
	{
		if (hEnd < 10)
			cout << 0;
		cout << hEnd << ":";
		if (min < 10)
			cout << 0;
		cout << min << endl;
	}
}