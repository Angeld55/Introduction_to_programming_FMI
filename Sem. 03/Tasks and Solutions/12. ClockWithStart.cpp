#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;

	for (int min = m + 1; min <= 59; min++)
	{
		if (h < 10)
			cout << 0;
		cout << h << ":";
		if (min < 10)
			cout << 0;
		cout << min << endl;
	}

	for (int hour = h+1; hour <= 23; hour++)
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
}