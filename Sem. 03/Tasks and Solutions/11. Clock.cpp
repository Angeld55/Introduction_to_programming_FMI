#include <iostream>
using namespace std;

int main()
{
	for (int hour = 0; hour <= 23; hour++)
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