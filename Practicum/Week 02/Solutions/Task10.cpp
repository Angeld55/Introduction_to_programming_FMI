#include <iostream>
using namespace std;

int main()
{
	const double EPSILON = 1e-6;
	double begin = 0, end = 0, value = 0;
	cin >> begin >> end >> value;

	if (value < begin || value > end)
	{
		cout << "Value out of bounds";
	}
	else if (abs(value - begin) < EPSILON || abs(end - value) < EPSILON)
	{
		cout << "The number is within the given interval. The interval is closed.";
	}
	else
	{
		cout << "The number is within the given interval. The interval is open.";
	}
}
